from unittest import TestCase

import tree_sitter
import tree_sitter_tcl


class TestLanguage(TestCase):
    def test_parse_array_element(self):
        language = tree_sitter.Language(tree_sitter_tcl.language())
        parser = tree_sitter.Parser(language)
        tree = parser.parse(b'set anAry(msg) "Hello, World!"\nputs $anAry(msg)\n')
        self.assertFalse(tree.root_node.has_error, str(tree.root_node))

    def test_highlight_query_is_available(self):
        language = tree_sitter.Language(tree_sitter_tcl.language())
        query = tree_sitter.Query(language, tree_sitter_tcl.HIGHLIGHTS_QUERY)
        self.assertGreater(query.pattern_count, 0)
