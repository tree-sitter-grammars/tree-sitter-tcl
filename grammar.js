const PREC = {
  unary        : 150,
  exp          : 140,
  muldiv       : 130,
  addsub       : 120,
  shift        : 110,
  compare      : 100,
  equal_bool   : 90,
  equal_string : 80,
  contain      : 70,
  and_bit      : 60,
  xor_bit      : 50,
  or_bit       : 40,
  and_logical  : 30,
  or_logical   : 20,
  ternary      : 10,
}

const interleaved1 = (rule, delim) => seq(rule, repeat(seq(delim, rule)))

module.exports = grammar({
  name: 'tcl',

  word: $ => $.simple_word,

  externals: $ => [
    $.concat
  ],

  inline: $ => [
    $._commands,
    $._builtin,
    $._terminator,
    $._word,
  ],

  extras: $ => [
    /\s+/,
    /\\\r?\n/
  ],

  rules: {
    source_file: $ => $._commands,

    _commands: $ => seq(
      interleaved1($._command, $._terminator),
      optional($._terminator)
    ),

    _terminator: _ => choice('\n', ';'),

    comment: _ => /#[^\n]*/,

    _builtin: $ => choice(
      $.conditional,
      $.global,
      $.namespace,
      $.procedure,
      $.set,
      $.try,
      $.foreach,
      $.expr_cmd,
      $.while,
    ),

    while: $ => seq('while', $.expr, $._word),

    expr_cmd: $ => seq('expr', $.expr),

    foreach: $ => seq("foreach", $.arguments, $._word, $._word),

    global: $ => seq("global", repeat($._concat_word)),

    namespace: $ => seq('namespace', $.word_list),

    try: $ => seq(
      "try",
      $._word,
      optional(seq(
        "on",
        "error",
        $.arguments,
        $._word,
      ))
    ),

    _command: $ => choice(
      $._builtin,
      $.comment,
      $.command
    ),

    command: $ => seq(
      field('name', $._word),
      optional(field('arguments', $.word_list))
    ),

    word_list: $ => repeat1($._word),

    unpack: _ => '{*}',

    _word: $ => seq(
      optional($.unpack),
      choice(
        $.braced_word,
        $._concat_word,
      )
    ),

    _concat_word: $ => interleaved1(
      choice(
        $.command_substitution,
        $.simple_word,
        $.quoted_word,
        $.variable_substitution,
      ),
      $.concat,
    ),

    id: $=> repeat1(seq(optional($._ns_delim), $._ident)),

    _ns_delim: _ => "::",
    _ident: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    array_index: $ => seq('(', $.simple_word, ')'),

    variable_substitution: $ => seq(
      choice(
        seq('$', $.id),
        seq('${', /[^}]+/, '}'),
      ),
      optional($.array_index)
    ),

    // braced_content: $ => /[^{}]+/,
    // _braced_content: $ => repeat1(choice('\n', $._word)),

    braced_word: $ => seq('{',
      optional(choice(
        prec(3, $._commands),
        // prec(2, $.braced_word),
        // prec(1, $.braced_content)
      )),
    '}'),

    braced_word_simple: $ => seq('{',
      repeat(choice(
        $.braced_word_simple,
        $._concat_word,
      )),
    '}'),

    set: $ => seq("set", $._word, $._word),

    procedure: $ => seq(
      "proc",
      field('name', $._concat_word),
      field('arguments', $.arguments),
      field('body', $._word)
    ),

    _argument_word: $ => choice($.simple_word, $.quoted_word, $.braced_word),

    argument: $ => choice(
      field('name', $.simple_word),
      seq(
        '{',
         field('name', $.simple_word),
         optional(field('default', $._argument_word)),
         '}'
      )
    ),

    arguments: $ => choice(
      seq('{', repeat($.argument) , '}'),
      $.simple_word,
    ),

    expr: $ => choice(
      seq("{", $.expr, "}"),
      seq("(", $.expr, ")"),
      seq($.simple_word, "(", $.expr, ")"),
      $.unary_expr,
      $.binop_expr,
      $.ternary_expr,
      $._concat_word,
    ),

    unary_expr: $ => prec.left(PREC.unary, seq(choice("-", "+", "~", "!"), $.expr)),

    binop_expr: $ => choice(
      prec.left(PREC.exp,          seq($.expr, "**",  $.expr)),

      prec.left(PREC.muldiv,       seq($.expr, "/",  $.expr)),
      prec.left(PREC.muldiv,       seq($.expr, "*",  $.expr)),
      prec.left(PREC.muldiv,       seq($.expr, "%",  $.expr)),
      prec.left(PREC.addsub,       seq($.expr, "+",  $.expr)),
      prec.left(PREC.addsub,       seq($.expr, "-",  $.expr)),

      prec.left(PREC.shift,        seq($.expr, "<<", $.expr)),
      prec.left(PREC.shift,        seq($.expr, ">>", $.expr)),

      prec.left(PREC.compare,      seq($.expr, ">",  $.expr)),
      prec.left(PREC.compare,      seq($.expr, "<",  $.expr)),
      prec.left(PREC.compare,      seq($.expr, ">=", $.expr)),
      prec.left(PREC.compare,      seq($.expr, "<=", $.expr)),

      prec.left(PREC.equal_bool,   seq($.expr, "==", $.expr)),
      prec.left(PREC.equal_bool,   seq($.expr, "!=", $.expr)),

      prec.left(PREC.equal_string, seq($.expr, "eq", $.expr)),
      prec.left(PREC.equal_string, seq($.expr, "ne", $.expr)),

      prec.left(PREC.contain,      seq($.expr, "in", $.braced_word_simple)),
      prec.left(PREC.contain,      seq($.expr, "ni", $.braced_word_simple)),

      prec.left(PREC.and_bit,      seq($.expr, "&", $.expr)),
      prec.left(PREC.xor_bit,      seq($.expr, "^", $.expr)),
      prec.left(PREC.or_bit,       seq($.expr, "|", $.expr)),

      prec.left(PREC.and_logical,  seq($.expr, "&&", $.expr)),
      prec.left(PREC.or_logical,   seq($.expr, "||", $.expr)),
    ),

    ternary_expr: $ => prec.left(PREC.ternary, seq($.expr, '?', $.expr, ':', $.expr)),

    elseif: $ => seq(
      "elseif",
      field('condition', $.expr),
      $._word,
    ),

    else: $ => seq(
      "else",
      $._word,
    ),

    conditional: $ => seq(
      "if",
      field('condition', $.expr),
      $._word,
      repeat($.elseif),
      optional($.else),
    ),

    quoted_word: $ => seq(
      '"',
      repeat(
        choice(
          $._quoted_word_content,
          $.variable_substitution,
          $.command_substitution,
          $.escaped_character,
        ),
      ),
      '"',
    ),

    escaped_character: _ => /\\./,

    _quoted_word_content: _ => /[^$\\\[\]"]+/,

    command_substitution: $ => seq('[', $._command, ']'),

    simple_word: _ => token(/[^!$\s\\\[\]{}();"]+/),
  }
});

