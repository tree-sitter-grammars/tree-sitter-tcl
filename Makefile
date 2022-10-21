.PHONY: build

build: parser/tcl.so

parser/tcl.so: src/parser.c src/scanner.c
	$(RM) $@
	mkdir -p parser
	$(CC) -o $@ -Isrc $^ -shared -fPIC -Os

src/parser.c: grammar.js
	tree-sitter generate

test:
	tree-sitter parse test.tcl
