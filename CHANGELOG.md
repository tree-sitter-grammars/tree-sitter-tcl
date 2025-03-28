## [1.1.0] - 2025-03-28

### ✨ Added
- **Grammar support for `regsub` command**
  - Parses switches (`-all`, `-nocase`, `--`, `-start <offset>`)
  - Supports braced, quoted, and simple-word literals as patterns and substitutions
  - Allows optional variable name target
- **Highlighting support for `regsub`**
  - `regsub` captured as `@function.builtin`
  - Switches as `@attribute`
  - Patterns and substitutions as `@string.regex`
- New `Dockerfile` and `compose.yaml` for containerized development
- Makefile targets:
  - `build-docker` to build image
  - `npm-install` to install dependencies in container
  - `version` to run `tree-sitter version` in container
- `namespace` command parsing with field labels for subcommands and arguments

### 🛠 Changed
- Refactored `_number` into named `number` rule
- Improved number parsing to allow optional `+` or `-` prefixes and scientific notation
- Renamed `regsub_switches` to `_regsub_switches` and added parsing flexibility
- Highlight fallback captures added (`@variable`, `@keyword`, etc.) for theme compatibility
- Improved compatibility by replacing `#lua-match?` with `#match?` in highlights
- Reordered `@spell` and `@comment` to workaround Zed's capture priority issue

### 🔧 Tooling
- Installed Rust and `tree-sitter-cli` in Docker build
- Upgraded:
  - `tree-sitter-cli` to `^0.25.3`
  - `node-addon-api` to `^8.2.1`
  - `node-gyp-build` to `^4.8.2`
- `version` bumped to `1.1.0` in:
  - `Cargo.toml`
  - `pyproject.toml`
  - `tree-sitter.json`

### ✅ Tests
- Added test coverage for:
  - `regsub`, `namespace`, `switch`, `unset`, `variable`, `numbers`
- Refactored large corpus into smaller test files for readability and scalability
