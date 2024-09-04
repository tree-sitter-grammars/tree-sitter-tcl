.PHONY: build

build: parser/tcl.so

parser/tcl.so: src/parser.c src/scanner.c
	$(RM) $@
	mkdir -p parser
	tree-sitter build -o $@

src/parser.c: grammar.js
	tree-sitter generate

test:
	tree-sitter test
