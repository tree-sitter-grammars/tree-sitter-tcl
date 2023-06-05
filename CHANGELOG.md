## [Unreleased]

### Added
- Docker-based development environment:
  - Dockerfile with Node.js 20, Python 3, GCC, Rust, and `tree-sitter-cli`
  - `compose.yaml` for container orchestration
- Makefile enhancements:
  - `help`, `build`, `test`, `build-docker`, and `version` targets
  - Strict Bash mode (`-eu -o pipefail`) and clean Make defaults

