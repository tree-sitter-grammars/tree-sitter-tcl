import XCTest
import SwiftTreeSitter
import TreeSitterTcl

final class TreeSitterTclTests: XCTestCase {
    func testParseArrayElement() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tcl())
        try parser.setLanguage(language)
        let tree = try XCTUnwrap(parser.parse("set anAry(msg) \"Hello, World!\"\nputs $anAry(msg)\n"))
        XCTAssertFalse(try XCTUnwrap(tree.rootNode).hasError)
    }
}
