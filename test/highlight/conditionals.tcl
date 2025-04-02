# Test basic if/else highlighting

if {$x > 0} {
# <- keyword
#  ^ punctuation.delimiter
#   ^ variable
#      ^ operator
#         ^ punctuation.delimiter
  puts "positive"
# ^ function
#        ^ string
}
# Testing else on a newline
else {
# <- keyword
  puts "non-positive"
}

# Test if/elseif/else sequence

if {$x == 0} {
# <- keyword
    puts "zero"
} elseif {$x < 0} {
# ^ keyword
    puts "negative"
} else {
# ^ keyword
    puts "fallback"
}

# Test nested conditionals

if {[expr {$x > 10}]} {
# <- keyword
  if {$y == 1} {
# ^ keyword
    puts "nested: condition met"
  } else {
#   ^ keyword
    puts "nested: alternative"
  }
} else {
# ^ keyword
  puts "outer else"
# ^ function
}
