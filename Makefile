.PHONY: build

build: parser/tcl.so

parser/tcl.so: src/parser.c
	$(RM) $@
	mkdir -p parser
	cc -o $@ -Isrc $^ -shared -fPIC -0s

src/parser.c: grammar.js
	tree-sitter generate

test:
	tree-sitter parse test.tcl
