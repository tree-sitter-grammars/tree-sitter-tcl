// Taken from the expr man page
const PREC = {
  unary: 150, // - + ~ !
  exp: 140, // **
  muldiv: 130, // * / %
  addsub: 120, // + -
  shift: 110, // << >>
  compare: 100, // > < >= <=
  equal_bool: 90, // == !=
  equal_string: 80, // eq ne
  contain: 70, // in ni
  and_bit: 60, // &
  xor_bit: 50, // ^
  or_bit: 40, // |
  and_logical: 30, // &&
  or_logical: 20, // ||
  ternary: 10, // x ? y : z
};

const interleaved1 = (rule, delim) => seq(rule, repeat(seq(delim, rule)));

module.exports = grammar({
  name: "tcl",

  word: ($) => $.simple_word,

  externals: ($) => [$._concat, $._immediate],

  inline: ($) => [$._builtin, $._terminator, $._word],

  extras: ($) => [/\s+/, /\\\r?\n/],

  rules: {
    source_file: ($) => repeat(seq(optional($._command), $._terminator)),

    _terminator: (_) => choice("\n", ";"),

    comment: (_) => /#[^\n]*/,

    _builtin: ($) =>
      choice(
        $.conditional,
        $.global,
        $.namespace,
        $.procedure,
        $.set,
        $.try,
        $.foreach,
        $.expr_cmd,
        $.while,
        $.catch,
        $.regexp,
      ),

    // regexp ?switches? exp string ?matchVar? ?subMatchVar subMatchVar ...?
    regexp: ($) =>
      seq(
        "regexp",
        $._word_simple, // exp
        $._concat_word, // string
        repeat($._concat_word),
      ),

    while: ($) => seq("while", $.expr, $._word),

    expr_cmd: ($) => seq("expr", $.expr),

    foreach: ($) => seq("foreach", $.arguments, $._word_simple, $._word),

    global: ($) => seq("global", repeat($._concat_word)),

    namespace: ($) => seq("namespace", $.word_list),

    try: ($) =>
      seq(
        "try",
        $._word,
        optional(seq("on", "error", $.arguments, $._word)),
        optional($.finally),
      ),

    finally: ($) => seq("finally", $._word),

    _command: ($) => choice($._builtin, $.comment, $.command),

    command: ($) =>
      seq(field("name", $._word), optional(field("arguments", $.word_list))),

    word_list: ($) => repeat1($._word),

    unpack: (_) => "{*}",

    _word: ($) =>
      seq(optional($.unpack), choice($.braced_word, $._concat_word)),

    _word_simple: ($) =>
      interleaved1(
        choice(
          $.escaped_character,
          $.command_substitution,
          $.simple_word,
          $.quoted_word,
          $.variable_substitution,
          $.braced_word_simple,
        ),
        $._concat,
      ),

    _concat_word: ($) =>
      interleaved1(
        choice(
          $.escaped_character,
          $.command_substitution,
          seq($.simple_word, optional($.array_index)),
          $.quoted_word,
          $.variable_substitution,
        ),
        $._concat,
      ),

    _ns_delim: (_) => token.immediate("::"),

    _ident_imm: (_) => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    _ident: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _id_immediate: ($) =>
      seq(
        optional($._ns_delim),
        $._ident_imm,
        repeat(seq($._ns_delim, $._ident_imm)),
      ),

    id: ($) =>
      seq(
        choice(seq("::", $._ident_imm), $._ident),
        repeat(seq($._ns_delim, $._ident_imm)),
      ),

    array_index: ($) => seq(token.immediate("("), $._word_simple, ")"),

    variable_substitution: ($) =>
      seq(
        choice(
          seq("$", alias($._id_immediate, $.id)),
          seq("$", "{", /[^}]+/, "}"),
        ),
        optional($.array_index),
      ),

    braced_word: ($) =>
      seq(
        "{",
        optional(
          seq(
            interleaved1($._command, repeat1($._terminator)),
            repeat($._terminator),
          ),
        ),
        "}",
      ),

    braced_word_simple: ($) => seq("{", repeat($._word_simple), "}"),

    set: ($) =>
      seq(
        "set",
        choice(seq($.id, optional($.array_index)), seq("$", "{", /[^}]+/, "}")),
        optional($._word_simple),
      ),

    procedure: ($) =>
      seq(
        "proc",
        field("name", $._word),
        field("arguments", $.arguments),
        field("body", $._word),
      ),

    _argument_word: ($) => choice($.simple_word, $.quoted_word, $.braced_word),

    argument: ($) =>
      choice(
        field("name", $.simple_word),
        seq(
          "{",
          field("name", $.simple_word),
          optional(field("default", $._argument_word)),
          "}",
        ),
      ),

    arguments: ($) => choice(seq("{", repeat($.argument), "}"), $.simple_word),

    number: ($) => /[+-]?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/,
    _boolean: ($) =>
      token(choice("1", "0", /[Tt][Rr][Uu][Ee]/, /[Ff][Aa][Ll][Ss][Ee]/)),

    _expr_atom_no_brace: ($) =>
      choice(
        // As a numeric value, either integer or floating-point.
        $.number,

        // As a boolean value, using any form understood by string is boolean.
        $._boolean,

        // As a mathematical function whose arguments have any of the above
        // forms for operands, such as sin($x). See MATH FUNCTIONS below for a
        // discussion of how mathematical functions are handled.
        seq($.simple_word, "(", $._expr, ")"),

        // As a Tcl command enclosed in brackets. The command will be executed
        // and its result will be used as the operand.
        $.command_substitution,

        // As a string enclosed in double-quotes. The expression parser will
        // perform backslash, variable, and command substitutions on the
        // information between the quotes, and use the resulting value as the
        // operand
        $.quoted_word,

        // As a Tcl variable, using standard $ notation. The variable's value
        // will be used as the operand.
        $.variable_substitution,
      ),

    _expr: ($) =>
      choice(
        $.unary_expr,
        $.binop_expr,
        $.ternary_expr,
        $.escaped_character,
        seq("(", $._expr, ")"),
        $._expr_atom_no_brace,

        // As a string enclosed in braces. The characters between the open
        // brace and matching close brace will be used as the operand without
        // any substitutions.
        $.braced_word_simple,
      ),

    expr: ($) => choice(seq("{", $._expr, "}"), $._expr_atom_no_brace),

    unary_expr: ($) =>
      prec.left(PREC.unary, seq(choice("-", "+", "~", "!"), $._expr)),

    binop_expr: ($) =>
      choice(
        prec.left(PREC.exp, seq($._expr, "**", $._expr)),
        prec.left(PREC.muldiv, seq($._expr, choice("/", "*", "%"), $._expr)),
        prec.left(PREC.addsub, seq($._expr, choice("+", "-"), $._expr)),
        prec.left(PREC.shift, seq($._expr, choice("<<", ">>"), $._expr)),
        prec.left(
          PREC.compare,
          seq($._expr, choice(">", "<", ">=", "<="), $._expr),
        ),
        prec.left(PREC.equal_bool, seq($._expr, choice("==", "!="), $._expr)),
        prec.left(PREC.equal_string, seq($._expr, choice("eq", "ne"), $._expr)),
        prec.left(PREC.contain, seq($._expr, choice("in", "ni"), $._expr)),
        prec.left(PREC.and_bit, seq($._expr, "&", $._expr)),
        prec.left(PREC.xor_bit, seq($._expr, "^", $._expr)),
        prec.left(PREC.or_bit, seq($._expr, "|", $._expr)),
        prec.left(PREC.and_logical, seq($._expr, "&&", $._expr)),
        prec.left(PREC.or_logical, seq($._expr, "||", $._expr)),
      ),

    ternary_expr: ($) =>
      prec.left(PREC.ternary, seq($._expr, "?", $._expr, ":", $._expr)),

    elseif: ($) => seq("elseif", field("condition", $.expr), $._word),

    else: ($) => seq("else", $._word),

    conditional: ($) =>
      seq(
        "if",
        field("condition", $.expr),
        $._word,
        repeat($.elseif),
        optional($.else),
      ),

    // catch script ?varName?
    catch: ($) => seq("catch", $._word, optional($._concat_word)),

    quoted_word: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $.variable_substitution,
            $._quoted_word_content,
            $.command_substitution,
            $.escaped_character,
          ),
        ),
        '"',
      ),

    escaped_character: (_) => /\\./,

    _quoted_word_content: (_) => token(prec(-1, /[^$\\\[\]"]+/)),

    command_substitution: ($) => seq("[", $._command, "]"),

    simple_word: (_) => /[^!$\s\\\[\]{}();"]+/,
  },
});
