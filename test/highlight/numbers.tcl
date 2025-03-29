after 100 { set num -1 }
#     ^ number
#                    ^ number

if { $openindex == -1 } { return }
#                   ^ number

set product [expr (1 + 1)]
#                  ^ number
#                      ^ number

if {[expr (1 + 1)]} { return }
#          ^ number
#              ^ number

string range $parameter 0 end-1
#                       ^ number
