

build:
	tree-sitter generate

test:
	tree-sitter parse test.tcl
