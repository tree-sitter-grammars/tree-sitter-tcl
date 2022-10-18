#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_eq = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_ne = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_in = 27,
  anon_sym_GT = 28,
  anon_sym_LT = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_elseif = 32,
  anon_sym_else = 33,
  anon_sym_if = 34,
  anon_sym_DQUOTE = 35,
  sym_escaped_character = 36,
  sym__quoted_word_content = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  sym_source_file = 40,
  sym_commands = 41,
  aux_sym__commands = 42,
  sym_foreach = 43,
  sym_global = 44,
  sym_namespace = 45,
  sym_try = 46,
  sym__command = 47,
  sym_command = 48,
  sym_word_list = 49,
  sym__cword = 50,
  sym_variable_substitution = 51,
  sym_command_block = 52,
  sym_set = 53,
  sym_procedure = 54,
  sym_arguments = 55,
  sym_expr = 56,
  sym_binop_expr = 57,
  sym_elseif = 58,
  sym_else = 59,
  sym_conditional = 60,
  sym_quoted_word = 61,
  sym_braced_word = 62,
  sym_command_substitution = 63,
  aux_sym_word_list_repeat1 = 64,
  aux_sym_variable_substitution_repeat1 = 65,
  aux_sym_arguments_repeat1 = 66,
  aux_sym_conditional_repeat1 = 67,
  aux_sym_quoted_word_repeat1 = 68,
  aux_sym_braced_word_repeat1 = 69,
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
  [7] = 4,
  [8] = 6,
  [9] = 5,
  [10] = 10,
  [11] = 11,
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 24,
  [32] = 25,
  [33] = 23,
  [34] = 22,
  [35] = 12,
  [36] = 13,
  [37] = 37,
  [38] = 14,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 37,
  [46] = 46,
  [47] = 44,
  [48] = 46,
  [49] = 27,
  [50] = 50,
  [51] = 42,
  [52] = 52,
  [53] = 40,
  [54] = 54,
  [55] = 28,
  [56] = 29,
  [57] = 21,
  [58] = 26,
  [59] = 30,
  [60] = 50,
  [61] = 12,
  [62] = 52,
  [63] = 54,
  [64] = 13,
  [65] = 65,
  [66] = 66,
  [67] = 14,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 69,
  [79] = 79,
  [80] = 70,
  [81] = 81,
  [82] = 81,
  [83] = 75,
  [84] = 74,
  [85] = 71,
  [86] = 79,
  [87] = 87,
  [88] = 66,
  [89] = 87,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 13,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 12,
  [98] = 98,
  [99] = 94,
  [100] = 91,
  [101] = 98,
  [102] = 102,
  [103] = 102,
  [104] = 14,
  [105] = 22,
  [106] = 102,
  [107] = 107,
  [108] = 102,
  [109] = 109,
  [110] = 107,
  [111] = 25,
  [112] = 13,
  [113] = 107,
  [114] = 23,
  [115] = 102,
  [116] = 116,
  [117] = 117,
  [118] = 12,
  [119] = 107,
  [120] = 24,
  [121] = 107,
  [122] = 14,
  [123] = 24,
  [124] = 13,
  [125] = 23,
  [126] = 109,
  [127] = 127,
  [128] = 128,
  [129] = 116,
  [130] = 25,
  [131] = 12,
  [132] = 22,
  [133] = 22,
  [134] = 12,
  [135] = 135,
  [136] = 127,
  [137] = 137,
  [138] = 13,
  [139] = 139,
  [140] = 14,
  [141] = 141,
  [142] = 24,
  [143] = 13,
  [144] = 128,
  [145] = 12,
  [146] = 22,
  [147] = 135,
  [148] = 148,
  [149] = 13,
  [150] = 12,
  [151] = 14,
  [152] = 12,
  [153] = 153,
  [154] = 13,
  [155] = 24,
  [156] = 23,
  [157] = 13,
  [158] = 14,
  [159] = 25,
  [160] = 12,
  [161] = 14,
  [162] = 14,
  [163] = 163,
  [164] = 148,
  [165] = 153,
  [166] = 14,
  [167] = 163,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 171,
  [173] = 168,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 168,
  [178] = 175,
  [179] = 179,
  [180] = 168,
  [181] = 168,
  [182] = 168,
  [183] = 168,
  [184] = 168,
  [185] = 168,
  [186] = 179,
  [187] = 168,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 189,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 176,
  [201] = 201,
  [202] = 193,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 197,
  [209] = 191,
  [210] = 206,
  [211] = 207,
  [212] = 204,
  [213] = 205,
  [214] = 214,
  [215] = 203,
  [216] = 206,
  [217] = 207,
  [218] = 195,
  [219] = 205,
  [220] = 220,
  [221] = 206,
  [222] = 207,
  [223] = 205,
  [224] = 205,
  [225] = 206,
  [226] = 207,
  [227] = 206,
  [228] = 206,
  [229] = 206,
  [230] = 206,
  [231] = 206,
  [232] = 207,
  [233] = 206,
  [234] = 194,
  [235] = 205,
  [236] = 190,
  [237] = 237,
  [238] = 237,
  [239] = 196,
  [240] = 214,
  [241] = 237,
  [242] = 198,
  [243] = 237,
  [244] = 201,
  [245] = 237,
  [246] = 199,
  [247] = 237,
  [248] = 248,
  [249] = 220,
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
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(148);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(74)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(43)
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
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(51)
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
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(148);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(148);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(143);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(163);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 50:
      if (lookahead == '&') ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'q') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'q') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 71:
      if (lookahead == '|') ADVANCE(129);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(73)
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(77)
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_on);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__ns_delim);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ns_delim);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ns_delim);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_variable_substitution_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_eq);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ne);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ne);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_in);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(153);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_escaped_character);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__quoted_word_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '&') ADVANCE(128);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == ':') ADVANCE(87);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '=') ADVANCE(118);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '=') ADVANCE(112);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'e') ADVANCE(116);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'e') ADVANCE(134);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'f') ADVANCE(133);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'q') ADVANCE(110);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'n') ADVANCE(122);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'n') ADVANCE(85);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'q') ADVANCE(110);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 'q') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == 's') ADVANCE(151);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_simple_word);
      if (lookahead == '|') ADVANCE(130);
      if (!sym_simple_word_character_set_2(lookahead)) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_simple_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_simple_word);
      if (!sym_simple_word_character_set_1(lookahead)) ADVANCE(163);
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
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 42},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 48},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 48},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 48},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 48},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 48},
  [84] = {.lex_state = 48},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 48},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 48},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 45},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 48},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 48},
  [99] = {.lex_state = 48},
  [100] = {.lex_state = 48},
  [101] = {.lex_state = 48},
  [102] = {.lex_state = 47},
  [103] = {.lex_state = 47},
  [104] = {.lex_state = 45},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 47},
  [107] = {.lex_state = 47},
  [108] = {.lex_state = 47},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 47},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 46},
  [113] = {.lex_state = 47},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 47},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 47},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 47},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 48},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 48},
  [126] = {.lex_state = 48},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 48},
  [130] = {.lex_state = 48},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 48},
  [133] = {.lex_state = 47},
  [134] = {.lex_state = 51},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 48},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 48},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 48},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 52},
  [150] = {.lex_state = 52},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 53},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 52},
  [162] = {.lex_state = 53},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 44},
  [165] = {.lex_state = 44},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 53},
  [169] = {.lex_state = 53},
  [170] = {.lex_state = 48},
  [171] = {.lex_state = 48},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 48},
  [175] = {.lex_state = 48},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 53},
  [178] = {.lex_state = 48},
  [179] = {.lex_state = 48},
  [180] = {.lex_state = 53},
  [181] = {.lex_state = 53},
  [182] = {.lex_state = 53},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 53},
  [185] = {.lex_state = 53},
  [186] = {.lex_state = 48},
  [187] = {.lex_state = 53},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 77},
  [191] = {.lex_state = 77},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 77},
  [194] = {.lex_state = 77},
  [195] = {.lex_state = 77},
  [196] = {.lex_state = 77},
  [197] = {.lex_state = 77},
  [198] = {.lex_state = 77},
  [199] = {.lex_state = 77},
  [200] = {.lex_state = 44},
  [201] = {.lex_state = 77},
  [202] = {.lex_state = 77},
  [203] = {.lex_state = 77},
  [204] = {.lex_state = 77},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 53},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 48},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 53},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 53},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 53},
  [228] = {.lex_state = 53},
  [229] = {.lex_state = 53},
  [230] = {.lex_state = 53},
  [231] = {.lex_state = 53},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 53},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 57},
  [238] = {.lex_state = 57},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 48},
  [241] = {.lex_state = 57},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 57},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 57},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 57},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_ne] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(248),
    [aux_sym__commands] = STATE(10),
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
    STATE(11), 1,
      aux_sym__commands,
    STATE(220), 1,
      sym_commands,
    STATE(193), 9,
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
    STATE(11), 1,
      aux_sym__commands,
    STATE(249), 1,
      sym_commands,
    STATE(193), 9,
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
    STATE(167), 5,
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
    ACTIONS(55), 1,
      sym_simple_word,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_foreach,
    ACTIONS(70), 1,
      anon_sym_global,
    ACTIONS(73), 1,
      anon_sym_namespace,
    ACTIONS(76), 1,
      anon_sym_try,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      anon_sym_set,
    ACTIONS(84), 1,
      anon_sym_proc,
    ACTIONS(87), 1,
      anon_sym_if,
    STATE(5), 1,
      aux_sym__commands,
    STATE(193), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
  [204] = 11,
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
    ACTIONS(90), 1,
      sym_simple_word,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(144), 5,
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
  [249] = 11,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(92), 1,
      sym_simple_word,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(163), 5,
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
  [294] = 11,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_simple_word,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(128), 5,
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
  [339] = 14,
    ACTIONS(55), 1,
      sym_simple_word,
    ACTIONS(67), 1,
      anon_sym_foreach,
    ACTIONS(70), 1,
      anon_sym_global,
    ACTIONS(73), 1,
      anon_sym_namespace,
    ACTIONS(76), 1,
      anon_sym_try,
    ACTIONS(81), 1,
      anon_sym_set,
    ACTIONS(84), 1,
      anon_sym_proc,
    ACTIONS(87), 1,
      anon_sym_if,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_comment,
    STATE(9), 1,
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
  [390] = 14,
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
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(9), 1,
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
  [441] = 14,
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
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym__commands,
    STATE(193), 9,
      sym_foreach,
      sym_global,
      sym_namespace,
      sym_try,
      sym__command,
      sym_command,
      sym_set,
      sym_procedure,
      sym_conditional,
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
    STATE(213), 9,
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
    STATE(205), 9,
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
    STATE(223), 9,
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
    STATE(224), 9,
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
    STATE(235), 9,
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
  [860] = 2,
    ACTIONS(185), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(183), 13,
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
  [882] = 2,
    ACTIONS(189), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(187), 13,
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
  [904] = 2,
    ACTIONS(193), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
    ACTIONS(191), 13,
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
  [926] = 5,
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
  [954] = 2,
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
  [976] = 2,
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
  [998] = 3,
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
  [1022] = 2,
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
  [1044] = 2,
    ACTIONS(187), 1,
      anon_sym_else,
    ACTIONS(189), 15,
      anon_sym_on,
      anon_sym_RBRACE,
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
  [1065] = 2,
    ACTIONS(191), 1,
      anon_sym_else,
    ACTIONS(193), 15,
      anon_sym_on,
      anon_sym_RBRACE,
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
  [1086] = 2,
    ACTIONS(183), 1,
      anon_sym_else,
    ACTIONS(185), 15,
      anon_sym_on,
      anon_sym_RBRACE,
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
  [1107] = 2,
    ACTIONS(179), 1,
      anon_sym_else,
    ACTIONS(181), 15,
      anon_sym_on,
      anon_sym_RBRACE,
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
  [1128] = 5,
    ACTIONS(203), 1,
      sym__ns_delim,
    ACTIONS(205), 1,
      sym__ident,
    STATE(36), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 3,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_in,
    ACTIONS(135), 9,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1154] = 5,
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
    ACTIONS(145), 9,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1180] = 10,
    ACTIONS(213), 1,
      sym_simple_word,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      sym_word_list,
    STATE(42), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1215] = 2,
    ACTIONS(137), 4,
      sym__ident,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_in,
    ACTIONS(145), 10,
      sym__ns_delim,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1234] = 9,
    ACTIONS(229), 1,
      sym_simple_word,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(39), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [1266] = 9,
    ACTIONS(252), 1,
      sym_simple_word,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    STATE(40), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1298] = 9,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      sym_simple_word,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(47), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [1330] = 9,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_simple_word,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    STATE(40), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1362] = 9,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 1,
      sym_simple_word,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(44), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [1394] = 9,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      sym_simple_word,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(39), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [1426] = 9,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(298), 1,
      sym_simple_word,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(218), 1,
      sym_word_list,
    STATE(51), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1458] = 9,
    ACTIONS(213), 1,
      sym_simple_word,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      anon_sym_eval,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_word_list,
    STATE(42), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1490] = 9,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      sym_simple_word,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(39), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_braced_word_repeat1,
  [1522] = 9,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      sym_simple_word,
    ACTIONS(324), 1,
      anon_sym_eval,
    STATE(242), 1,
      sym_word_list,
    STATE(51), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1554] = 1,
    ACTIONS(197), 12,
      anon_sym_RBRACE,
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
  [1569] = 8,
    ACTIONS(298), 1,
      sym_simple_word,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(246), 1,
      sym_word_list,
    STATE(51), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1598] = 8,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      sym_simple_word,
    STATE(53), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1627] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 10,
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
  [1644] = 8,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      sym_simple_word,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    STATE(53), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1673] = 5,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      anon_sym_AMP_AMP,
    ACTIONS(354), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(350), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [1696] = 1,
    ACTIONS(177), 12,
      anon_sym_RBRACE,
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
  [1711] = 2,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 10,
      anon_sym_RBRACE,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1728] = 3,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 3,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(350), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [1747] = 4,
    ACTIONS(352), 1,
      anon_sym_AMP_AMP,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(350), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [1768] = 1,
    ACTIONS(201), 12,
      anon_sym_RBRACE,
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
  [1783] = 8,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_simple_word,
    STATE(199), 1,
      sym_word_list,
    STATE(42), 5,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
      aux_sym_word_list_repeat1,
  [1812] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      sym__ns_delim,
    ACTIONS(360), 1,
      sym__ident,
    STATE(64), 1,
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
  [1835] = 2,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(79), 11,
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
  [1852] = 5,
    ACTIONS(352), 1,
      anon_sym_AMP_AMP,
    ACTIONS(354), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(350), 7,
      anon_sym_eq,
      anon_sym_EQ_EQ,
      anon_sym_ne,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_LT,
  [1875] = 5,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      sym__ns_delim,
    ACTIONS(367), 1,
      sym__ident,
    STATE(64), 1,
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
  [1898] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1926] = 8,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_expr,
    STATE(59), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1954] = 2,
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
  [1970] = 8,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_expr,
    STATE(59), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [1998] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2026] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2054] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      sym_simple_word,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(208), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2080] = 7,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      sym_simple_word,
    ACTIONS(394), 1,
      anon_sym_DOLLAR,
    STATE(176), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2106] = 7,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      sym_simple_word,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(200), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2132] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(400), 1,
      sym_simple_word,
    STATE(244), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2158] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym_simple_word,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(191), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2184] = 8,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_expr,
    STATE(59), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2212] = 8,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_expr,
    STATE(59), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2240] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2268] = 8,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_expr,
    STATE(59), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2296] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2324] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_simple_word,
    STATE(190), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2350] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(408), 1,
      sym_simple_word,
    STATE(236), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2376] = 7,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(410), 1,
      sym_simple_word,
    STATE(209), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2402] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(412), 1,
      sym_simple_word,
    STATE(201), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2428] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      sym_simple_word,
    STATE(197), 5,
      sym__cword,
      sym_variable_substitution,
      sym_command_block,
      sym_quoted_word,
      sym_command_substitution,
  [2454] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2482] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2510] = 8,
    ACTIONS(370), 1,
      sym_simple_word,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_expr,
    STATE(30), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2538] = 8,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_simple_word,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_expr,
    STATE(59), 4,
      sym_variable_substitution,
      sym_binop_expr,
      sym_quoted_word,
      sym_command_substitution,
  [2566] = 7,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      sym_simple_word,
    STATE(215), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2591] = 7,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      sym_simple_word,
    STATE(92), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2616] = 7,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(420), 1,
      sym_simple_word,
    STATE(203), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2641] = 5,
    ACTIONS(422), 1,
      sym__ns_delim,
    ACTIONS(425), 1,
      sym__ident,
    STATE(93), 1,
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
  [2662] = 7,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      sym_simple_word,
    STATE(179), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2687] = 7,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_simple_word,
    STATE(189), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2712] = 7,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(432), 1,
      sym_simple_word,
    STATE(192), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2737] = 5,
    ACTIONS(434), 1,
      sym__ns_delim,
    ACTIONS(436), 1,
      sym__ident,
    STATE(93), 1,
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
  [2758] = 7,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      sym_simple_word,
    STATE(83), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2783] = 7,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      sym_simple_word,
    STATE(186), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2808] = 7,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      sym_simple_word,
    STATE(90), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2833] = 7,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      sym_simple_word,
    STATE(75), 4,
      sym_variable_substitution,
      sym_quoted_word,
      sym_braced_word,
      sym_command_substitution,
  [2858] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(452), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(119), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [2880] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(121), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [2902] = 2,
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
  [2916] = 2,
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
  [2930] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(110), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [2952] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(466), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(117), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [2974] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(107), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [2996] = 2,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(472), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3010] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    ACTIONS(466), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(117), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3032] = 2,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(191), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3046] = 4,
    ACTIONS(478), 1,
      sym__ns_delim,
    ACTIONS(481), 1,
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
  [3064] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    ACTIONS(466), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(117), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3086] = 2,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(183), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3100] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(113), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3122] = 2,
    ACTIONS(492), 1,
      anon_sym_LF,
    ACTIONS(490), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3136] = 6,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(497), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(117), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3158] = 4,
    ACTIONS(508), 1,
      sym__ns_delim,
    ACTIONS(510), 1,
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
  [3176] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    ACTIONS(466), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(117), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3198] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(187), 8,
      anon_sym_SEMI,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3212] = 6,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    ACTIONS(466), 2,
      sym_escaped_character,
      sym__quoted_word_content,
    STATE(117), 3,
      sym_variable_substitution,
      sym_command_substitution,
      aux_sym_quoted_word_repeat1,
  [3234] = 1,
    ACTIONS(137), 8,
      sym__ns_delim,
      sym__ident,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3245] = 2,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3257] = 5,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym__ns_delim,
    ACTIONS(519), 1,
      sym__ident,
    STATE(124), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_else,
  [3275] = 2,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(185), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3287] = 2,
    ACTIONS(472), 1,
      anon_sym_DOLLAR,
    ACTIONS(474), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3299] = 6,
    ACTIONS(522), 1,
      anon_sym_LF,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_elseif,
    ACTIONS(528), 1,
      anon_sym_else,
    STATE(196), 1,
      sym_else,
    STATE(135), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3319] = 6,
    ACTIONS(526), 1,
      anon_sym_elseif,
    ACTIONS(528), 1,
      anon_sym_else,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      sym_else,
    STATE(127), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3339] = 2,
    ACTIONS(490), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3351] = 2,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3363] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(534), 1,
      sym__ns_delim,
    ACTIONS(536), 1,
      sym__ident,
    STATE(124), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_else,
  [3381] = 2,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_simple_word,
  [3393] = 1,
    ACTIONS(179), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3402] = 5,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(538), 1,
      sym__ns_delim,
    ACTIONS(540), 1,
      sym__ident,
    STATE(138), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 2,
      anon_sym_elseif,
      anon_sym_else,
  [3419] = 4,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(546), 1,
      anon_sym_elseif,
    ACTIONS(544), 2,
      anon_sym_SEMI,
      anon_sym_else,
    STATE(135), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3434] = 5,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    ACTIONS(549), 1,
      anon_sym_elseif,
    ACTIONS(551), 1,
      anon_sym_else,
    STATE(239), 1,
      sym_else,
    STATE(147), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3451] = 2,
    ACTIONS(555), 1,
      anon_sym_DOLLAR,
    ACTIONS(553), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3462] = 5,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(557), 1,
      sym__ns_delim,
    ACTIONS(560), 1,
      sym__ident,
    STATE(138), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 2,
      anon_sym_elseif,
      anon_sym_else,
  [3479] = 2,
    ACTIONS(565), 1,
      anon_sym_DOLLAR,
    ACTIONS(563), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3490] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 5,
      anon_sym_SEMI,
      sym__ns_delim,
      sym__ident,
      anon_sym_elseif,
      anon_sym_else,
  [3501] = 2,
    ACTIONS(569), 1,
      anon_sym_DOLLAR,
    ACTIONS(567), 5,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_simple_word,
  [3512] = 1,
    ACTIONS(187), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_escaped_character,
      sym__quoted_word_content,
      anon_sym_LBRACK,
  [3521] = 5,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      sym__ns_delim,
    ACTIONS(574), 1,
      sym__ident,
    STATE(143), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(137), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [3538] = 5,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    ACTIONS(549), 1,
      anon_sym_elseif,
    ACTIONS(551), 1,
      anon_sym_else,
    STATE(234), 1,
      sym_else,
    STATE(136), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3555] = 5,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      sym__ns_delim,
    ACTIONS(579), 1,
      sym__ident,
    STATE(143), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(129), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [3572] = 2,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(179), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3582] = 4,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      anon_sym_else,
    ACTIONS(581), 1,
      anon_sym_elseif,
    STATE(147), 2,
      sym_elseif,
      aux_sym_conditional_repeat1,
  [3596] = 2,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3606] = 5,
    ACTIONS(137), 1,
      anon_sym_on,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(588), 1,
      sym__ns_delim,
    ACTIONS(591), 1,
      sym__ident,
    STATE(149), 1,
      aux_sym_variable_substitution_repeat1,
  [3622] = 5,
    ACTIONS(129), 1,
      anon_sym_on,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(594), 1,
      sym__ns_delim,
    ACTIONS(596), 1,
      sym__ident,
    STATE(149), 1,
      aux_sym_variable_substitution_repeat1,
  [3638] = 2,
    ACTIONS(145), 2,
      sym__ns_delim,
      anon_sym_RBRACK,
    ACTIONS(137), 3,
      sym__ident,
      anon_sym_elseif,
      anon_sym_else,
  [3648] = 4,
    ACTIONS(598), 1,
      sym__ns_delim,
    ACTIONS(600), 1,
      sym__ident,
    STATE(154), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(135), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [3662] = 2,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3672] = 4,
    ACTIONS(606), 1,
      sym__ns_delim,
    ACTIONS(609), 1,
      sym__ident,
    STATE(154), 1,
      aux_sym_variable_substitution_repeat1,
    ACTIONS(145), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [3686] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(187), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3696] = 2,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(183), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3706] = 5,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      sym__ns_delim,
    ACTIONS(615), 1,
      sym__ident,
    STATE(157), 1,
      aux_sym_variable_substitution_repeat1,
  [3722] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 4,
      anon_sym_SEMI,
      anon_sym_on,
      sym__ns_delim,
      sym__ident,
  [3732] = 2,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(191), 4,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_else,
  [3742] = 5,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      sym__ns_delim,
    ACTIONS(620), 1,
      sym__ident,
    STATE(157), 1,
      aux_sym_variable_substitution_repeat1,
  [3758] = 2,
    ACTIONS(137), 2,
      anon_sym_on,
      sym__ident,
    ACTIONS(145), 2,
      sym__ns_delim,
      anon_sym_RBRACK,
  [3767] = 1,
    ACTIONS(145), 4,
      sym__ns_delim,
      sym__ident,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [3774] = 2,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 3,
      anon_sym_SEMI,
      anon_sym_elseif,
      anon_sym_else,
  [3783] = 2,
    ACTIONS(586), 1,
      anon_sym_else,
    ACTIONS(584), 3,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [3792] = 2,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(602), 3,
      anon_sym_on,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [3801] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      sym__ns_delim,
      sym__ident,
  [3810] = 2,
    ACTIONS(624), 1,
      anon_sym_else,
    ACTIONS(622), 2,
      anon_sym_elseif,
      anon_sym_RBRACK,
  [3818] = 3,
    ACTIONS(594), 1,
      sym__ns_delim,
    ACTIONS(626), 1,
      sym__ident,
    STATE(150), 1,
      aux_sym_variable_substitution_repeat1,
  [3828] = 3,
    ACTIONS(628), 1,
      sym__ns_delim,
    ACTIONS(630), 1,
      sym__ident,
    STATE(12), 1,
      aux_sym_variable_substitution_repeat1,
  [3838] = 3,
    ACTIONS(632), 1,
      sym_simple_word,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_arguments_repeat1,
  [3848] = 3,
    ACTIONS(637), 1,
      sym_simple_word,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_arguments,
  [3858] = 3,
    ACTIONS(637), 1,
      sym_simple_word,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_arguments,
  [3868] = 3,
    ACTIONS(641), 1,
      sym__ns_delim,
    ACTIONS(643), 1,
      sym__ident,
    STATE(97), 1,
      aux_sym_variable_substitution_repeat1,
  [3878] = 3,
    ACTIONS(645), 1,
      sym_simple_word,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_arguments_repeat1,
  [3888] = 3,
    ACTIONS(637), 1,
      sym_simple_word,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_arguments,
  [3898] = 3,
    ACTIONS(649), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    ACTIONS(653), 1,
      anon_sym_on,
  [3908] = 3,
    ACTIONS(655), 1,
      sym__ns_delim,
    ACTIONS(657), 1,
      sym__ident,
    STATE(61), 1,
      aux_sym_variable_substitution_repeat1,
  [3918] = 3,
    ACTIONS(637), 1,
      sym_simple_word,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_arguments,
  [3928] = 3,
    ACTIONS(637), 1,
      sym_simple_word,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_arguments,
  [3938] = 3,
    ACTIONS(598), 1,
      sym__ns_delim,
    ACTIONS(659), 1,
      sym__ident,
    STATE(152), 1,
      aux_sym_variable_substitution_repeat1,
  [3948] = 3,
    ACTIONS(661), 1,
      sym__ns_delim,
    ACTIONS(663), 1,
      sym__ident,
    STATE(118), 1,
      aux_sym_variable_substitution_repeat1,
  [3958] = 3,
    ACTIONS(665), 1,
      sym__ns_delim,
    ACTIONS(667), 1,
      sym__ident,
    STATE(160), 1,
      aux_sym_variable_substitution_repeat1,
  [3968] = 3,
    ACTIONS(538), 1,
      sym__ns_delim,
    ACTIONS(669), 1,
      sym__ident,
    STATE(134), 1,
      aux_sym_variable_substitution_repeat1,
  [3978] = 3,
    ACTIONS(203), 1,
      sym__ns_delim,
    ACTIONS(671), 1,
      sym__ident,
    STATE(35), 1,
      aux_sym_variable_substitution_repeat1,
  [3988] = 3,
    ACTIONS(673), 1,
      sym__ns_delim,
    ACTIONS(675), 1,
      sym__ident,
    STATE(145), 1,
      aux_sym_variable_substitution_repeat1,
  [3998] = 3,
    ACTIONS(637), 1,
      sym_simple_word,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_arguments,
  [4008] = 3,
    ACTIONS(677), 1,
      sym__ns_delim,
    ACTIONS(679), 1,
      sym__ident,
    STATE(131), 1,
      aux_sym_variable_substitution_repeat1,
  [4018] = 3,
    ACTIONS(681), 1,
      sym_simple_word,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_arguments_repeat1,
  [4028] = 2,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_command_block,
  [4035] = 2,
    ACTIONS(685), 1,
      anon_sym_LF,
    ACTIONS(687), 1,
      anon_sym_SEMI,
  [4042] = 2,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [4049] = 2,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_command_block,
  [4056] = 2,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [4063] = 2,
    ACTIONS(522), 1,
      anon_sym_LF,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [4070] = 2,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [4077] = 2,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 1,
      anon_sym_SEMI,
  [4084] = 2,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [4091] = 2,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [4098] = 2,
    ACTIONS(713), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [4105] = 2,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    ACTIONS(717), 1,
      anon_sym_on,
  [4112] = 2,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [4119] = 2,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [4126] = 2,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [4133] = 2,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [4140] = 1,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
  [4144] = 1,
    ACTIONS(737), 1,
      sym__ident,
  [4148] = 1,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
  [4152] = 1,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
  [4156] = 1,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
  [4160] = 1,
    ACTIONS(741), 1,
      sym__ident,
  [4164] = 1,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
  [4168] = 1,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
  [4172] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
  [4176] = 1,
    ACTIONS(747), 1,
      anon_sym_error,
  [4180] = 1,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
  [4184] = 1,
    ACTIONS(749), 1,
      sym__ident,
  [4188] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
  [4192] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [4196] = 1,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
  [4200] = 1,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
  [4204] = 1,
    ACTIONS(757), 1,
      sym__ident,
  [4208] = 1,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
  [4212] = 1,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
  [4216] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
  [4220] = 1,
    ACTIONS(765), 1,
      sym__ident,
  [4224] = 1,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
  [4228] = 1,
    ACTIONS(769), 1,
      sym__ident,
  [4232] = 1,
    ACTIONS(771), 1,
      sym__ident,
  [4236] = 1,
    ACTIONS(773), 1,
      sym__ident,
  [4240] = 1,
    ACTIONS(775), 1,
      sym__ident,
  [4244] = 1,
    ACTIONS(777), 1,
      sym__ident,
  [4248] = 1,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
  [4252] = 1,
    ACTIONS(781), 1,
      sym__ident,
  [4256] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
  [4260] = 1,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
  [4264] = 1,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
  [4268] = 1,
    ACTIONS(785), 1,
      aux_sym_variable_substitution_token1,
  [4272] = 1,
    ACTIONS(787), 1,
      aux_sym_variable_substitution_token1,
  [4276] = 1,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
  [4280] = 1,
    ACTIONS(789), 1,
      anon_sym_error,
  [4284] = 1,
    ACTIONS(791), 1,
      aux_sym_variable_substitution_token1,
  [4288] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
  [4292] = 1,
    ACTIONS(793), 1,
      aux_sym_variable_substitution_token1,
  [4296] = 1,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
  [4300] = 1,
    ACTIONS(795), 1,
      aux_sym_variable_substitution_token1,
  [4304] = 1,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
  [4308] = 1,
    ACTIONS(797), 1,
      aux_sym_variable_substitution_token1,
  [4312] = 1,
    ACTIONS(799), 1,
      ts_builtin_sym_end,
  [4316] = 1,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 249,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 441,
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
  [SMALL_STATE(24)] = 882,
  [SMALL_STATE(25)] = 904,
  [SMALL_STATE(26)] = 926,
  [SMALL_STATE(27)] = 954,
  [SMALL_STATE(28)] = 976,
  [SMALL_STATE(29)] = 998,
  [SMALL_STATE(30)] = 1022,
  [SMALL_STATE(31)] = 1044,
  [SMALL_STATE(32)] = 1065,
  [SMALL_STATE(33)] = 1086,
  [SMALL_STATE(34)] = 1107,
  [SMALL_STATE(35)] = 1128,
  [SMALL_STATE(36)] = 1154,
  [SMALL_STATE(37)] = 1180,
  [SMALL_STATE(38)] = 1215,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1266,
  [SMALL_STATE(41)] = 1298,
  [SMALL_STATE(42)] = 1330,
  [SMALL_STATE(43)] = 1362,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1426,
  [SMALL_STATE(46)] = 1458,
  [SMALL_STATE(47)] = 1490,
  [SMALL_STATE(48)] = 1522,
  [SMALL_STATE(49)] = 1554,
  [SMALL_STATE(50)] = 1569,
  [SMALL_STATE(51)] = 1598,
  [SMALL_STATE(52)] = 1627,
  [SMALL_STATE(53)] = 1644,
  [SMALL_STATE(54)] = 1673,
  [SMALL_STATE(55)] = 1696,
  [SMALL_STATE(56)] = 1711,
  [SMALL_STATE(57)] = 1728,
  [SMALL_STATE(58)] = 1747,
  [SMALL_STATE(59)] = 1768,
  [SMALL_STATE(60)] = 1783,
  [SMALL_STATE(61)] = 1812,
  [SMALL_STATE(62)] = 1835,
  [SMALL_STATE(63)] = 1852,
  [SMALL_STATE(64)] = 1875,
  [SMALL_STATE(65)] = 1898,
  [SMALL_STATE(66)] = 1926,
  [SMALL_STATE(67)] = 1954,
  [SMALL_STATE(68)] = 1970,
  [SMALL_STATE(69)] = 1998,
  [SMALL_STATE(70)] = 2026,
  [SMALL_STATE(71)] = 2054,
  [SMALL_STATE(72)] = 2080,
  [SMALL_STATE(73)] = 2106,
  [SMALL_STATE(74)] = 2132,
  [SMALL_STATE(75)] = 2158,
  [SMALL_STATE(76)] = 2184,
  [SMALL_STATE(77)] = 2212,
  [SMALL_STATE(78)] = 2240,
  [SMALL_STATE(79)] = 2268,
  [SMALL_STATE(80)] = 2296,
  [SMALL_STATE(81)] = 2324,
  [SMALL_STATE(82)] = 2350,
  [SMALL_STATE(83)] = 2376,
  [SMALL_STATE(84)] = 2402,
  [SMALL_STATE(85)] = 2428,
  [SMALL_STATE(86)] = 2454,
  [SMALL_STATE(87)] = 2482,
  [SMALL_STATE(88)] = 2510,
  [SMALL_STATE(89)] = 2538,
  [SMALL_STATE(90)] = 2566,
  [SMALL_STATE(91)] = 2591,
  [SMALL_STATE(92)] = 2616,
  [SMALL_STATE(93)] = 2641,
  [SMALL_STATE(94)] = 2662,
  [SMALL_STATE(95)] = 2687,
  [SMALL_STATE(96)] = 2712,
  [SMALL_STATE(97)] = 2737,
  [SMALL_STATE(98)] = 2758,
  [SMALL_STATE(99)] = 2783,
  [SMALL_STATE(100)] = 2808,
  [SMALL_STATE(101)] = 2833,
  [SMALL_STATE(102)] = 2858,
  [SMALL_STATE(103)] = 2880,
  [SMALL_STATE(104)] = 2902,
  [SMALL_STATE(105)] = 2916,
  [SMALL_STATE(106)] = 2930,
  [SMALL_STATE(107)] = 2952,
  [SMALL_STATE(108)] = 2974,
  [SMALL_STATE(109)] = 2996,
  [SMALL_STATE(110)] = 3010,
  [SMALL_STATE(111)] = 3032,
  [SMALL_STATE(112)] = 3046,
  [SMALL_STATE(113)] = 3064,
  [SMALL_STATE(114)] = 3086,
  [SMALL_STATE(115)] = 3100,
  [SMALL_STATE(116)] = 3122,
  [SMALL_STATE(117)] = 3136,
  [SMALL_STATE(118)] = 3158,
  [SMALL_STATE(119)] = 3176,
  [SMALL_STATE(120)] = 3198,
  [SMALL_STATE(121)] = 3212,
  [SMALL_STATE(122)] = 3234,
  [SMALL_STATE(123)] = 3245,
  [SMALL_STATE(124)] = 3257,
  [SMALL_STATE(125)] = 3275,
  [SMALL_STATE(126)] = 3287,
  [SMALL_STATE(127)] = 3299,
  [SMALL_STATE(128)] = 3319,
  [SMALL_STATE(129)] = 3339,
  [SMALL_STATE(130)] = 3351,
  [SMALL_STATE(131)] = 3363,
  [SMALL_STATE(132)] = 3381,
  [SMALL_STATE(133)] = 3393,
  [SMALL_STATE(134)] = 3402,
  [SMALL_STATE(135)] = 3419,
  [SMALL_STATE(136)] = 3434,
  [SMALL_STATE(137)] = 3451,
  [SMALL_STATE(138)] = 3462,
  [SMALL_STATE(139)] = 3479,
  [SMALL_STATE(140)] = 3490,
  [SMALL_STATE(141)] = 3501,
  [SMALL_STATE(142)] = 3512,
  [SMALL_STATE(143)] = 3521,
  [SMALL_STATE(144)] = 3538,
  [SMALL_STATE(145)] = 3555,
  [SMALL_STATE(146)] = 3572,
  [SMALL_STATE(147)] = 3582,
  [SMALL_STATE(148)] = 3596,
  [SMALL_STATE(149)] = 3606,
  [SMALL_STATE(150)] = 3622,
  [SMALL_STATE(151)] = 3638,
  [SMALL_STATE(152)] = 3648,
  [SMALL_STATE(153)] = 3662,
  [SMALL_STATE(154)] = 3672,
  [SMALL_STATE(155)] = 3686,
  [SMALL_STATE(156)] = 3696,
  [SMALL_STATE(157)] = 3706,
  [SMALL_STATE(158)] = 3722,
  [SMALL_STATE(159)] = 3732,
  [SMALL_STATE(160)] = 3742,
  [SMALL_STATE(161)] = 3758,
  [SMALL_STATE(162)] = 3767,
  [SMALL_STATE(163)] = 3774,
  [SMALL_STATE(164)] = 3783,
  [SMALL_STATE(165)] = 3792,
  [SMALL_STATE(166)] = 3801,
  [SMALL_STATE(167)] = 3810,
  [SMALL_STATE(168)] = 3818,
  [SMALL_STATE(169)] = 3828,
  [SMALL_STATE(170)] = 3838,
  [SMALL_STATE(171)] = 3848,
  [SMALL_STATE(172)] = 3858,
  [SMALL_STATE(173)] = 3868,
  [SMALL_STATE(174)] = 3878,
  [SMALL_STATE(175)] = 3888,
  [SMALL_STATE(176)] = 3898,
  [SMALL_STATE(177)] = 3908,
  [SMALL_STATE(178)] = 3918,
  [SMALL_STATE(179)] = 3928,
  [SMALL_STATE(180)] = 3938,
  [SMALL_STATE(181)] = 3948,
  [SMALL_STATE(182)] = 3958,
  [SMALL_STATE(183)] = 3968,
  [SMALL_STATE(184)] = 3978,
  [SMALL_STATE(185)] = 3988,
  [SMALL_STATE(186)] = 3998,
  [SMALL_STATE(187)] = 4008,
  [SMALL_STATE(188)] = 4018,
  [SMALL_STATE(189)] = 4028,
  [SMALL_STATE(190)] = 4035,
  [SMALL_STATE(191)] = 4042,
  [SMALL_STATE(192)] = 4049,
  [SMALL_STATE(193)] = 4056,
  [SMALL_STATE(194)] = 4063,
  [SMALL_STATE(195)] = 4070,
  [SMALL_STATE(196)] = 4077,
  [SMALL_STATE(197)] = 4084,
  [SMALL_STATE(198)] = 4091,
  [SMALL_STATE(199)] = 4098,
  [SMALL_STATE(200)] = 4105,
  [SMALL_STATE(201)] = 4112,
  [SMALL_STATE(202)] = 4119,
  [SMALL_STATE(203)] = 4126,
  [SMALL_STATE(204)] = 4133,
  [SMALL_STATE(205)] = 4140,
  [SMALL_STATE(206)] = 4144,
  [SMALL_STATE(207)] = 4148,
  [SMALL_STATE(208)] = 4152,
  [SMALL_STATE(209)] = 4156,
  [SMALL_STATE(210)] = 4160,
  [SMALL_STATE(211)] = 4164,
  [SMALL_STATE(212)] = 4168,
  [SMALL_STATE(213)] = 4172,
  [SMALL_STATE(214)] = 4176,
  [SMALL_STATE(215)] = 4180,
  [SMALL_STATE(216)] = 4184,
  [SMALL_STATE(217)] = 4188,
  [SMALL_STATE(218)] = 4192,
  [SMALL_STATE(219)] = 4196,
  [SMALL_STATE(220)] = 4200,
  [SMALL_STATE(221)] = 4204,
  [SMALL_STATE(222)] = 4208,
  [SMALL_STATE(223)] = 4212,
  [SMALL_STATE(224)] = 4216,
  [SMALL_STATE(225)] = 4220,
  [SMALL_STATE(226)] = 4224,
  [SMALL_STATE(227)] = 4228,
  [SMALL_STATE(228)] = 4232,
  [SMALL_STATE(229)] = 4236,
  [SMALL_STATE(230)] = 4240,
  [SMALL_STATE(231)] = 4244,
  [SMALL_STATE(232)] = 4248,
  [SMALL_STATE(233)] = 4252,
  [SMALL_STATE(234)] = 4256,
  [SMALL_STATE(235)] = 4260,
  [SMALL_STATE(236)] = 4264,
  [SMALL_STATE(237)] = 4268,
  [SMALL_STATE(238)] = 4272,
  [SMALL_STATE(239)] = 4276,
  [SMALL_STATE(240)] = 4280,
  [SMALL_STATE(241)] = 4284,
  [SMALL_STATE(242)] = 4288,
  [SMALL_STATE(243)] = 4292,
  [SMALL_STATE(244)] = 4296,
  [SMALL_STATE(245)] = 4300,
  [SMALL_STATE(246)] = 4304,
  [SMALL_STATE(247)] = 4308,
  [SMALL_STATE(248)] = 4312,
  [SMALL_STATE(249)] = 4316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(193),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(171),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(60),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(46),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(72),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__commands, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(91),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(94),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(78),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__commands, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(9),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__commands, 2), SHIFT_REPEAT(202),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commands, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_substitution, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_substitution, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(210),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop_expr, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop_expr, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_substitution, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_substitution, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(227),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(36),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(39),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(39),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(177),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(238),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(41),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(106),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_braced_word_repeat1, 2), SHIFT_REPEAT(20),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(40),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(177),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(238),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(41),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(106),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(20),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_list, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_list, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(53),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(173),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(241),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(43),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(103),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(17),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(230),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(64),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(228),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(93),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(221),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(112),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(181),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(245),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(117),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(15),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(229),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(124),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, .production_id = 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4, .production_id = 3),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, .production_id = 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3, .production_id = 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(80),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(233),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(138),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(206),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(143),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(70),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 3),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 3),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(231),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(149),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 2),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(216),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(154),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(225),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_substitution_repeat1, 2), SHIFT_REPEAT(157),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif, 3, .production_id = 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif, 3, .production_id = 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(170),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 4, .production_id = 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure, 4, .production_id = 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 6),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 4),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [799] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
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
