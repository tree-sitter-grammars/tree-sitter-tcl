package tree_sitter_tcl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tcl "github.com/tree-sitter-grammars/tree-sitter-tcl/bindings/go"
)

func TestParseArrayElement(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tcl.Language())
	parser := tree_sitter.NewParser()
	defer parser.Close()
	if err := parser.SetLanguage(language); err != nil {
		t.Fatal(err)
	}
	tree := parser.Parse([]byte("set anAry(msg) \"Hello, World!\"\nputs $anAry(msg)\n"), nil)
	defer tree.Close()
	if tree.RootNode().HasError() {
		t.Fatal(tree.RootNode().ToSexp())
	}
}
