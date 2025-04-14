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

src/parser.c: grammar.js deps ## Generate parser source from grammar.js
	./node_modules/.bin/tree-sitter generate

.PHONY: test
test: parser/tcl.so ## Run tree-sitter tests
	tree-sitter test

.PHONY: clean
clean: ## Clean local environment
	rm -rf build
	rm -rf node_modules
	rm -rf parser/tcl.so

node_modules: package.json package-lock.json
	npm install
	touch node_modules

.PHONY: deps
deps: node_modules ## Install npm dependencies if needed

.PHONY: version
version: deps ## Tag new tree-sitter-tcl semver
	read -p "version: " version && \
	./node_modules/.bin/tree-sitter version $$version

## Linting
.PHONY: lint
lint: deps ## Run eslint
	npm run lint
