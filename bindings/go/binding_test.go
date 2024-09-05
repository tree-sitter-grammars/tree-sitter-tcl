package tree_sitter_tcl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tcl "github.com/tree-sitter/tree-sitter-tcl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tcl.Language())
	if language == nil {
		t.Errorf("Error loading Tcl grammar")
	}
}
