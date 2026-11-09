#!/bin/sh
# <- comment

# Actually, this is a tcl script \
exec tclsh "$0" ${1+"$@"}
# <- comment
#           ^ comment
#                   ^ comment

puts ready
# <- function

# comment \\
puts visible
# <- function

# comment \\\
puts hidden
# <- comment

# continued \
first segment \
second segment
# <- comment

puts visible
# <- function
