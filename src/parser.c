#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_fn = 1,
  anon_sym_struct = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_COLON = 9,
  anon_sym_SEMI = 10,
  anon_sym_TODO = 11,
  anon_sym_let = 12,
  anon_sym_var = 13,
  anon_sym_return = 14,
  anon_sym_for = 15,
  anon_sym_if = 16,
  sym_identifier = 17,
  sym_source_file = 18,
  sym_function_definition = 19,
  sym_struct_definition = 20,
  sym_parameter_list = 21,
  sym_function_return_type_specifier = 22,
  sym_struct_member_definition = 23,
  sym_parameter = 24,
  sym_statement = 25,
  sym_let_statement = 26,
  sym_var_statement = 27,
  sym_compound_statement = 28,
  sym_return_statement = 29,
  sym_for_statement = 30,
  sym_if_statement = 31,
  sym_expression_statement = 32,
  sym_type_specifier = 33,
  sym_expression = 34,
  aux_sym_struct_definition_repeat1 = 35,
  aux_sym_parameter_list_repeat1 = 36,
  aux_sym_compound_statement_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_identifier] = "identifier",
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
  [sym_type_specifier] = "type_specifier",
  [sym_expression] = "expression",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_identifier] = sym_identifier,
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
  [sym_type_specifier] = sym_type_specifier,
  [sym_expression] = sym_expression,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_identifier] = {
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
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_members] = "members",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
  [3] = {.index = 4, .length = 4},
  [4] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [3] =
    {field_name, 1},
  [4] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [8] =
    {field_members, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '(', 28,
        ')', 30,
        ',', 29,
        '-', 1,
        ':', 32,
        ';', 33,
        'T', 3,
        'f', 10,
        'i', 9,
        'l', 7,
        'r', 8,
        's', 19,
        'v', 5,
        '{', 26,
        '}', 27,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
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
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_function_definition] = STATE(38),
    [sym_struct_definition] = STATE(38),
    [sym_statement] = STATE(38),
    [sym_let_statement] = STATE(10),
    [sym_var_statement] = STATE(10),
    [sym_compound_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym_expression] = STATE(39),
    [anon_sym_fn] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_TODO] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_TODO,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(32), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_if,
    STATE(39), 1,
      sym_expression,
    STATE(2), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(10), 7,
      sym_let_statement,
      sym_var_statement,
      sym_compound_statement,
      sym_return_statement,
      sym_for_statement,
      sym_if_statement,
      sym_expression_statement,
  [41] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_TODO,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_expression,
    STATE(2), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(10), 7,
      sym_let_statement,
      sym_var_statement,
      sym_compound_statement,
      sym_return_statement,
      sym_for_statement,
      sym_if_statement,
      sym_expression_statement,
  [82] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_TODO,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(10), 7,
      sym_let_statement,
      sym_var_statement,
      sym_compound_statement,
      sym_return_statement,
      sym_for_statement,
      sym_if_statement,
      sym_expression_statement,
  [123] = 1,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [135] = 1,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [147] = 1,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [159] = 1,
    ACTIONS(54), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [171] = 1,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [183] = 1,
    ACTIONS(58), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [195] = 1,
    ACTIONS(60), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [207] = 1,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [219] = 1,
    ACTIONS(64), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TODO,
      anon_sym_let,
      anon_sym_var,
      anon_sym_return,
      anon_sym_for,
      anon_sym_if,
  [231] = 3,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(16), 2,
      sym_struct_member_definition,
      aux_sym_struct_definition_repeat1,
  [242] = 3,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_struct_member_definition,
      aux_sym_struct_definition_repeat1,
  [253] = 3,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(16), 2,
      sym_struct_member_definition,
      aux_sym_struct_definition_repeat1,
  [264] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DASH_GT,
    STATE(30), 1,
      sym_function_return_type_specifier,
    STATE(35), 1,
      sym_compound_statement,
  [277] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [287] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
  [297] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
  [307] = 3,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_TODO,
    STATE(18), 1,
      sym_parameter,
  [317] = 2,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameter_list,
  [324] = 1,
    ACTIONS(96), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [329] = 1,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [334] = 1,
    ACTIONS(100), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [339] = 1,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [344] = 2,
    ACTIONS(102), 1,
      anon_sym_TODO,
    STATE(56), 1,
      sym_type_specifier,
  [351] = 1,
    ACTIONS(104), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [356] = 2,
    ACTIONS(92), 1,
      anon_sym_TODO,
    STATE(26), 1,
      sym_parameter,
  [363] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_compound_statement,
  [370] = 2,
    ACTIONS(102), 1,
      anon_sym_TODO,
    STATE(48), 1,
      sym_type_specifier,
  [377] = 1,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [382] = 1,
    ACTIONS(108), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [387] = 1,
    ACTIONS(110), 1,
      anon_sym_TODO,
  [391] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [395] = 1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [399] = 1,
    ACTIONS(116), 1,
      anon_sym_TODO,
  [403] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [407] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [411] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [415] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [419] = 1,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [423] = 1,
    ACTIONS(128), 1,
      anon_sym_TODO,
  [427] = 1,
    ACTIONS(130), 1,
      anon_sym_TODO,
  [431] = 1,
    ACTIONS(132), 1,
      sym_identifier,
  [435] = 1,
    ACTIONS(134), 1,
      anon_sym_SEMI,
  [439] = 1,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
  [443] = 1,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
  [447] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [451] = 1,
    ACTIONS(142), 1,
      anon_sym_TODO,
  [455] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [459] = 1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [463] = 1,
    ACTIONS(148), 1,
      anon_sym_SEMI,
  [467] = 1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
  [471] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [475] = 1,
    ACTIONS(154), 1,
      anon_sym_SEMI,
  [479] = 1,
    ACTIONS(156), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 287,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 307,
  [SMALL_STATE(22)] = 317,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 329,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 351,
  [SMALL_STATE(29)] = 356,
  [SMALL_STATE(30)] = 363,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 377,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 387,
  [SMALL_STATE(35)] = 391,
  [SMALL_STATE(36)] = 395,
  [SMALL_STATE(37)] = 399,
  [SMALL_STATE(38)] = 403,
  [SMALL_STATE(39)] = 407,
  [SMALL_STATE(40)] = 411,
  [SMALL_STATE(41)] = 415,
  [SMALL_STATE(42)] = 419,
  [SMALL_STATE(43)] = 423,
  [SMALL_STATE(44)] = 427,
  [SMALL_STATE(45)] = 431,
  [SMALL_STATE(46)] = 435,
  [SMALL_STATE(47)] = 439,
  [SMALL_STATE(48)] = 443,
  [SMALL_STATE(49)] = 447,
  [SMALL_STATE(50)] = 451,
  [SMALL_STATE(51)] = 455,
  [SMALL_STATE(52)] = 459,
  [SMALL_STATE(53)] = 463,
  [SMALL_STATE(54)] = 467,
  [SMALL_STATE(55)] = 471,
  [SMALL_STATE(56)] = 475,
  [SMALL_STATE(57)] = 479,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_statement, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member_definition, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, 0, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type_specifier, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, 0, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
