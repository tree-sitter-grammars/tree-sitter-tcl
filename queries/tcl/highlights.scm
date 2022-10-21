
(comment) @comment

"proc" @keyword.function

[
  "global"
  "namespace"
  "expr"
  "set"
  "try"
  "on"
  "error"
] @keyword

(unpack) @operator

[
 "while"
 "foreach"
] @repeat

[
  "if"
  "else"
  "elseif"
] @conditional

[
 "eq"
 "ne"
 "=="
 "!="
 "&&"
 "||"
 "in"
 "ni"
 "<"
 "<="
 ">"
 ">="
 "!"
] @operator

(variable_substitution) @parameter
(quoted_word) @string
(escaped_character) @string.escape

[
  "{" "}"
  "[" "]"
  ";"
] @punctuation.delimiter

((simple_word) @number
 (#lua-match? @number "^[0-9]+$"))
