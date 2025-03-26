.PHONY: build

build: parser/tcl.so

parser/tcl.so: src/parser.c src/scanner.c
	$(RM) $@
	mkdir -p parser
	tree-sitter build -o $@

src/parser.c: grammar.js
	tree-sitter generate

.PHONY: test
test: parser/tcl.so
	tree-sitter test

npm-install:
	docker compose run tree-sitter-tcl npm install
