namespace children foo bar
# <- keyword
#           ^ string.special
namespace code {puts "hello"}
#           ^ string.special
namespace current
namespace delete foo bar
namespace eval foo {puts "world"} arg1 arg2
namespace exists foo
namespace export -clear foo bar
namespace forget foo bar
namespace import -force foo bar
#                 ^ string.special
namespace inscope foo {puts "inscope"} arg1 arg2
namespace origin foo
namespace parent foo
namespace qualifiers foo
namespace tail foo
namespace which -command foo
