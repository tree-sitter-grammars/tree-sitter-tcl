const PREC = {
  or: 10,
  and: 11,
  not: 12,
  compare: 13,
  bitwise_or: 14,
  bitwise_and: 15,
  xor: 16,
  shift: 17,
  plus: 18,
  times: 19,
  unary: 20,
  power: 21,
  call: 22,
}

module.exports = grammar({
  name: 'tcl',

  word: $ => $.simple_word,

  inline: $ => [
    $._expr,
    $._commands,
    $._builtin,
    $._terminator,
    $._word,
  ],

  extras: $ => [
    /\s+/,
    /\\\r?\n/
  ],

  conflicts: $ => [
    [$.simple_word],
  ],

  rules: {
    source_file: $ => $._commands,

    commands: $ => $._commands,

    _commands: $ => repeat1(seq(
      optional($._command),
      $._terminator
    )),

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
    ),

    foreach: $ => seq(
      "foreach",
      $.arguments,
      $._word,
      $.command_block,
    ),

    global: $ => seq(
      "global",
      $.word_list
    ),

    namespace: $ => seq(
      'namespace',
      choice(
        seq(
          'eval',
          $._word,
          $._cword,
        ),
        $.word_list, // Fallback for dynamic stuff
      )
    ),

    try: $ => seq(
      "try",
      $._cword,
      optional(seq(
        "on",
        "error",
        $.arguments,
        $._cword,
      ))
    ),

    _command: $ => choice(
      $._builtin,
      $.comment,
      $.command
    ),

    command: $ => seq(
      field('name', $.simple_word),
      optional(field('arguments', $.word_list))
    ),

    word_list: $ => repeat1($._word),

    _word: $ =>
      choice(
        $.command_substitution,
        $.simple_word,
        $.quoted_word,
        $.braced_word,
        // $.command_block,
        $.variable_substitution,
      ),

    _cword: $ => choice(
      $.command_substitution,
      $.simple_word,
      $.quoted_word,
      $.command_block,
      $.variable_substitution,
    ),

    _ns_delim: _ => "::",
    _ident: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    variable_substitution: $ => choice(
      seq('$', repeat1(seq(optional($._ns_delim), $._ident))),
      seq('${', /[^}]+/, '}'),
    ),

    command_block: $ => seq('{', optional($.commands), '}'),

    set: $ => seq("set", $._word, $._word),

    procedure: $ => seq(
      "proc",
      field('name', $._word),
      field('arguments', $.arguments),
      field('body', $._cword)
    ),

    arguments: $ => choice(
      seq('{', repeat($.simple_word), '}'),
      $.simple_word,
    ),

    expr: $ => choice(
      seq("{", $.expr, "}"),
      seq("(", $.expr, ")"),
      $.unary_expr,
      $.binop_expr,
      $._expr,
    ),

    _expr: $ => choice(
      $.variable_substitution,
      $.command_substitution,
      $.simple_word,
      $.quoted_word,
      // $.braced_word,
    ),

    unary_expr: $ => seq("!", $.expr),

    binop_expr: $ => choice(
      prec.left(PREC.plus, seq($.expr, "+", $.expr)),
      prec.left(PREC.plus, seq($.expr, "-", $.expr)),
      prec.left(PREC.compare, seq($.expr, "eq", $.expr)),
      prec.left(PREC.compare, seq($.expr, "==", $.expr)),
      prec.left(PREC.compare, seq($.expr, "ne", $.expr)),
      prec.left(PREC.compare, seq($.expr, "!=", $.expr)),
      prec.left(PREC.compare, seq($.expr, "in", $.expr)),
      prec.left(PREC.compare, seq($.expr, ">", $.expr)),
      prec.left(PREC.compare, seq($.expr, "<", $.expr)),
      prec.left(PREC.and, seq($.expr, "&&", $.expr)),
      prec.left(PREC.or, seq($.expr, "||", $.expr)),
    ),

    elseif: $ => seq(
      "elseif",
      field('condition', $.expr),
      $._cword,
    ),

    else: $ => seq(
      "else",
      $._cword,
    ),

    conditional: $ => seq(
      "if",
      field('condition', $.expr),
      $._cword,
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

    braced_word: $ => seq('{', repeat(choice('\n', $._word)), '}'),
    command_substitution: $ => seq('[', $._command, ']'),

    simple_word: _ => token(/[^$\s\\\[\]{};"]+/),
  }
});

