module.exports = grammar({
  name: 'tcl',

  word: $ => $.simple_word,

  inline: $ => [
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
      $.procedure,
      $.conditional,
      $.set,
      $.namespace,
    ),

    namespace: $ => seq(
      'namespace',
      seq(
        'eval',
        $._word,
        $.command_block,
      )
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

    _word: $ =>
      choice(
        $.command_substitution,
        $.simple_word,
        $.quoted_word,
        $.braced_word,
        $.variable_substitution,
      ),

    variable_substitution: $ => choice(
      $._simple_variable,
      $._braced_variable
    ),

    _simple_variable: _ => seq('$', /[a-zA-Z_][a-zA-Z0-9_]+/),
    _braced_variable: _ => seq('${', /[^}]+/, '}'),

    command_block: $ => seq('{', optional($.commands), '}'),

    set: $ => seq("set", $._word, $._word),

    procedure: $ => seq(
      "proc",
      field('name', $._word),
      field('arguments', $.procedure_arguments),
      field('body', choice(
        $.command_block,
        $.simple_word
      ))
    ),

    procedure_arguments: $ => choice(
      seq('{', repeat($.simple_word), '}'),
      $.simple_word,
    ),

    elseif: $ => seq(
      "elseif",
      field('condition', $._word),
      $.command_block,
    ),

    else: $ => seq(
      "else",
      $.command_block,
    ),

    conditional: $ => seq(
      "if",
      field('condition', $._word),
      $.command_block,
      repeat($.elseif),
      optional($.else),
    ),

    quoted_word: $ =>
      seq(
        '"',
        repeat1(
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

