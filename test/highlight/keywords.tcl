# Testing various keywords from the highlights rules

# The following lines test keywords captured by the
# rule: (command name: (simple_word) @keyword (#any-of? ...))
# and by the literal array: [ "error" "namespace" "on" "set" "try" ] @keyword

# Test keyword: append
append list {item}
# <- keyword

# Test keyword: break
break
# <- keyword

# Test keyword: catch
catch {some_command}
# <- keyword

# Test keyword: continue
continue
# <- keyword

# Test keyword: default
default "value"
# <- keyword

# Test keyword: dict
dict create key value
# <- keyword

# Test keyword: error (from both command and literal array)
error "An error occurred"
# <- keyword

# Test keyword: eval
eval {set a 1}
# <- keyword

# Test keyword: global
global var
# <- keyword

# Test keyword: lappend
lappend myList "new item"
# <- keyword

# Test keyword: lassign
lassign $list a b
# <- keyword

# Test keyword: lindex
lindex $list 0
# <- keyword

# Test keyword: linsert
linsert $list 1 "new"
# <- keyword

# Test keyword: list
list a b c
# <- keyword

# Test keyword: llength
llength $list
# <- keyword

# Test keyword: lmap
lmap item $list {expr {$item * 2}}
# <- keyword

# Test keyword: lrange
lrange $list 0 2
# <- keyword

# Test keyword: lrepeat
lrepeat 3 {puts "Hello"}
# <- keyword

# Test keyword: lreplace
lreplace $list 0 1 "new"
# <- keyword

# Test keyword: lreverse
lreverse $list
# <- keyword

# Test keyword: lsearch
lsearch $list "item"
# <- keyword

# Test keyword: lset
lset $list 0 "new"
# <- keyword

# Test keyword: lsort
lsort $list
# <- keyword

# Test keyword: package
package require SomePackage
# <- keyword

# Test keyword: return
return
# <- keyword

# Test keyword: switch
switch $value {
# <- keyword
    a {
        return
#       ^ keyword
    }
    "b" { return }
#   ^ string
    default {
#   ^ keyword
        puts "default"
#       ^ function
#             ^ string
    }
}

# Test keyword: throw
throw "error"
# <- keyword

# Test keyword: unset
unset var
# <- keyword

# Test keyword: variable
variable myVar 42
# <- keyword

# Now test the literal array of keywords:
# These keywords are also expected to be captured as @keyword:
# "error", "namespace", "on", "set", "try"

# Test literal keyword: error
error "message"
# <- keyword

# Test literal keyword: namespace
namespace eval myNs {
# <- keyword
    # Inside a namespace block, the keyword should still be highlighted.
}

# Test literal keyword: on
on event {
    # Dummy event handler block.
}
# <- keyword

# Test literal keyword: set
set myVar 10
# <- keyword

# Test literal keyword: try
try {
# <- keyword
    # Code that might fail.
} trap {error} {
    # Handle error.
}

# Test literal keyword: finally
# set f [open /some/file/name a]
try {
# keyword
    puts $f "some message"
    # ...
} finally {
# ^ keyword
    close $f
}
