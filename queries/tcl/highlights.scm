
(comment) @comment

"proc" @keyword.function

[
  "global"
  "namespace"
  "set"
  "try"
  "on"
  "error"
] @keyword

[ ";" ] @punctuation.delimiter

[ "foreach" ] @keyword

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
 "<"
 ">"
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
