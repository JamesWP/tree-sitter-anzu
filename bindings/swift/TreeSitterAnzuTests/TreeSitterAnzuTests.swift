import XCTest
import SwiftTreeSitter
import TreeSitterAnzu

final class TreeSitterAnzuTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_anzu())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Anzu grammar")
    }
}
