#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_fn = 2,
  anon_sym_struct = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_COLON = 10,
  anon_sym_SEMI = 11,
  anon_sym_TODO = 12,
  anon_sym_let = 13,
  anon_sym_var = 14,
  anon_sym_return = 15,
  anon_sym_for = 16,
  anon_sym_if = 17,
  anon_sym_COLON_EQ = 18,
  anon_sym_EQ = 19,
  sym_comment = 20,
  sym_number_literal = 21,
  sym_string_literal = 22,
  sym_source_file = 23,
  sym_function_definition = 24,
  sym_struct_definition = 25,
  sym_parameter_list = 26,
  sym_function_return_type_specifier = 27,
  sym_struct_member_definition = 28,
  sym_parameter = 29,
  sym_statement = 30,
  sym_let_statement = 31,
  sym_var_statement = 32,
  sym_compound_statement = 33,
  sym_return_statement = 34,
  sym_for_statement = 35,
  sym_if_statement = 36,
  sym_expression_statement = 37,
  sym__variable_declaration = 38,
  sym_type_specifier = 39,
  sym_expression = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_struct_definition_repeat1 = 42,
  aux_sym_parameter_list_repeat1 = 43,
  aux_sym_compound_statement_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_fn] = "fn",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_TODO] = "TODO",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_return] = "return",
  [anon_sym_for] = "for",
  [anon_sym_if] = "if",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_function_return_type_specifier] = "function_return_type_specifier",
  [sym_struct_member_definition] = "struct_member_definition",
  [sym_parameter] = "parameter",
  [sym_statement] = "statement",
  [sym_let_statement] = "let_statement",
  [sym_var_statement] = "var_statement",
  [sym_compound_statement] = "compound_statement",
  [sym_return_statement] = "return_statement",
  [sym_for_statement] = "for_statement",
  [sym_if_statement] = "if_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__variable_declaration] = "_variable_declaration",
  [sym_type_specifier] = "type_specifier",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_return_type_specifier] = sym_function_return_type_specifier,
  [sym_struct_member_definition] = sym_struct_member_definition,
  [sym_parameter] = sym_parameter,
  [sym_statement] = sym_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_var_statement] = sym_var_statement,
  [sym_compound_statement] = sym_compound_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__variable_declaration] = sym__variable_declaration,
  [sym_type_specifier] = sym_type_specifier,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_return_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_var_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_members = 2,
  field_name = 3,
  field_parameters = 4,
  field_return_type = 5,
  field_type = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_members] = "members",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [4] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [7] =
    {field_name, 1},
  [8] =
    {field_name, 0},
    {field_value, 2},
  [10] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [14] =
    {field_members, 3},
    {field_name, 1},
  [16] =
    {field_name, 0},
    {field_type, 2},
    {field_value, 4},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 2,
        '#', 20,
        '(', 10,
        ')', 12,
        ',', 11,
        '-', 3,
        ':', 14,
        ';', 15,
        '=', 17,
      );
      if (lookahead == '\\') SKIP(6);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'u') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'u') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string_literal);
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
      if (lookahead == 'T') ADVANCE(1);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_function_definition] = STATE(3),
    [sym_struct_definition] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_let_statement] = STATE(9),
    [sym_var_statement] = STATE(9),
    [sym_compound_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym_expression] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number_literal] = ACTIONS(23),
    [sym_string_literal] = ACTIONS(23),
  },
  [2] = {
    [sym_function_definition] = STATE(2),
    [sym_struct_definition] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_let_statement] = STATE(9),
    [sym_var_statement] = STATE(9),
    [sym_compound_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym_expression] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_fn] = ACTIONS(27),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(36),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_return] = ACTIONS(42),
    [anon_sym_for] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [sym_number_literal] = ACTIONS(51),
    [sym_string_literal] = ACTIONS(51),
  },
  [3] = {
    [sym_function_definition] = STATE(2),
    [sym_struct_definition] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_let_statement] = STATE(9),
    [sym_var_statement] = STATE(9),
    [sym_compound_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym_expression] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_number_literal] = ACTIONS(23),
    [sym_string_literal] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(6), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(9), 7,
      sym_let_statement,
      sym_var_statement,
      sym_compound_statement,
      sym_return_statement,
      sym_for_statement,
      sym_if_statement,
      sym_expression_statement,
  [45] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_var,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(9), 7,
      sym_let_statement,
      sym_var_statement,
      sym_compound_statement,
      sym_return_statement,
      sym_for_statement,
      sym_if_statement,
      sym_expression_statement,
  [90] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_let,
    ACTIONS(68), 1,
      anon_sym_var,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_for,
    ACTIONS(77), 1,
      anon_sym_if,
    STATE(58), 1,
      sym_expression,
    ACTIONS(80), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(6), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(9), 7,
      sym_let_statement,
      sym_var_statement,
      sym_compound_statement,
      sym_return_statement,
      sym_for_statement,
      sym_if_statement,
      sym_expression_statement,
  [135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 11,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
      sym_number_literal,
      sym_string_literal,
  [383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_struct_member_definition,
      aux_sym_struct_definition_repeat1,
  [397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_struct_member_definition,
      aux_sym_struct_definition_repeat1,
  [411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_string_literal,
  [425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_struct_member_definition,
      aux_sym_struct_definition_repeat1,
  [439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      sym_compound_statement,
    STATE(44), 1,
      sym_function_return_type_specifier,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_string_literal,
  [475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      anon_sym_TODO,
    STATE(31), 1,
      sym_parameter,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_string_literal,
  [538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_COLON_EQ,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_TODO,
    STATE(50), 1,
      sym_type_specifier,
  [577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(61), 1,
      sym__variable_declaration,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_TODO,
    STATE(64), 1,
      sym_type_specifier,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_TODO,
    STATE(55), 1,
      sym_type_specifier,
  [641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_compound_statement,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(62), 1,
      sym__variable_declaration,
  [661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_TODO,
    STATE(34), 1,
      sym_parameter,
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
  [686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_TODO,
  [693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_EQ,
  [700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SEMI,
  [707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_TODO,
  [721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
  [735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SEMI,
  [742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_SEMI,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SEMI,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SEMI,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 225,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 315,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 383,
  [SMALL_STATE(22)] = 397,
  [SMALL_STATE(23)] = 411,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 439,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 464,
  [SMALL_STATE(28)] = 475,
  [SMALL_STATE(29)] = 488,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 514,
  [SMALL_STATE(32)] = 527,
  [SMALL_STATE(33)] = 538,
  [SMALL_STATE(34)] = 551,
  [SMALL_STATE(35)] = 559,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 587,
  [SMALL_STATE(39)] = 597,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 615,
  [SMALL_STATE(42)] = 623,
  [SMALL_STATE(43)] = 631,
  [SMALL_STATE(44)] = 641,
  [SMALL_STATE(45)] = 651,
  [SMALL_STATE(46)] = 661,
  [SMALL_STATE(47)] = 669,
  [SMALL_STATE(48)] = 679,
  [SMALL_STATE(49)] = 686,
  [SMALL_STATE(50)] = 693,
  [SMALL_STATE(51)] = 700,
  [SMALL_STATE(52)] = 707,
  [SMALL_STATE(53)] = 714,
  [SMALL_STATE(54)] = 721,
  [SMALL_STATE(55)] = 728,
  [SMALL_STATE(56)] = 735,
  [SMALL_STATE(57)] = 742,
  [SMALL_STATE(58)] = 749,
  [SMALL_STATE(59)] = 756,
  [SMALL_STATE(60)] = 763,
  [SMALL_STATE(61)] = 770,
  [SMALL_STATE(62)] = 777,
  [SMALL_STATE(63)] = 784,
  [SMALL_STATE(64)] = 791,
  [SMALL_STATE(65)] = 798,
  [SMALL_STATE(66)] = 805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_statement, 3, 0, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3, 0, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, 0, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, 0, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration, 1, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_definition, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration, 3, 0, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type_specifier, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration, 5, 0, 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_anzu(void) {
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
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
