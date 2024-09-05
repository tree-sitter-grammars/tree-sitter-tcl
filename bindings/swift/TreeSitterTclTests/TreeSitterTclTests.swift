import XCTest
import SwiftTreeSitter
import TreeSitterTcl

final class TreeSitterTclTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tcl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Tcl grammar")
    }
}
