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
    $.concat,
    $._ns_delim
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
      repeat($._terminator),
      interleaved1($._command, repeat1($._terminator)),
      repeat($._terminator)
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
      $.catch,
    ),

    while: $ => seq('while', $.expr, $._word),

    expr_cmd: $ => seq('expr', $.expr),

    foreach: $ => seq("foreach", $.arguments, $._word_simple, $._word),

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
      )),
      optional($.finally)
    ),

    finally: $=> seq('finally', $._word),

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

    _word_simple: $ => seq(choice(
      $.braced_word_simple,
      $._concat_word,
    )),

    _concat_word: $ => interleaved1(
      choice(
        $.escaped_character,
        $.command_substitution,
        $.simple_word,
        $.quoted_word,
        $.variable_substitution,
      ),
      $.concat,
    ),

    _ident: _ => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),

    id: $ => seq(optional($._ns_delim), interleaved1($._ident, $._ns_delim)),

    array_index: $ => seq('(', $._concat_word, ')'),

    variable_substitution: $ => seq(
      choice(
        seq('$', $.id),
        seq('$', '{', /[^}]+/, '}'),
      ),
      optional($.array_index)
    ),

    braced_word: $ => seq('{', optional($._commands), '}'),

    braced_word_simple: $ => seq('{',
      repeat(choice(
        $.braced_word_simple,
        $._concat_word,
      )),
    '}'),

    set: $ => seq("set", $._word, $._word),

    procedure: $ => seq(
      "proc",
      field('name', $._word),
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

    _expr: $ => choice(
      seq("(", $._expr, ")"),
      seq($.simple_word, "(", $._expr, ")"),
      $.unary_expr,
      $.binop_expr,
      $.ternary_expr,
      $._concat_word,
    ),

    expr: $ => choice(
      seq('{', $._expr, '}'),
      $._expr,
    ),

    unary_expr: $ => prec.left(PREC.unary, seq(choice("-", "+", "~", "!"), $._expr)),

    binop_expr: $ => choice(
      prec.left(PREC.exp,          seq($._expr, "**",  $._expr)),

      prec.left(PREC.muldiv,       seq($._expr, "/",  $._expr)),
      prec.left(PREC.muldiv,       seq($._expr, "*",  $._expr)),
      prec.left(PREC.muldiv,       seq($._expr, "%",  $._expr)),
      prec.left(PREC.addsub,       seq($._expr, "+",  $._expr)),
      prec.left(PREC.addsub,       seq($._expr, "-",  $._expr)),

      prec.left(PREC.shift,        seq($._expr, "<<", $._expr)),
      prec.left(PREC.shift,        seq($._expr, ">>", $._expr)),

      prec.left(PREC.compare,      seq($._expr, ">",  $._expr)),
      prec.left(PREC.compare,      seq($._expr, "<",  $._expr)),
      prec.left(PREC.compare,      seq($._expr, ">=", $._expr)),
      prec.left(PREC.compare,      seq($._expr, "<=", $._expr)),

      prec.left(PREC.equal_bool,   seq($._expr, "==", $._expr)),
      prec.left(PREC.equal_bool,   seq($._expr, "!=", $._expr)),

      prec.left(PREC.equal_string, seq($._expr, "eq", $._expr)),
      prec.left(PREC.equal_string, seq($._expr, "ne", $._expr)),

      prec.left(PREC.contain,      seq($._expr, "in", choice($._concat_word, $.braced_word_simple))),
      prec.left(PREC.contain,      seq($._expr, "ni", choice($._concat_word, $.braced_word_simple))),

      prec.left(PREC.and_bit,      seq($._expr, "&", $._expr)),
      prec.left(PREC.xor_bit,      seq($._expr, "^", $._expr)),
      prec.left(PREC.or_bit,       seq($._expr, "|", $._expr)),

      prec.left(PREC.and_logical,  seq($._expr, "&&", $._expr)),
      prec.left(PREC.or_logical,   seq($._expr, "||", $._expr)),
    ),

    ternary_expr: $ => prec.left(PREC.ternary, seq($._expr, '?', $._expr, ':', $._expr)),

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

    catch: $ => seq(
      "catch",
      $._word,
    ),

    quoted_word: $ => seq(
      '"',
      repeat(choice(
        $.variable_substitution,
        $._quoted_word_content,
        $.command_substitution,
        $.escaped_character,
      )),
      '"',
    ),

    escaped_character: _ => /\\./,

    _quoted_word_content: _ => token(prec(-1, /[^$\\\[\]"]+/)),

    command_substitution: $ => seq('[', $._command, ']'),

    simple_word: _ => token(/[^!$\s\\\[\]{}();"]+/),
  }

});
