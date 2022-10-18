#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 258
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  sym_simple_word = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  sym_comment = 4,
  anon_sym_foreach = 5,
  anon_sym_global = 6,
  anon_sym_namespace = 7,
  anon_sym_eval = 8,
  anon_sym_try = 9,
  anon_sym_on = 10,
  anon_sym_error = 11,
  sym__ns_delim = 12,
  sym__ident = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_DOLLAR_LBRACE = 15,
  aux_sym_variable_substitution_token1 = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACE = 18,
  anon_sym_set = 19,
  anon_sym_proc = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_BANG = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_eq = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_ne = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_in = 30,
  anon_sym_GT = 31,
  anon_sym_LT = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_PIPE_PIPE = 34,
  anon_sym_elseif = 35,
  anon_sym_else = 36,
  anon_sym_if = 37,
  anon_sym_DQUOTE = 38,
  sym_escaped_character = 39,
  sym__quoted_word_content = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  sym_source_file = 43,
  sym_commands = 44,
  aux_sym__commands = 45,
  sym_foreach = 46,
  sym_global = 47,
  sym_namespace = 48,
  sym_try = 49,
  sym__command = 50,
  sym_command = 51,
  sym_word_list = 52,
  sym__cword = 53,
  sym_variable_substitution = 54,
  sym_command_block = 55,
  sym_set = 56,
  sym_procedure = 57,
  sym_arguments = 58,
  sym_expr = 59,
  sym_unary_expr = 60,
  sym_binop_expr = 61,
  sym_elseif = 62,
  sym_else = 63,
  sym_conditional = 64,
  sym_quoted_word = 65,
  sym_braced_word = 66,
  sym_command_substitution = 67,
  aux_sym_word_list_repeat1 = 68,
  aux_sym_variable_substitution_repeat1 = 69,
  aux_sym_arguments_repeat1 = 70,
  aux_sym_conditional_repeat1 = 71,
  aux_sym_quoted_word_repeat1 = 72,
  aux_sym_braced_word_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_simple_word] = "simple_word",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_foreach] = "foreach",
  [anon_sym_global] = "global",
  [anon_sym_namespace] = "namespace",
  [anon_sym_eval] = "eval",
  [anon_sym_try] = "try",
  [anon_sym_on] = "on",
  [anon_sym_error] = "error",
  [sym__ns_delim] = "_ns_delim",
  [sym__ident] = "_ident",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_variable_substitution_token1] = "variable_substitution_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_set] = "set",
  [anon_sym_proc] = "proc",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_eq] = "eq",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_ne] = "ne",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_in] = "in",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [anon_sym_if] = "if",
  [anon_sym_DQUOTE] = "\"",
  [sym_escaped_character] = "escaped_character",
  [sym__quoted_word_content] = "_quoted_word_content",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym_commands] = "commands",
  [aux_sym__commands] = "_commands",
  [sym_foreach] = "foreach",
  [sym_global] = "global",
  [sym_namespace] = "namespace",
  [sym_try] = "try",
  [sym__command] = "_command",
  [sym_command] = "command",
  [sym_word_list] = "word_list",
  [sym__cword] = "_cword",
  [sym_variable_substitution] = "variable_substitution",
  [sym_command_block] = "command_block",
  [sym_set] = "set",
  [sym_procedure] = "procedure",
  [sym_arguments] = "arguments",
  [sym_expr] = "expr",
  [sym_unary_expr] = "unary_expr",
  [sym_binop_expr] = "binop_expr",
  [sym_elseif] = "elseif",
  [sym_else] = "else",
  [sym_conditional] = "conditional",
  [sym_quoted_word] = "quoted_word",
  [sym_braced_word] = "braced_word",
  [sym_command_substitution] = "command_substitution",
  [aux_sym_word_list_repeat1] = "word_list_repeat1",
  [aux_sym_variable_substitution_repeat1] = "variable_substitution_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_quoted_word_repeat1] = "quoted_word_repeat1",
  [aux_sym_braced_word_repeat1] = "braced_word_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_simple_word] = sym_simple_word,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_error] = anon_sym_error,
  [sym__ns_delim] = sym__ns_delim,
  [sym__ident] = sym__ident,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_variable_substitution_token1] = aux_sym_variable_substitution_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_ne] = anon_sym_ne,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escaped_character] = sym_escaped_character,
  [sym__quoted_word_content] = sym__quoted_word_content,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym_commands] = sym_commands,
  [aux_sym__commands] = aux_sym__commands,
  [sym_foreach] = sym_foreach,
  [sym_global] = sym_global,
  [sym_namespace] = sym_namespace,
  [sym_try] = sym_try,
  [sym__command] = sym__command,
  [sym_command] = sym_command,
  [sym_word_list] = sym_word_list,
  [sym__cword] = sym__cword,
  [sym_variable_substitution] = sym_variable_substitution,
  [sym_command_block] = sym_command_block,
  [sym_set] = sym_set,
  [sym_procedure] = sym_procedure,
  [sym_arguments] = sym_arguments,
  [sym_expr] = sym_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binop_expr] = sym_binop_expr,
  [sym_elseif] = sym_elseif,
  [sym_else] = sym_else,
  [sym_conditional] = sym_conditional,
  [sym_quoted_word] = sym_quoted_word,
  [sym_braced_word] = sym_braced_word,
  [sym_command_substitution] = sym_command_substitution,
  [aux_sym_word_list_repeat1] = aux_sym_word_list_repeat1,
  [aux_sym_variable_substitution_repeat1] = aux_sym_variable_substitution_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
  [aux_sym_quoted_word_repeat1] = aux_sym_quoted_word_repeat1,
  [aux_sym_braced_word_repeat1] = aux_sym_braced_word_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [sym__ns_delim] = {
    .visible = false,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_substitution_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escaped_character] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_word_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_commands] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__commands] = {
    .visible = false,
    .named = false,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_try] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_word_list] = {
    .visible = true,
    .named = true,
  },
  [sym__cword] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binop_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_word] = {
    .visible = true,
    .named = true,
  },
  [sym_braced_word] = {
    .visible = true,
    .named = true,
  },
  [sym_command_substitution] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_substitution_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braced_word_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_body = 2,
  field_condition = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 1},
    {field_name, 0},
  [3] =
    {field_condition, 1},
  [4] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 15,
  [19] = 15,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 24,
  [30] = 22,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 26,
  [36] = 13,
  [37] = 12,
  [38] = 14,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 40,
  [46] = 41,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 43,
  [53] = 50,
  [54] = 54,
  [55] = 48,
  [56] = 54,
  [57] = 51,
  [58] = 58,
  [59] = 21,
  [60] = 60,
  [61] = 23,
  [62] = 62,
  [63] = 32,
  [64] = 64,
  [65] = 39,
  [66] = 66,
  [67] = 60,
  [68] = 27,
  [69] = 62,
  [70] = 31,
  [71] = 71,
  [72] = 33,
  [73] = 58,
  [74] = 34,
  [75] = 64,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 12,
  [80] = 80,
  [81] = 76,
  [82] = 80,
  [83] = 77,
  [84] = 13,
  [85] = 78,
  [86] = 66,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 88,
  [92] = 14,
  [93] = 93,
  [94] = 89,
  [95] = 93,
  [96] = 87,
  [97] = 90,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 98,
  [102] = 13,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 104,
  [107] = 107,
  [108] = 107,
  [109] = 12,
  [110] = 26,
  [111] = 111,
  [112] = 13,
  [113] = 113,
  [114] = 14,
  [115] = 115,
  [116] = 113,
  [117] = 12,
  [118] = 115,
  [119] = 115,
  [120] = 24,
  [121] = 121,
  [122] = 25,
  [123] = 115,
  [124] = 124,
  [125] = 113,
  [126] = 115,
  [127] = 22,
  [128] = 113,
  [129] = 113,
  [130] = 14,
  [131] = 25,
  [132] = 24,
  [133] = 13,
  [134] = 134,
  [135] = 26,
  [136] = 124,
  [137] = 137,
  [138] = 12,
  [139] = 22,
  [140] = 111,
  [141] = 141,
  [142] = 13,
  [143] = 143,
  [144] = 12,
  [145] = 137,
  [146] = 14,
  [147] = 147,
  [148] = 24,
  [149] = 13,
  [150] = 150,
  [151] = 134,
  [152] = 12,
  [153] = 26,
  [154] = 25,
  [155] = 26,
  [156] = 156,
  [157] = 14,
  [158] = 12,
  [159] = 13,
  [160] = 12,
  [161] = 13,
  [162] = 13,
  [163] = 24,
  [164] = 14,
  [165] = 147,
  [166] = 12,
  [167] = 22,
  [168] = 168,
  [169] = 169,
  [170] = 14,
  [171] = 156,
  [172] = 14,
  [173] = 168,
  [174] = 14,
  [175] = 175,
  [176] = 176,
  [177] = 175,
  [178] = 169,
  [179] = 175,
  [180] = 175,
  [181] = 181,
  [182] = 182,
  [183] = 175,
  [184] = 184,
  [185] = 182,
  [186] = 175,
  [187] = 187,
  [188] = 175,
  [189] = 175,
  [190] = 175,
  [191] = 175,
  [192] = 176,
  [193] = 193,
  [194] = 175,
  [195] = 195,
  [196] = 184,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 181,
  [204] = 202,
  [205] = 205,
  [206] = 198,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 213,
  [218] = 218,
  [219] = 214,
  [220] = 214,
  [221] = 214,
  [222] = 215,
  [223] = 213,
  [224] = 218,
  [225] = 218,
  [226] = 214,
  [227] = 213,
  [228] = 213,
  [229] = 218,
  [230] = 214,
  [231] = 218,
  [232] = 213,
  [233] = 213,
  [234] = 213,
  [235] = 205,
  [236] = 213,
  [237] = 218,
  [238] = 213,
  [239] = 212,
  [240] = 213,
  [241] = 209,
  [242] = 211,
  [243] = 210,
  [244] = 244,
  [245] = 201,
  [246] = 244,
  [247] = 197,
  [248] = 216,
  [249] = 244,
  [250] = 199,
  [251] = 244,
  [252] = 200,
  [253] = 244,
  [254] = 208,
  [255] = 244,
  [256] = 256,
  [257] = 207,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || c == '"'))
    : (c <= '$' || (c < '{'
      ? (c < '['
        ? c == ';'
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_simple_word_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '$' || (c < '{'
      ? (c < '['
        ? c == ';'
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_simple_word_character_set_2(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '['
      ? (c < ';'
        ? c == '$'
        : c <= ';')
      : (c <= ']' || (c >= '{' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == '&') ADVANCE(154);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(71)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(167);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == '&') ADVANCE(154);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == '&') ADVANCE(154);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(151);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '$') ADVANCE(100);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 53:
      if (lookahead == '&') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'q') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == '|') ADVANCE(138);
      END_STATE();
    case 70:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(70)
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(72)
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\\') SKIP(73)
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(167);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_on);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__ns_delim);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__ns_delim);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__ns_delim);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(151);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'q') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'q') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(151);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_eq);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ne);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ne);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_in);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(160);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_escaped_character);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '&') ADVANCE(137);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == ':') ADVANCE(84);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '=') ADVANCE(121);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '=') ADVANCE(127);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'e') ADVANCE(125);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'e') ADVANCE(143);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'f') ADVANCE(142);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'q') ADVANCE(119);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'n') ADVANCE(131);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'n') ADVANCE(82);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'q') ADVANCE(119);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 's') ADVANCE(159);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '|') ADVANCE(139);
      if (!sym_simple_word_character_set_2(lookahead)) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_simple_word);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(167);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 51},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 51},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 74},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 74},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 51},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 51},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 51},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 51},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 48},
  [103] = {.lex_state = 51},
  [104] = {.lex_state = 51},
  [105] = {.lex_state = 51},
  [106] = {.lex_state = 51},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 51},
  [109] = {.lex_state = 48},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 49},
  [113] = {.lex_state = 50},
  [114] = {.lex_state = 48},
  [115] = {.lex_state = 50},
  [116] = {.lex_state = 50},
  [117] = {.lex_state = 49},
  [118] = {.lex_state = 50},
  [119] = {.lex_state = 50},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 50},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 50},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 50},
  [126] = {.lex_state = 50},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 50},
  [129] = {.lex_state = 50},
  [130] = {.lex_state = 49},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 51},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 51},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 50},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 54},
  [153] = {.lex_state = 50},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 55},
  [159] = {.lex_state = 56},
  [160] = {.lex_state = 56},
  [161] = {.lex_state = 55},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 54},
  [165] = {.lex_state = 45},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 56},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 55},
  [175] = {.lex_state = 55},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 55},
  [178] = {.lex_state = 45},
  [179] = {.lex_state = 55},
  [180] = {.lex_state = 55},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 51},
  [183] = {.lex_state = 55},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 55},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 55},
  [189] = {.lex_state = 55},
  [190] = {.lex_state = 55},
  [191] = {.lex_state = 55},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 51},
  [194] = {.lex_state = 55},
  [195] = {.lex_state = 51},
  [196] = {.lex_state = 51},
  [197] = {.lex_state = 74},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 74},
  [200] = {.lex_state = 74},
  [201] = {.lex_state = 74},
  [202] = {.lex_state = 74},
  [203] = {.lex_state = 45},
  [204] = {.lex_state = 74},
  [205] = {.lex_state = 74},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 74},
  [208] = {.lex_state = 74},
  [209] = {.lex_state = 74},
  [210] = {.lex_state = 74},
  [211] = {.lex_state = 74},
  [212] = {.lex_state = 74},
  [213] = {.lex_state = 55},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 51},
  [217] = {.lex_state = 55},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 55},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 55},
  [228] = {.lex_state = 55},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 55},
  [233] = {.lex_state = 55},
  [234] = {.lex_state = 55},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 55},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 55},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 55},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 60},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 51},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 60},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 60},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 60},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_simple_word] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [sym__ns_delim] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_ne] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(256),
    [aux_sym__commands] = STATE(7),
    [sym_foreach] = STATE(202),
    [sym_global] = STATE(202),
    [sym_namespace] = STATE(202),
    [sym_try] = STATE(202),
    [sym__command] = STATE(202),
    [sym_command] = STATE(202),
    [sym_set] = STATE(202),
    [sym_procedure] = STATE(202),
    [sym_conditional] = STATE(202),
    [sym_simple_word] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(11),
    [anon_sym_global] = ACTIONS(13),
    [anon_sym_namespace] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(19),
    [anon_sym_proc] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_simple_word,
    ACTIONS(11), 1,
      anon_sym_foreach,
    ACTIONS(13), 1,
      anon_sym_global,
    ACTIONS(15), 1,
      anon_sym_namespace,
    ACTIONS(17), 1,
      anon_sym_try,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_proc,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym__commands,
    STATE(222), 1,
      sym_commands,
    STATE(204), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [54] = 15,
    ACTIONS(3), 1,
      sym_simple_word,
    ACTIONS(11), 1,
      anon_sym_foreach,
    ACTIONS(13), 1,
      anon_sym_global,
    ACTIONS(15), 1,
      anon_sym_namespace,
    ACTIONS(17), 1,
      anon_sym_try,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_proc,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym__commands,
    STATE(215), 1,
      sym_commands,
    STATE(204), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [108] = 11,
    ACTIONS(35), 1,
      sym_simple_word,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(178), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [153] = 14,
    ACTIONS(3), 1,
      sym_simple_word,
    ACTIONS(11), 1,
      anon_sym_foreach,
    ACTIONS(13), 1,
      anon_sym_global,
    ACTIONS(15), 1,
      anon_sym_namespace,
    ACTIONS(17), 1,
      anon_sym_try,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_proc,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym__commands,
    STATE(204), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [204] = 14,
    ACTIONS(61), 1,
      sym_simple_word,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_foreach,
    ACTIONS(76), 1,
      anon_sym_global,
    ACTIONS(79), 1,
      anon_sym_namespace,
    ACTIONS(82), 1,
      anon_sym_try,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(90), 1,
      anon_sym_proc,
    ACTIONS(93), 1,
      anon_sym_if,
    STATE(6), 1,
      aux_sym__commands,
    STATE(204), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [255] = 14,
    ACTIONS(3), 1,
      sym_simple_word,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_foreach,
    ACTIONS(13), 1,
      anon_sym_global,
    ACTIONS(15), 1,
      anon_sym_namespace,
    ACTIONS(17), 1,
      anon_sym_try,
    ACTIONS(19), 1,
      anon_sym_set,
    ACTIONS(21), 1,
      anon_sym_proc,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym__commands,
    STATE(202), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [306] = 14,
    ACTIONS(61), 1,
      sym_simple_word,
    ACTIONS(73), 1,
      anon_sym_foreach,
    ACTIONS(76), 1,
      anon_sym_global,
    ACTIONS(79), 1,
      anon_sym_namespace,
    ACTIONS(82), 1,
      anon_sym_try,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(90), 1,
      anon_sym_proc,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__commands,
    STATE(202), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [357] = 11,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(113), 1,
      sym_simple_word,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(134), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [402] = 11,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_simple_word,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(151), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [447] = 11,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_simple_word,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(169), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [492] = 5,
    ACTIONS(131), 1,
      sym__ns_delim,
    ACTIONS(133), 1,
      sym__ident,
    STATE(13), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(135), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(129), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [523] = 5,
    ACTIONS(139), 1,
      sym__ns_delim,
    ACTIONS(142), 1,
      sym__ident,
    STATE(13), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(145), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(137), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [554] = 2,
    ACTIONS(145), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(137), 15,
      sym__ns_delim,
      sym__ident,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [578] = 10,
    ACTIONS(147), 1,
      sym_simple_word,
    ACTIONS(149), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_foreach,
    ACTIONS(153), 1,
      anon_sym_global,
    ACTIONS(155), 1,
      anon_sym_namespace,
    ACTIONS(157), 1,
      anon_sym_try,
    ACTIONS(159), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_proc,
    ACTIONS(163), 1,
      anon_sym_if,
    STATE(226), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [617] = 10,
    ACTIONS(147), 1,
      sym_simple_word,
    ACTIONS(151), 1,
      anon_sym_foreach,
    ACTIONS(153), 1,
      anon_sym_global,
    ACTIONS(155), 1,
      anon_sym_namespace,
    ACTIONS(157), 1,
      anon_sym_try,
    ACTIONS(159), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_proc,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_comment,
    STATE(220), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [656] = 10,
    ACTIONS(147), 1,
      sym_simple_word,
    ACTIONS(151), 1,
      anon_sym_foreach,
    ACTIONS(153), 1,
      anon_sym_global,
    ACTIONS(155), 1,
      anon_sym_namespace,
    ACTIONS(157), 1,
      anon_sym_try,
    ACTIONS(159), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_proc,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(167), 1,
      sym_comment,
    STATE(214), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [695] = 10,
    ACTIONS(147), 1,
      sym_simple_word,
    ACTIONS(151), 1,
      anon_sym_foreach,
    ACTIONS(153), 1,
      anon_sym_global,
    ACTIONS(155), 1,
      anon_sym_namespace,
    ACTIONS(157), 1,
      anon_sym_try,
    ACTIONS(159), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_proc,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(169), 1,
      sym_comment,
    STATE(230), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [734] = 10,
    ACTIONS(147), 1,
      sym_simple_word,
    ACTIONS(151), 1,
      anon_sym_foreach,
    ACTIONS(153), 1,
      anon_sym_global,
    ACTIONS(155), 1,
      anon_sym_namespace,
    ACTIONS(157), 1,
      anon_sym_try,
    ACTIONS(159), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_proc,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(171), 1,
      sym_comment,
    STATE(219), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [773] = 10,
    ACTIONS(147), 1,
      sym_simple_word,
    ACTIONS(151), 1,
      anon_sym_foreach,
    ACTIONS(153), 1,
      anon_sym_global,
    ACTIONS(155), 1,
      anon_sym_namespace,
    ACTIONS(157), 1,
      anon_sym_try,
    ACTIONS(159), 1,
      anon_sym_set,
    ACTIONS(161), 1,
      anon_sym_proc,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(173), 1,
      sym_comment,
    STATE(221), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [812] = 4,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(175), 4,
      anon_sym_DOLLAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
    ACTIONS(177), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [838] = 2,
    ACTIONS(181), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(179), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [860] = 6,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(183), 2,
      anon_sym_DOLLAR,
      sym_simple_word,
    ACTIONS(185), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [890] = 2,
    ACTIONS(189), 1,
      anon_sym_else,
    ACTIONS(187), 16,
      anon_sym_on,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [912] = 2,
    ACTIONS(193), 1,
      anon_sym_else,
    ACTIONS(191), 16,
      anon_sym_on,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [934] = 2,
    ACTIONS(197), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(195), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [956] = 5,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(175), 3,
      anon_sym_DOLLAR,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
    ACTIONS(177), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(45), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [984] = 2,
    ACTIONS(191), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(193), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [1006] = 2,
    ACTIONS(187), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(189), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [1028] = 2,
    ACTIONS(179), 1,
      anon_sym_else,
    ACTIONS(181), 16,
      anon_sym_on,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [1050] = 2,
    ACTIONS(201), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(199), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [1072] = 2,
    ACTIONS(205), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(203), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [1094] = 2,
    ACTIONS(177), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(175), 13,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [1116] = 3,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(175), 11,
      anon_sym_DOLLAR,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_simple_word,
  [1140] = 2,
    ACTIONS(195), 1,
      anon_sym_else,
    ACTIONS(197), 16,
      anon_sym_on,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [1162] = 5,
    ACTIONS(207), 1,
      sym__ns_delim,
    ACTIONS(210), 1,
      sym__ident,
    STATE(36), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 3,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_in,
    ACTIONS(145), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1189] = 5,
    ACTIONS(213), 1,
      sym__ns_delim,
    ACTIONS(215), 1,
      sym__ident,
    STATE(36), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 3,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_in,
    ACTIONS(135), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1216] = 2,
    ACTIONS(137), 4,
      sym__ident,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_in,
    ACTIONS(145), 11,
      sym__ns_delim,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1236] = 10,
    ACTIONS(217), 1,
      sym_simple_word,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_word_list,
    STATE(64), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1271] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(83), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1306] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(76), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1341] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1376] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1411] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1446] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(77), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1481] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(81), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1516] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1551] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(59), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1586] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1621] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1656] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(72), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1691] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(74), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1726] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(68), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1761] = 10,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_simple_word,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(61), 1,
      sym_expr,
    STATE(63), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1796] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1831] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1866] = 10,
    ACTIONS(243), 1,
      sym_simple_word,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_expr,
    STATE(32), 5,
      sym_variable_substitution,
      sym_unary_expr,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1901] = 9,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      sym_simple_word,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(71), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [1933] = 3,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [1953] = 9,
    ACTIONS(217), 1,
      sym_simple_word,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_eval,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    STATE(211), 1,
      sym_word_list,
    STATE(64), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1985] = 5,
    ACTIONS(279), 1,
      anon_sym_AMP_AMP,
    ACTIONS(281), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [2009] = 9,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      sym_simple_word,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [2041] = 1,
    ACTIONS(205), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2057] = 9,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      sym_simple_word,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(66), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2089] = 9,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    ACTIONS(295), 1,
      sym_simple_word,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    STATE(243), 1,
      sym_word_list,
    STATE(75), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2121] = 9,
    ACTIONS(307), 1,
      sym_simple_word,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(66), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2153] = 9,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      sym_simple_word,
    ACTIONS(331), 1,
      anon_sym_eval,
    STATE(242), 1,
      sym_word_list,
    STATE(75), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2185] = 4,
    ACTIONS(279), 1,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [2207] = 9,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_simple_word,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(58), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [2239] = 1,
    ACTIONS(201), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2255] = 9,
    ACTIONS(339), 1,
      sym_simple_word,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    ACTIONS(348), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    STATE(71), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [2287] = 1,
    ACTIONS(177), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2303] = 9,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      sym_simple_word,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(71), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [2335] = 2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2353] = 8,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 1,
      sym_simple_word,
    STATE(86), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2382] = 5,
    ACTIONS(279), 1,
      anon_sym_AMP_AMP,
    ACTIONS(281), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [2405] = 5,
    ACTIONS(279), 1,
      anon_sym_AMP_AMP,
    ACTIONS(281), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [2428] = 8,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      sym_simple_word,
    STATE(209), 1,
      sym_word_list,
    STATE(64), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2457] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      sym__ns_delim,
    ACTIONS(374), 1,
      sym__ident,
    STATE(84), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [2480] = 2,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(85), 11,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_foreach,
      anon_sym_global,
      anon_sym_namespace,
      anon_sym_try,
      anon_sym_RBRACE,
      anon_sym_set,
      anon_sym_proc,
      anon_sym_if,
      sym_simple_word,
  [2497] = 5,
    ACTIONS(279), 1,
      anon_sym_AMP_AMP,
    ACTIONS(281), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [2520] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 10,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_foreach,
      anon_sym_global,
      anon_sym_namespace,
      anon_sym_try,
      anon_sym_set,
      anon_sym_proc,
      anon_sym_if,
      sym_simple_word,
  [2537] = 5,
    ACTIONS(279), 1,
      anon_sym_AMP_AMP,
    ACTIONS(281), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(267), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [2560] = 5,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(376), 1,
      sym__ns_delim,
    ACTIONS(379), 1,
      sym__ident,
    STATE(84), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [2583] = 8,
    ACTIONS(295), 1,
      sym_simple_word,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    STATE(241), 1,
      sym_word_list,
    STATE(75), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2612] = 8,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(385), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    STATE(86), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [2641] = 7,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      sym_simple_word,
    ACTIONS(402), 1,
      anon_sym_DOLLAR,
    STATE(203), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2667] = 7,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      sym_simple_word,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    STATE(200), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2693] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      sym_simple_word,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    STATE(257), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2719] = 7,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    ACTIONS(412), 1,
      sym_simple_word,
    STATE(212), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2745] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      sym_simple_word,
    STATE(252), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2771] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 10,
      anon_sym_SEMI,
      sym__ns_delim,
      sym__ident,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [2787] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      sym_simple_word,
    STATE(250), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2813] = 7,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      sym_simple_word,
    STATE(207), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2839] = 7,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    ACTIONS(420), 1,
      sym_simple_word,
    STATE(199), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2865] = 7,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(422), 1,
      sym_simple_word,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(181), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2891] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(426), 1,
      sym_simple_word,
    STATE(239), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2917] = 7,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    ACTIONS(428), 1,
      sym_simple_word,
    STATE(201), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2942] = 7,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_simple_word,
    STATE(198), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2967] = 7,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(432), 1,
      sym_simple_word,
    STATE(206), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2992] = 7,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(434), 1,
      sym_simple_word,
    STATE(245), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3017] = 5,
    ACTIONS(436), 1,
      sym__ns_delim,
    ACTIONS(439), 1,
      sym__ident,
    STATE(102), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 2,
      anon_sym_DOLLAR,
      sym_simple_word,
    ACTIONS(145), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3038] = 7,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      sym_simple_word,
    STATE(93), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3063] = 7,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      sym_simple_word,
    STATE(184), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3088] = 7,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      sym_simple_word,
    STATE(95), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3113] = 7,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      sym_simple_word,
    STATE(196), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3138] = 7,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      sym_simple_word,
    STATE(98), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3163] = 7,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(452), 1,
      sym_simple_word,
    STATE(101), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [3188] = 5,
    ACTIONS(454), 1,
      sym__ns_delim,
    ACTIONS(456), 1,
      sym__ident,
    STATE(102), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 2,
      anon_sym_DOLLAR,
      sym_simple_word,
    ACTIONS(135), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3209] = 2,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(195), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3223] = 2,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(458), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3237] = 4,
    ACTIONS(462), 1,
      sym__ns_delim,
    ACTIONS(465), 1,
      sym__ident,
    STATE(112), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3255] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(474), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3277] = 2,
    ACTIONS(137), 4,
      sym__ns_delim,
      sym__ident,
      anon_sym_DOLLAR,
      sym_simple_word,
    ACTIONS(145), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3291] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(113), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3313] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3335] = 4,
    ACTIONS(484), 1,
      sym__ns_delim,
    ACTIONS(486), 1,
      sym__ident,
    STATE(112), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3353] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(128), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3375] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(129), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3397] = 2,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3411] = 6,
    ACTIONS(496), 1,
      anon_sym_DOLLAR,
    ACTIONS(499), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3433] = 2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3447] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(116), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3469] = 2,
    ACTIONS(516), 1,
      anon_sym_LF,
    ACTIONS(514), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3483] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3505] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    ACTIONS(522), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(125), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3527] = 2,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(179), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3541] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3563] = 6,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3585] = 1,
    ACTIONS(137), 8,
      sym__ns_delim,
      sym__ident,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3596] = 2,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(191), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3608] = 2,
    ACTIONS(189), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3620] = 5,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      sym__ns_delim,
    ACTIONS(531), 1,
      sym__ident,
    STATE(133), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_else,
  [3638] = 6,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_elseif,
    ACTIONS(540), 1,
      anon_sym_else,
    STATE(205), 1,
      sym_else,
    STATE(137), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3658] = 2,
    ACTIONS(195), 1,
      anon_sym_DOLLAR,
    ACTIONS(197), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3670] = 2,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3682] = 6,
    ACTIONS(538), 1,
      anon_sym_elseif,
    ACTIONS(540), 1,
      anon_sym_else,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym_else,
    STATE(147), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3702] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(546), 1,
      sym__ns_delim,
    ACTIONS(548), 1,
      sym__ident,
    STATE(133), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_else,
  [3720] = 2,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3732] = 2,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    ACTIONS(460), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3744] = 2,
    ACTIONS(552), 1,
      anon_sym_DOLLAR,
    ACTIONS(550), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3755] = 5,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      sym__ns_delim,
    ACTIONS(557), 1,
      sym__ident,
    STATE(142), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [3772] = 2,
    ACTIONS(562), 1,
      anon_sym_DOLLAR,
    ACTIONS(560), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3783] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      sym__ns_delim,
    ACTIONS(566), 1,
      sym__ident,
    STATE(142), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [3800] = 5,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    ACTIONS(568), 1,
      anon_sym_elseif,
    ACTIONS(570), 1,
      anon_sym_else,
    STATE(254), 1,
      sym_else,
    STATE(165), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3817] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 5,
      anon_sym_SEMI,
      sym__ns_delim,
      sym__ident,
      anon_sym_elseif,
      anon_sym_else,
  [3828] = 4,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(576), 1,
      anon_sym_elseif,
    ACTIONS(574), 2,
      anon_sym_SEMI,
      anon_sym_else,
    STATE(147), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3843] = 1,
    ACTIONS(189), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3852] = 5,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(579), 1,
      sym__ns_delim,
    ACTIONS(582), 1,
      sym__ident,
    STATE(149), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 2,
      anon_sym_elseif,
      anon_sym_else,
  [3869] = 2,
    ACTIONS(587), 1,
      anon_sym_DOLLAR,
    ACTIONS(585), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3880] = 5,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    ACTIONS(568), 1,
      anon_sym_elseif,
    ACTIONS(570), 1,
      anon_sym_else,
    STATE(235), 1,
      sym_else,
    STATE(145), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3897] = 5,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(589), 1,
      sym__ns_delim,
    ACTIONS(591), 1,
      sym__ident,
    STATE(149), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 2,
      anon_sym_elseif,
      anon_sym_else,
  [3914] = 1,
    ACTIONS(195), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3923] = 2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3933] = 2,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(195), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3943] = 2,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3953] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 4,
      anon_sym_SEMI,
      anon_sym_on,
      sym__ns_delim,
      sym__ident,
  [3963] = 4,
    ACTIONS(597), 1,
      sym__ns_delim,
    ACTIONS(599), 1,
      sym__ident,
    STATE(161), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(135), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [3977] = 5,
    ACTIONS(137), 1,
      anon_sym_on,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(601), 1,
      sym__ns_delim,
    ACTIONS(604), 1,
      sym__ident,
    STATE(159), 1,
      aux_sym_variable_substitution_repeat1,
  [3993] = 5,
    ACTIONS(129), 1,
      anon_sym_on,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(607), 1,
      sym__ns_delim,
    ACTIONS(609), 1,
      sym__ident,
    STATE(159), 1,
      aux_sym_variable_substitution_repeat1,
  [4009] = 4,
    ACTIONS(611), 1,
      sym__ns_delim,
    ACTIONS(614), 1,
      sym__ident,
    STATE(161), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(145), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [4023] = 5,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      sym__ns_delim,
    ACTIONS(620), 1,
      sym__ident,
    STATE(162), 1,
      aux_sym_variable_substitution_repeat1,
  [4039] = 2,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [4049] = 2,
    ACTIONS(145), 2,
      sym__ns_delim,
      anon_sym_RBRACK,
    ACTIONS(137), 3,
      sym__ident,
      anon_sym_elseif,
      anon_sym_else,
  [4059] = 4,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
    ACTIONS(574), 1,
      anon_sym_else,
    ACTIONS(623), 1,
      anon_sym_elseif,
    STATE(165), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [4073] = 5,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      sym__ns_delim,
    ACTIONS(628), 1,
      sym__ident,
    STATE(162), 1,
      aux_sym_variable_substitution_repeat1,
  [4089] = 2,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(179), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [4099] = 2,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [4109] = 2,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 3,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_else,
  [4118] = 2,
    ACTIONS(137), 2,
      anon_sym_on,
      sym__ident,
    ACTIONS(145), 2,
      sym__ns_delim,
      anon_sym_RBRACK,
  [4127] = 2,
    ACTIONS(595), 1,
      anon_sym_else,
    ACTIONS(593), 3,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [4136] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      sym__ns_delim,
      sym__ident,
  [4145] = 2,
    ACTIONS(632), 1,
      anon_sym_else,
    ACTIONS(630), 3,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [4154] = 1,
    ACTIONS(145), 4,
      sym__ns_delim,
      sym__ident,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [4161] = 3,
    ACTIONS(638), 1,
      sym__ns_delim,
    ACTIONS(640), 1,
      sym__ident,
    STATE(144), 1,
      aux_sym_variable_substitution_repeat1,
  [4171] = 3,
    ACTIONS(642), 1,
      sym_simple_word,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_arguments,
  [4181] = 3,
    ACTIONS(213), 1,
      sym__ns_delim,
    ACTIONS(646), 1,
      sym__ident,
    STATE(37), 1,
      aux_sym_variable_substitution_repeat1,
  [4191] = 2,
    ACTIONS(636), 1,
      anon_sym_else,
    ACTIONS(634), 2,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [4199] = 3,
    ACTIONS(648), 1,
      sym__ns_delim,
    ACTIONS(650), 1,
      sym__ident,
    STATE(166), 1,
      aux_sym_variable_substitution_repeat1,
  [4209] = 3,
    ACTIONS(652), 1,
      sym__ns_delim,
    ACTIONS(654), 1,
      sym__ident,
    STATE(117), 1,
      aux_sym_variable_substitution_repeat1,
  [4219] = 3,
    ACTIONS(656), 1,
      anon_sym_LF,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_on,
  [4229] = 3,
    ACTIONS(642), 1,
      sym_simple_word,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_arguments,
  [4239] = 3,
    ACTIONS(662), 1,
      sym__ns_delim,
    ACTIONS(664), 1,
      sym__ident,
    STATE(79), 1,
      aux_sym_variable_substitution_repeat1,
  [4249] = 3,
    ACTIONS(642), 1,
      sym_simple_word,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_arguments,
  [4259] = 3,
    ACTIONS(642), 1,
      sym_simple_word,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_arguments,
  [4269] = 3,
    ACTIONS(597), 1,
      sym__ns_delim,
    ACTIONS(666), 1,
      sym__ident,
    STATE(158), 1,
      aux_sym_variable_substitution_repeat1,
  [4279] = 3,
    ACTIONS(668), 1,
      sym_simple_word,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_arguments_repeat1,
  [4289] = 3,
    ACTIONS(672), 1,
      sym__ns_delim,
    ACTIONS(674), 1,
      sym__ident,
    STATE(12), 1,
      aux_sym_variable_substitution_repeat1,
  [4299] = 3,
    ACTIONS(676), 1,
      sym__ns_delim,
    ACTIONS(678), 1,
      sym__ident,
    STATE(109), 1,
      aux_sym_variable_substitution_repeat1,
  [4309] = 3,
    ACTIONS(589), 1,
      sym__ns_delim,
    ACTIONS(680), 1,
      sym__ident,
    STATE(152), 1,
      aux_sym_variable_substitution_repeat1,
  [4319] = 3,
    ACTIONS(682), 1,
      sym__ns_delim,
    ACTIONS(684), 1,
      sym__ident,
    STATE(138), 1,
      aux_sym_variable_substitution_repeat1,
  [4329] = 3,
    ACTIONS(642), 1,
      sym_simple_word,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_arguments,
  [4339] = 3,
    ACTIONS(686), 1,
      sym_simple_word,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
  [4349] = 3,
    ACTIONS(607), 1,
      sym__ns_delim,
    ACTIONS(690), 1,
      sym__ident,
    STATE(160), 1,
      aux_sym_variable_substitution_repeat1,
  [4359] = 3,
    ACTIONS(692), 1,
      sym_simple_word,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_arguments_repeat1,
  [4369] = 3,
    ACTIONS(642), 1,
      sym_simple_word,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_arguments,
  [4379] = 2,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [4386] = 2,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_command_block,
  [4393] = 2,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 1,
      anon_sym_SEMI,
  [4400] = 2,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [4407] = 2,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [4414] = 2,
    ACTIONS(713), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [4421] = 2,
    ACTIONS(656), 1,
      anon_sym_RBRACK,
    ACTIONS(717), 1,
      anon_sym_on,
  [4428] = 2,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [4435] = 2,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [4442] = 2,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_command_block,
  [4449] = 2,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [4456] = 2,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [4463] = 2,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [4470] = 2,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      anon_sym_SEMI,
  [4477] = 2,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      anon_sym_SEMI,
  [4484] = 2,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      anon_sym_SEMI,
  [4491] = 1,
    ACTIONS(747), 1,
      sym__ident,
  [4495] = 1,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
  [4499] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
  [4503] = 1,
    ACTIONS(753), 1,
      anon_sym_error,
  [4507] = 1,
    ACTIONS(755), 1,
      sym__ident,
  [4511] = 1,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
  [4515] = 1,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
  [4519] = 1,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
  [4523] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
  [4527] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [4531] = 1,
    ACTIONS(767), 1,
      sym__ident,
  [4535] = 1,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
  [4539] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
  [4543] = 1,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
  [4547] = 1,
    ACTIONS(775), 1,
      sym__ident,
  [4551] = 1,
    ACTIONS(777), 1,
      sym__ident,
  [4555] = 1,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
  [4559] = 1,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
  [4563] = 1,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
  [4567] = 1,
    ACTIONS(785), 1,
      sym__ident,
  [4571] = 1,
    ACTIONS(787), 1,
      sym__ident,
  [4575] = 1,
    ACTIONS(789), 1,
      sym__ident,
  [4579] = 1,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
  [4583] = 1,
    ACTIONS(791), 1,
      sym__ident,
  [4587] = 1,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
  [4591] = 1,
    ACTIONS(795), 1,
      sym__ident,
  [4595] = 1,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
  [4599] = 1,
    ACTIONS(797), 1,
      sym__ident,
  [4603] = 1,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
  [4607] = 1,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
  [4611] = 1,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
  [4615] = 1,
    ACTIONS(799), 1,
      aux_sym_variable_substitution_token1,
  [4619] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
  [4623] = 1,
    ACTIONS(801), 1,
      aux_sym_variable_substitution_token1,
  [4627] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [4631] = 1,
    ACTIONS(803), 1,
      anon_sym_error,
  [4635] = 1,
    ACTIONS(805), 1,
      aux_sym_variable_substitution_token1,
  [4639] = 1,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
  [4643] = 1,
    ACTIONS(807), 1,
      aux_sym_variable_substitution_token1,
  [4647] = 1,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
  [4651] = 1,
    ACTIONS(809), 1,
      aux_sym_variable_substitution_token1,
  [4655] = 1,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
  [4659] = 1,
    ACTIONS(811), 1,
      aux_sym_variable_substitution_token1,
  [4663] = 1,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
  [4667] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 402,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 617,
  [SMALL_STATE(17)] = 656,
  [SMALL_STATE(18)] = 695,
  [SMALL_STATE(19)] = 734,
  [SMALL_STATE(20)] = 773,
  [SMALL_STATE(21)] = 812,
  [SMALL_STATE(22)] = 838,
  [SMALL_STATE(23)] = 860,
  [SMALL_STATE(24)] = 890,
  [SMALL_STATE(25)] = 912,
  [SMALL_STATE(26)] = 934,
  [SMALL_STATE(27)] = 956,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1006,
  [SMALL_STATE(30)] = 1028,
  [SMALL_STATE(31)] = 1050,
  [SMALL_STATE(32)] = 1072,
  [SMALL_STATE(33)] = 1094,
  [SMALL_STATE(34)] = 1116,
  [SMALL_STATE(35)] = 1140,
  [SMALL_STATE(36)] = 1162,
  [SMALL_STATE(37)] = 1189,
  [SMALL_STATE(38)] = 1216,
  [SMALL_STATE(39)] = 1236,
  [SMALL_STATE(40)] = 1271,
  [SMALL_STATE(41)] = 1306,
  [SMALL_STATE(42)] = 1341,
  [SMALL_STATE(43)] = 1376,
  [SMALL_STATE(44)] = 1411,
  [SMALL_STATE(45)] = 1446,
  [SMALL_STATE(46)] = 1481,
  [SMALL_STATE(47)] = 1516,
  [SMALL_STATE(48)] = 1551,
  [SMALL_STATE(49)] = 1586,
  [SMALL_STATE(50)] = 1621,
  [SMALL_STATE(51)] = 1656,
  [SMALL_STATE(52)] = 1691,
  [SMALL_STATE(53)] = 1726,
  [SMALL_STATE(54)] = 1761,
  [SMALL_STATE(55)] = 1796,
  [SMALL_STATE(56)] = 1831,
  [SMALL_STATE(57)] = 1866,
  [SMALL_STATE(58)] = 1901,
  [SMALL_STATE(59)] = 1933,
  [SMALL_STATE(60)] = 1953,
  [SMALL_STATE(61)] = 1985,
  [SMALL_STATE(62)] = 2009,
  [SMALL_STATE(63)] = 2041,
  [SMALL_STATE(64)] = 2057,
  [SMALL_STATE(65)] = 2089,
  [SMALL_STATE(66)] = 2121,
  [SMALL_STATE(67)] = 2153,
  [SMALL_STATE(68)] = 2185,
  [SMALL_STATE(69)] = 2207,
  [SMALL_STATE(70)] = 2239,
  [SMALL_STATE(71)] = 2255,
  [SMALL_STATE(72)] = 2287,
  [SMALL_STATE(73)] = 2303,
  [SMALL_STATE(74)] = 2335,
  [SMALL_STATE(75)] = 2353,
  [SMALL_STATE(76)] = 2382,
  [SMALL_STATE(77)] = 2405,
  [SMALL_STATE(78)] = 2428,
  [SMALL_STATE(79)] = 2457,
  [SMALL_STATE(80)] = 2480,
  [SMALL_STATE(81)] = 2497,
  [SMALL_STATE(82)] = 2520,
  [SMALL_STATE(83)] = 2537,
  [SMALL_STATE(84)] = 2560,
  [SMALL_STATE(85)] = 2583,
  [SMALL_STATE(86)] = 2612,
  [SMALL_STATE(87)] = 2641,
  [SMALL_STATE(88)] = 2667,
  [SMALL_STATE(89)] = 2693,
  [SMALL_STATE(90)] = 2719,
  [SMALL_STATE(91)] = 2745,
  [SMALL_STATE(92)] = 2771,
  [SMALL_STATE(93)] = 2787,
  [SMALL_STATE(94)] = 2813,
  [SMALL_STATE(95)] = 2839,
  [SMALL_STATE(96)] = 2865,
  [SMALL_STATE(97)] = 2891,
  [SMALL_STATE(98)] = 2917,
  [SMALL_STATE(99)] = 2942,
  [SMALL_STATE(100)] = 2967,
  [SMALL_STATE(101)] = 2992,
  [SMALL_STATE(102)] = 3017,
  [SMALL_STATE(103)] = 3038,
  [SMALL_STATE(104)] = 3063,
  [SMALL_STATE(105)] = 3088,
  [SMALL_STATE(106)] = 3113,
  [SMALL_STATE(107)] = 3138,
  [SMALL_STATE(108)] = 3163,
  [SMALL_STATE(109)] = 3188,
  [SMALL_STATE(110)] = 3209,
  [SMALL_STATE(111)] = 3223,
  [SMALL_STATE(112)] = 3237,
  [SMALL_STATE(113)] = 3255,
  [SMALL_STATE(114)] = 3277,
  [SMALL_STATE(115)] = 3291,
  [SMALL_STATE(116)] = 3313,
  [SMALL_STATE(117)] = 3335,
  [SMALL_STATE(118)] = 3353,
  [SMALL_STATE(119)] = 3375,
  [SMALL_STATE(120)] = 3397,
  [SMALL_STATE(121)] = 3411,
  [SMALL_STATE(122)] = 3433,
  [SMALL_STATE(123)] = 3447,
  [SMALL_STATE(124)] = 3469,
  [SMALL_STATE(125)] = 3483,
  [SMALL_STATE(126)] = 3505,
  [SMALL_STATE(127)] = 3527,
  [SMALL_STATE(128)] = 3541,
  [SMALL_STATE(129)] = 3563,
  [SMALL_STATE(130)] = 3585,
  [SMALL_STATE(131)] = 3596,
  [SMALL_STATE(132)] = 3608,
  [SMALL_STATE(133)] = 3620,
  [SMALL_STATE(134)] = 3638,
  [SMALL_STATE(135)] = 3658,
  [SMALL_STATE(136)] = 3670,
  [SMALL_STATE(137)] = 3682,
  [SMALL_STATE(138)] = 3702,
  [SMALL_STATE(139)] = 3720,
  [SMALL_STATE(140)] = 3732,
  [SMALL_STATE(141)] = 3744,
  [SMALL_STATE(142)] = 3755,
  [SMALL_STATE(143)] = 3772,
  [SMALL_STATE(144)] = 3783,
  [SMALL_STATE(145)] = 3800,
  [SMALL_STATE(146)] = 3817,
  [SMALL_STATE(147)] = 3828,
  [SMALL_STATE(148)] = 3843,
  [SMALL_STATE(149)] = 3852,
  [SMALL_STATE(150)] = 3869,
  [SMALL_STATE(151)] = 3880,
  [SMALL_STATE(152)] = 3897,
  [SMALL_STATE(153)] = 3914,
  [SMALL_STATE(154)] = 3923,
  [SMALL_STATE(155)] = 3933,
  [SMALL_STATE(156)] = 3943,
  [SMALL_STATE(157)] = 3953,
  [SMALL_STATE(158)] = 3963,
  [SMALL_STATE(159)] = 3977,
  [SMALL_STATE(160)] = 3993,
  [SMALL_STATE(161)] = 4009,
  [SMALL_STATE(162)] = 4023,
  [SMALL_STATE(163)] = 4039,
  [SMALL_STATE(164)] = 4049,
  [SMALL_STATE(165)] = 4059,
  [SMALL_STATE(166)] = 4073,
  [SMALL_STATE(167)] = 4089,
  [SMALL_STATE(168)] = 4099,
  [SMALL_STATE(169)] = 4109,
  [SMALL_STATE(170)] = 4118,
  [SMALL_STATE(171)] = 4127,
  [SMALL_STATE(172)] = 4136,
  [SMALL_STATE(173)] = 4145,
  [SMALL_STATE(174)] = 4154,
  [SMALL_STATE(175)] = 4161,
  [SMALL_STATE(176)] = 4171,
  [SMALL_STATE(177)] = 4181,
  [SMALL_STATE(178)] = 4191,
  [SMALL_STATE(179)] = 4199,
  [SMALL_STATE(180)] = 4209,
  [SMALL_STATE(181)] = 4219,
  [SMALL_STATE(182)] = 4229,
  [SMALL_STATE(183)] = 4239,
  [SMALL_STATE(184)] = 4249,
  [SMALL_STATE(185)] = 4259,
  [SMALL_STATE(186)] = 4269,
  [SMALL_STATE(187)] = 4279,
  [SMALL_STATE(188)] = 4289,
  [SMALL_STATE(189)] = 4299,
  [SMALL_STATE(190)] = 4309,
  [SMALL_STATE(191)] = 4319,
  [SMALL_STATE(192)] = 4329,
  [SMALL_STATE(193)] = 4339,
  [SMALL_STATE(194)] = 4349,
  [SMALL_STATE(195)] = 4359,
  [SMALL_STATE(196)] = 4369,
  [SMALL_STATE(197)] = 4379,
  [SMALL_STATE(198)] = 4386,
  [SMALL_STATE(199)] = 4393,
  [SMALL_STATE(200)] = 4400,
  [SMALL_STATE(201)] = 4407,
  [SMALL_STATE(202)] = 4414,
  [SMALL_STATE(203)] = 4421,
  [SMALL_STATE(204)] = 4428,
  [SMALL_STATE(205)] = 4435,
  [SMALL_STATE(206)] = 4442,
  [SMALL_STATE(207)] = 4449,
  [SMALL_STATE(208)] = 4456,
  [SMALL_STATE(209)] = 4463,
  [SMALL_STATE(210)] = 4470,
  [SMALL_STATE(211)] = 4477,
  [SMALL_STATE(212)] = 4484,
  [SMALL_STATE(213)] = 4491,
  [SMALL_STATE(214)] = 4495,
  [SMALL_STATE(215)] = 4499,
  [SMALL_STATE(216)] = 4503,
  [SMALL_STATE(217)] = 4507,
  [SMALL_STATE(218)] = 4511,
  [SMALL_STATE(219)] = 4515,
  [SMALL_STATE(220)] = 4519,
  [SMALL_STATE(221)] = 4523,
  [SMALL_STATE(222)] = 4527,
  [SMALL_STATE(223)] = 4531,
  [SMALL_STATE(224)] = 4535,
  [SMALL_STATE(225)] = 4539,
  [SMALL_STATE(226)] = 4543,
  [SMALL_STATE(227)] = 4547,
  [SMALL_STATE(228)] = 4551,
  [SMALL_STATE(229)] = 4555,
  [SMALL_STATE(230)] = 4559,
  [SMALL_STATE(231)] = 4563,
  [SMALL_STATE(232)] = 4567,
  [SMALL_STATE(233)] = 4571,
  [SMALL_STATE(234)] = 4575,
  [SMALL_STATE(235)] = 4579,
  [SMALL_STATE(236)] = 4583,
  [SMALL_STATE(237)] = 4587,
  [SMALL_STATE(238)] = 4591,
  [SMALL_STATE(239)] = 4595,
  [SMALL_STATE(240)] = 4599,
  [SMALL_STATE(241)] = 4603,
  [SMALL_STATE(242)] = 4607,
  [SMALL_STATE(243)] = 4611,
  [SMALL_STATE(244)] = 4615,
  [SMALL_STATE(245)] = 4619,
  [SMALL_STATE(246)] = 4623,
  [SMALL_STATE(247)] = 4627,
  [SMALL_STATE(248)] = 4631,
  [SMALL_STATE(249)] = 4635,
  [SMALL_STATE(250)] = 4639,
  [SMALL_STATE(251)] = 4643,
  [SMALL_STATE(252)] = 4647,
  [SMALL_STATE(253)] = 4651,
  [SMALL_STATE(254)] = 4655,
  [SMALL_STATE(255)] = 4659,
  [SMALL_STATE(256)] = 4663,
  [SMALL_STATE(257)] = 4667,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commands, 1),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(39),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(204),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(185),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(78),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(60),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(96),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__commands, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(107),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(104),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(47),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__commands, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(8),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(8),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(202),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_substitution, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_substitution, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(217),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop_expr, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop_expr, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_substitution, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_substitution, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(234),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(36),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_list, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_list, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(66),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(183),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(246),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(62),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(118),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(20),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(71),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(71),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(183),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(246),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(62),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(118),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(20),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(233),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(84),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(86),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(189),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(249),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(69),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(126),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(17),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(227),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(102),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 2),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(228),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(112),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(180),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(253),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(121),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(15),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(236),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(133),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, .production_id = 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3, .production_id = 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, .production_id = 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4, .production_id = 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(213),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(142),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(44),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(240),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(149),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(238),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(159),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(223),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(161),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(232),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(162),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(42),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif, 3, .production_id = 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif, 3, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(195),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 4, .production_id = 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure, 4, .production_id = 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 6),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [813] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tcl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_simple_word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
