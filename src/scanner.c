#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  CONCAT,
  IMMEDIATE
};

void *tree_sitter_tcl_external_scanner_create() {
  return NULL;
}

bool tree_sitter_tcl_external_scanner_scan(void *payload, TSLexer *lexer,
                                          const bool *valid_symbols) {
  int32_t c = lexer->lookahead;

  // Check adjacency without consuming input.
  if (valid_symbols[IMMEDIATE] && !lexer->eof(lexer) && !iswspace(c)) {
    lexer->mark_end(lexer);
    if (c == '\\') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\r') {
        lexer->advance(lexer, false);
      }
      if (lexer->lookahead == '\n') return false;
    }
    lexer->result_symbol = IMMEDIATE;
    return true;
  }

  if (valid_symbols[CONCAT] && (
        !lexer->eof(lexer) &&
        !iswspace(c) &&
        c != '(' &&
        c != ')' &&
        c != ';' &&
        c != ':' &&
        c != '}' &&
        c != ']')) {
    lexer->result_symbol = CONCAT;
    return true;
  }

  return false;
}

unsigned tree_sitter_tcl_external_scanner_serialize(void *payload, char *state) {
  return 0;
}

void tree_sitter_tcl_external_scanner_deserialize(void *payload, const char *state, unsigned length){ }

void tree_sitter_tcl_external_scanner_destroy(void *payload) {}
