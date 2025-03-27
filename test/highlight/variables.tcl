# Test keyword: unset
unset var
# <- keyword
#     ^ variable

# Test keyword: variable
variable myVar 42
# <- keyword
#        ^ variable

$myvar
# <- variable
${myvar}
# <- variable
#^ punctuation.delimiter
#  ^ variable
"${myvar}"
# <- string
#   ^ variable
#        ^ string
"$myvar"
# <- string
#   ^ variable
