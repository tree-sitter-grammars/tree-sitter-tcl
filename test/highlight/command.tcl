# No quoting (simple word)
regsub foo $input bar
# <- function
#       ^ string.regex
#          ^  variable
#                  ^ string.regex

# Braces for pattern
regsub -all {foo} $input bar
# <- function
#       ^ attribute
#             ^ string.regex
#                   ^  variable
#                         ^ string.regex

# Double quotes for pattern
regsub -all "foo" $input bar
# <- function
#       ^ attribute

# Braced pattern with braces in substitution
regsub -nocase {\<example\>} $input {"&"} output
# <- function
#       ^ attribute
#                ^ string.regex
#                               ^ variable
#                                     ^ string.regex

# Quoted pattern with quoted substitution
regsub -nocase "\<example\>" $input "\"&\"" output
# <- function

# Braced pattern and substitution
regsub {^[[:blank:]]*\r?\n} $input {} output
# <- function

# Braced pattern with capture group
regsub {.*?([[:blank:]]*)$} $input {\1} output
# <- function

# Braced pattern with backslash substitution
regsub -all $pattern $input $subst result
# <- function

# Quoted pattern, quoted substitution, switch end marker
regsub -- "-foo" $input "bar"
# <- function

# Braced pattern, quoted substitution, start offset
regsub -start 5 {foo} $input "bar" output
# <- function
#       ^ attribute
#             ^ number

regsub -start ${dollar} {foo} $input "bar" output
# <- function
#       ^ attribute
#                ^ variable

# Quoted pattern, braced substitution, with -all
regsub -all "foo" $input {bar} output

# No quoting at all
regsub -all foo $input bar output
