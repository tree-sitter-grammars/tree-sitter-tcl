// swift-tools-version:5.9

import PackageDescription

let package = Package(
    name: "TreeSitterTcl",
    platforms: [.macOS(.v10_13), .iOS(.v12)],
    products: [
        .library(name: "TreeSitterTcl", targets: ["TreeSitterTcl"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", .upToNextMinor(from: "0.25.0")),
    ],
    targets: [
        .target(
            name: "TreeSitterTcl",
            dependencies: [],
            path: ".",
            sources: ["src/parser.c", "src/scanner.c"],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterTclTests",
            dependencies: [
                .product(name: "SwiftTreeSitter", package: "swift-tree-sitter"),
                "TreeSitterTcl",
            ],
            path: "bindings/swift/TreeSitterTclTests"
        )
    ],
    cLanguageStandard: .c11
)
