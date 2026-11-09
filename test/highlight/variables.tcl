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

set {foo} {bar}
# <- keyword
#    ^ variable
#          ^ string

set {foo}
#    ^ variable

set {foo $bar [error nope] "} value
#    ^ variable
#        ^ variable
#               ^ variable
#                        ^ variable

set {items(first)} value
#    ^ variable
#          ^ variable

set name {value}
#         ^ string

set ${name} {value}
#            ^ string
