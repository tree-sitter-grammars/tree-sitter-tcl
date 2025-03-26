# Make Config
## ==============================
SHELL = bash
# Enable bash strict mode.
.SHELLFLAGS := -eu -o pipefail -c
## Change some Defaults of Make.
# Ensures each Make recipe is ran as one single shell session,
# rather than one new shell per line.
.ONESHELL:
MAKEFLAGS += --warn-undefined-variables
MAKEFLAGS += --no-builtin-rules

# Help
## ==============================
help: ## Show this help
	@awk 'BEGIN {FS = ":.*?## "} /^[a-zA-Z0-9_-]+:.*?## / {sub("\\\\n",sprintf("\n%22c"," "), $$2);printf "\033[36m%-25s\033[0m %s\n", $$1, $$2}' $(MAKEFILE_LIST)

.PHONY: build
build: parser/tcl.so ## Build the tree-sitter-tcl parser

parser/tcl.so: src/parser.c src/scanner.c ## Compile parser C files into shared object
	$(RM) $@
	mkdir -p parser
	tree-sitter build -o $@

src/parser.c: grammar.js ## Generate parser source from grammar.js
	tree-sitter generate

.PHONY: test
test: parser/tcl.so ## Run tree-sitter tests
	tree-sitter test

.PHONY: build-docker
build-docker: ## Build the tree-sitter-tcl Docker image
	docker compose build tree-sitter-tcl

.PHONY: npm-install
npm-install: build-docker ## Run npm install inside the tree-sitter-tcl container
	docker compose run --rm tree-sitter-tcl npm install
