#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  CONCAT,
};

static bool is_eof(TSLexer *lexer) {
  return lexer->lookahead == 0;
}

static bool is_concat_valid(TSLexer *lexer, const bool *valid_symbols) {
  return valid_symbols[CONCAT] && (iswalpha(lexer->lookahead) || lexer->lookahead == '_');
  // return valid_symbols[CONCAT] && !(
  //         is_eof(lexer) ||
  //         iswspace(lexer->lookahead) ||
  //         lexer->lookahead == ']' ||
  //         lexer->lookahead == '$' ||
  //         lexer->lookahead == ')' ||
  //         lexer->lookahead == '}'
  //         );
}

void *tree_sitter_tcl_external_scanner_create() {
  return NULL;
}

bool tree_sitter_tcl_external_scanner_scan(void *payload, TSLexer *lexer,
                                          const bool *valid_symbols) {
  if (is_concat_valid(lexer, valid_symbols)) {
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

