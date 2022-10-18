
(comment) @comment

(procedure
  "proc" @keyword.function
  name: (simple_word)
)

[ "namespace" "set" ] @keyword
[ "if" "else" "elseif" ] @conditional

(quoted_word) @string

[
  "{" "}"
  "[" "]"
] @structure
