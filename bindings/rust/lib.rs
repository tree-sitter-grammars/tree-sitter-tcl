//! This crate provides Tcl language support for the [tree-sitter] parsing library.
//!
//! Typically, you will use the [`LANGUAGE`] constant to add this language to a
//! tree-sitter [`Parser`], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! echo "Hello, World!"
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_tcl::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading Tcl parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [`Parser`]: https://docs.rs/tree-sitter/0.25.4/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_tcl() -> *const ();
}

/// The tree-sitter [`LanguageFn`] for this grammar.
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_tcl) };

/// The content of the [`node-types.json`] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers/6-static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

/// The syntax highlighting queries for this grammar.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/tcl/highlights.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_parse_array_element() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading Tcl parser");
        let source = "set anAry(msg) \"Hello, World!\"\nputs $anAry(msg)\n";
        let tree = parser.parse(source, None).unwrap();
        assert!(!tree.root_node().has_error());
    }

    #[test]
    fn test_highlight_query_is_available() {
        tree_sitter::Query::new(&super::LANGUAGE.into(), super::HIGHLIGHTS_QUERY)
            .expect("Error loading Tcl highlights");
    }
}
