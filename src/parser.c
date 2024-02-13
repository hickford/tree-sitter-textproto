#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_0 = 2,
  aux_sym__dec_lit_token1 = 3,
  sym__oct_int = 4,
  sym__hex_int = 5,
  sym__letter = 6,
  sym__dec = 7,
  sym__hex = 8,
  sym__ident = 9,
  sym__single_string = 10,
  sym__double_string = 11,
  anon_sym_DOT = 12,
  aux_sym__float_token1 = 13,
  aux_sym__float_token2 = 14,
  sym__exp = 15,
  anon_sym_COLON = 16,
  anon_sym_SEMI = 17,
  anon_sym_COMMA = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_LT = 23,
  anon_sym_GT = 24,
  anon_sym_SLASH = 25,
  anon_sym_DASH = 26,
  sym_source_file = 27,
  sym__dec_lit = 28,
  sym__dec_int = 29,
  sym__string = 30,
  sym_float_lit = 31,
  sym__float = 32,
  sym_identifier = 33,
  sym_scalar_field = 34,
  sym_scalar_list = 35,
  sym__field = 36,
  sym_message_field = 37,
  sym_message_list = 38,
  sym_message_value = 39,
  sym_field_name = 40,
  sym_extension_name = 41,
  sym_any_name = 42,
  sym_type_name = 43,
  sym_domain = 44,
  sym_scalar_value = 45,
  sym_string = 46,
  sym_float = 47,
  sym_signed_identifier = 48,
  sym_dec_signed_integer = 49,
  sym_oct_signed_integer = 50,
  sym_hex_signed_integer = 51,
  sym_dec_unsigned_integer = 52,
  sym_oct_unsigned_integer = 53,
  sym_hex_unsigned_integer = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_float_lit_repeat1 = 56,
  aux_sym_scalar_list_repeat1 = 57,
  aux_sym_message_list_repeat1 = 58,
  aux_sym_type_name_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_0] = "0",
  [aux_sym__dec_lit_token1] = "_dec_lit_token1",
  [sym__oct_int] = "_oct_int",
  [sym__hex_int] = "_hex_int",
  [sym__letter] = "_letter",
  [sym__dec] = "_dec",
  [sym__hex] = "_hex",
  [sym__ident] = "_ident",
  [sym__single_string] = "_single_string",
  [sym__double_string] = "_double_string",
  [anon_sym_DOT] = ".",
  [aux_sym__float_token1] = "_float_token1",
  [aux_sym__float_token2] = "_float_token2",
  [sym__exp] = "_exp",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [sym_source_file] = "source_file",
  [sym__dec_lit] = "_dec_lit",
  [sym__dec_int] = "_dec_int",
  [sym__string] = "_string",
  [sym_float_lit] = "float_lit",
  [sym__float] = "_float",
  [sym_identifier] = "identifier",
  [sym_scalar_field] = "scalar_field",
  [sym_scalar_list] = "scalar_list",
  [sym__field] = "_field",
  [sym_message_field] = "message_field",
  [sym_message_list] = "message_list",
  [sym_message_value] = "message_value",
  [sym_field_name] = "field_name",
  [sym_extension_name] = "extension_name",
  [sym_any_name] = "any_name",
  [sym_type_name] = "type_name",
  [sym_domain] = "domain",
  [sym_scalar_value] = "scalar_value",
  [sym_string] = "string",
  [sym_float] = "float",
  [sym_signed_identifier] = "signed_identifier",
  [sym_dec_signed_integer] = "dec_signed_integer",
  [sym_oct_signed_integer] = "oct_signed_integer",
  [sym_hex_signed_integer] = "hex_signed_integer",
  [sym_dec_unsigned_integer] = "dec_unsigned_integer",
  [sym_oct_unsigned_integer] = "oct_unsigned_integer",
  [sym_hex_unsigned_integer] = "hex_unsigned_integer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_float_lit_repeat1] = "float_lit_repeat1",
  [aux_sym_scalar_list_repeat1] = "scalar_list_repeat1",
  [aux_sym_message_list_repeat1] = "message_list_repeat1",
  [aux_sym_type_name_repeat1] = "type_name_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_0] = anon_sym_0,
  [aux_sym__dec_lit_token1] = aux_sym__dec_lit_token1,
  [sym__oct_int] = sym__oct_int,
  [sym__hex_int] = sym__hex_int,
  [sym__letter] = sym__letter,
  [sym__dec] = sym__dec,
  [sym__hex] = sym__hex,
  [sym__ident] = sym__ident,
  [sym__single_string] = sym__single_string,
  [sym__double_string] = sym__double_string,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__float_token1] = aux_sym__float_token1,
  [aux_sym__float_token2] = aux_sym__float_token2,
  [sym__exp] = sym__exp,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_source_file] = sym_source_file,
  [sym__dec_lit] = sym__dec_lit,
  [sym__dec_int] = sym__dec_int,
  [sym__string] = sym__string,
  [sym_float_lit] = sym_float_lit,
  [sym__float] = sym__float,
  [sym_identifier] = sym_identifier,
  [sym_scalar_field] = sym_scalar_field,
  [sym_scalar_list] = sym_scalar_list,
  [sym__field] = sym__field,
  [sym_message_field] = sym_message_field,
  [sym_message_list] = sym_message_list,
  [sym_message_value] = sym_message_value,
  [sym_field_name] = sym_field_name,
  [sym_extension_name] = sym_extension_name,
  [sym_any_name] = sym_any_name,
  [sym_type_name] = sym_type_name,
  [sym_domain] = sym_domain,
  [sym_scalar_value] = sym_scalar_value,
  [sym_string] = sym_string,
  [sym_float] = sym_float,
  [sym_signed_identifier] = sym_signed_identifier,
  [sym_dec_signed_integer] = sym_dec_signed_integer,
  [sym_oct_signed_integer] = sym_oct_signed_integer,
  [sym_hex_signed_integer] = sym_hex_signed_integer,
  [sym_dec_unsigned_integer] = sym_dec_unsigned_integer,
  [sym_oct_unsigned_integer] = sym_oct_unsigned_integer,
  [sym_hex_unsigned_integer] = sym_hex_unsigned_integer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_float_lit_repeat1] = aux_sym_float_lit_repeat1,
  [aux_sym_scalar_list_repeat1] = aux_sym_scalar_list_repeat1,
  [aux_sym_message_list_repeat1] = aux_sym_message_list_repeat1,
  [aux_sym_type_name_repeat1] = aux_sym_type_name_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__dec_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__oct_int] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_int] = {
    .visible = false,
    .named = true,
  },
  [sym__letter] = {
    .visible = false,
    .named = true,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym__single_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__dec_lit] = {
    .visible = false,
    .named = true,
  },
  [sym__dec_int] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_field] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_list] = {
    .visible = true,
    .named = true,
  },
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym_message_field] = {
    .visible = true,
    .named = true,
  },
  [sym_message_list] = {
    .visible = true,
    .named = true,
  },
  [sym_message_value] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_extension_name] = {
    .visible = true,
    .named = true,
  },
  [sym_any_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_signed_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_oct_signed_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_signed_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_unsigned_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_oct_unsigned_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_unsigned_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [12] = 8,
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
  [54] = 26,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == ']') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__dec_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__oct_int);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__hex_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__dec);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__single_string);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__double_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__float_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__float_token2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__exp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym__dec_lit_token1] = ACTIONS(1),
    [sym__hex_int] = ACTIONS(1),
    [sym__letter] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym__single_string] = ACTIONS(1),
    [sym__double_string] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__float_token2] = ACTIONS(1),
    [sym__exp] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym_scalar_field] = STATE(11),
    [sym__field] = STATE(11),
    [sym_message_field] = STATE(11),
    [sym_field_name] = STATE(39),
    [sym_extension_name] = STATE(48),
    [sym_any_name] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__ident] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [2] = {
    [sym__dec_lit] = STATE(26),
    [sym__dec_int] = STATE(27),
    [sym__string] = STATE(6),
    [sym_float_lit] = STATE(74),
    [sym__float] = STATE(29),
    [sym_identifier] = STATE(28),
    [sym_scalar_list] = STATE(31),
    [sym_message_list] = STATE(32),
    [sym_message_value] = STATE(32),
    [sym_scalar_value] = STATE(31),
    [sym_string] = STATE(28),
    [sym_float] = STATE(28),
    [sym_signed_identifier] = STATE(28),
    [sym_dec_signed_integer] = STATE(28),
    [sym_oct_signed_integer] = STATE(28),
    [sym_hex_signed_integer] = STATE(28),
    [sym_dec_unsigned_integer] = STATE(28),
    [sym_oct_unsigned_integer] = STATE(28),
    [sym_hex_unsigned_integer] = STATE(28),
    [aux_sym_string_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0] = ACTIONS(11),
    [aux_sym__dec_lit_token1] = ACTIONS(13),
    [sym__oct_int] = ACTIONS(15),
    [sym__hex_int] = ACTIONS(17),
    [sym__ident] = ACTIONS(19),
    [sym__single_string] = ACTIONS(21),
    [sym__double_string] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
  },
  [3] = {
    [sym__dec_lit] = STATE(54),
    [sym__dec_int] = STATE(27),
    [sym__string] = STATE(6),
    [sym_float_lit] = STATE(74),
    [sym__float] = STATE(29),
    [sym_identifier] = STATE(28),
    [sym_message_value] = STATE(59),
    [sym_scalar_value] = STATE(55),
    [sym_string] = STATE(28),
    [sym_float] = STATE(28),
    [sym_signed_identifier] = STATE(28),
    [sym_dec_signed_integer] = STATE(28),
    [sym_oct_signed_integer] = STATE(28),
    [sym_hex_signed_integer] = STATE(28),
    [sym_dec_unsigned_integer] = STATE(28),
    [sym_oct_unsigned_integer] = STATE(28),
    [sym_hex_unsigned_integer] = STATE(28),
    [aux_sym_string_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0] = ACTIONS(33),
    [aux_sym__dec_lit_token1] = ACTIONS(35),
    [sym__oct_int] = ACTIONS(15),
    [sym__hex_int] = ACTIONS(17),
    [sym__ident] = ACTIONS(19),
    [sym__single_string] = ACTIONS(21),
    [sym__double_string] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__oct_int,
    ACTIONS(17), 1,
      sym__hex_int,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(35), 1,
      aux_sym__dec_lit_token1,
    ACTIONS(39), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym__dec_int,
    STATE(29), 1,
      sym__float,
    STATE(54), 1,
      sym__dec_lit,
    STATE(67), 1,
      sym_scalar_value,
    STATE(74), 1,
      sym_float_lit,
    ACTIONS(21), 2,
      sym__single_string,
      sym__double_string,
    STATE(6), 2,
      sym__string,
      aux_sym_string_repeat1,
    STATE(28), 10,
      sym_identifier,
      sym_string,
      sym_float,
      sym_signed_identifier,
      sym_dec_signed_integer,
      sym_oct_signed_integer,
      sym_hex_signed_integer,
      sym_dec_unsigned_integer,
      sym_oct_unsigned_integer,
      sym_hex_unsigned_integer,
  [60] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym__ident,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_field_name,
    STATE(48), 2,
      sym_extension_name,
      sym_any_name,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_GT,
    STATE(5), 4,
      sym_scalar_field,
      sym__field,
      sym_message_field,
      aux_sym_source_file_repeat1,
  [88] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__single_string,
      sym__double_string,
    STATE(7), 2,
      sym__string,
      aux_sym_string_repeat1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym__single_string,
      sym__double_string,
    STATE(7), 2,
      sym__string,
      aux_sym_string_repeat1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [132] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(35), 1,
      aux_sym__dec_lit_token1,
    ACTIONS(58), 1,
      sym__oct_int,
    ACTIONS(60), 1,
      sym__hex_int,
    ACTIONS(62), 1,
      sym__ident,
    STATE(19), 1,
      sym__float,
    STATE(23), 1,
      sym__dec_int,
    STATE(54), 1,
      sym__dec_lit,
    STATE(74), 1,
      sym_float_lit,
  [166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_GT,
    STATE(39), 1,
      sym_field_name,
    STATE(48), 2,
      sym_extension_name,
      sym_any_name,
    STATE(5), 4,
      sym_scalar_field,
      sym__field,
      sym_message_field,
      aux_sym_source_file_repeat1,
  [192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_field_name,
    STATE(48), 2,
      sym_extension_name,
      sym_any_name,
    STATE(5), 4,
      sym_scalar_field,
      sym__field,
      sym_message_field,
      aux_sym_source_file_repeat1,
  [218] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_field_name,
    STATE(48), 2,
      sym_extension_name,
      sym_any_name,
    STATE(5), 4,
      sym_scalar_field,
      sym__field,
      sym_message_field,
      aux_sym_source_file_repeat1,
  [244] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      aux_sym__dec_lit_token1,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(58), 1,
      sym__oct_int,
    ACTIONS(60), 1,
      sym__hex_int,
    ACTIONS(62), 1,
      sym__ident,
    STATE(19), 1,
      sym__float,
    STATE(23), 1,
      sym__dec_int,
    STATE(26), 1,
      sym__dec_lit,
    STATE(74), 1,
      sym_float_lit,
  [278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_field_name,
    STATE(48), 2,
      sym_extension_name,
      sym_any_name,
    STATE(10), 4,
      sym_scalar_field,
      sym__field,
      sym_message_field,
      aux_sym_source_file_repeat1,
  [304] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_GT,
    STATE(39), 1,
      sym_field_name,
    STATE(48), 2,
      sym_extension_name,
      sym_any_name,
    STATE(9), 4,
      sym_scalar_field,
      sym__field,
      sym_message_field,
      aux_sym_source_file_repeat1,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym__float_token2,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [665] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(126), 1,
      anon_sym_COLON,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    STATE(36), 2,
      sym_message_list,
      sym_message_value,
  [685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_message_value,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [744] = 5,
    ACTIONS(138), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__dec,
    ACTIONS(142), 1,
      aux_sym__float_token1,
    ACTIONS(144), 1,
      sym__exp,
    STATE(47), 1,
      aux_sym_float_lit_repeat1,
  [760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(150), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_type_name_repeat1,
  [776] = 5,
    ACTIONS(138), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__dec,
    ACTIONS(155), 1,
      aux_sym__float_token1,
    ACTIONS(157), 1,
      sym__exp,
    STATE(47), 1,
      aux_sym_float_lit_repeat1,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_type_name_repeat1,
    ACTIONS(166), 2,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_type_name_repeat1,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__ident,
    STATE(70), 1,
      sym_domain,
    STATE(72), 1,
      sym_type_name,
  [855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_type_name_repeat1,
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym__float_token2,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_scalar_list_repeat1,
  [892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_message_list_repeat1,
  [905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_scalar_list_repeat1,
  [918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_type_name_repeat1,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_message_list_repeat1,
  [944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_scalar_list_repeat1,
  [957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(65), 1,
      sym_message_value,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_message_list_repeat1,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__ident,
    STATE(73), 1,
      sym_type_name,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__dec,
    STATE(45), 1,
      aux_sym_float_lit_repeat1,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__ident,
  [1035] = 2,
    ACTIONS(138), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__float_token1,
  [1042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
  [1070] = 2,
    ACTIONS(138), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym__float_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 304,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 358,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 386,
  [SMALL_STATE(20)] = 400,
  [SMALL_STATE(21)] = 414,
  [SMALL_STATE(22)] = 428,
  [SMALL_STATE(23)] = 442,
  [SMALL_STATE(24)] = 456,
  [SMALL_STATE(25)] = 470,
  [SMALL_STATE(26)] = 484,
  [SMALL_STATE(27)] = 500,
  [SMALL_STATE(28)] = 514,
  [SMALL_STATE(29)] = 528,
  [SMALL_STATE(30)] = 542,
  [SMALL_STATE(31)] = 555,
  [SMALL_STATE(32)] = 570,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 598,
  [SMALL_STATE(35)] = 611,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 639,
  [SMALL_STATE(38)] = 652,
  [SMALL_STATE(39)] = 665,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 696,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 718,
  [SMALL_STATE(44)] = 734,
  [SMALL_STATE(45)] = 744,
  [SMALL_STATE(46)] = 760,
  [SMALL_STATE(47)] = 776,
  [SMALL_STATE(48)] = 792,
  [SMALL_STATE(49)] = 802,
  [SMALL_STATE(50)] = 812,
  [SMALL_STATE(51)] = 826,
  [SMALL_STATE(52)] = 842,
  [SMALL_STATE(53)] = 855,
  [SMALL_STATE(54)] = 868,
  [SMALL_STATE(55)] = 879,
  [SMALL_STATE(56)] = 892,
  [SMALL_STATE(57)] = 905,
  [SMALL_STATE(58)] = 918,
  [SMALL_STATE(59)] = 931,
  [SMALL_STATE(60)] = 944,
  [SMALL_STATE(61)] = 957,
  [SMALL_STATE(62)] = 970,
  [SMALL_STATE(63)] = 979,
  [SMALL_STATE(64)] = 992,
  [SMALL_STATE(65)] = 1002,
  [SMALL_STATE(66)] = 1010,
  [SMALL_STATE(67)] = 1020,
  [SMALL_STATE(68)] = 1028,
  [SMALL_STATE(69)] = 1035,
  [SMALL_STATE(70)] = 1042,
  [SMALL_STATE(71)] = 1049,
  [SMALL_STATE(72)] = 1056,
  [SMALL_STATE(73)] = 1063,
  [SMALL_STATE(74)] = 1070,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oct_unsigned_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_identifier, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oct_signed_integer, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_unsigned_integer, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_signed_integer, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_signed_integer, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dec_int, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_unsigned_integer, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_value, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_list, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_field, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_list, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_list, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_field, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_name, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_lit_repeat1, 2), SHIFT_REPEAT(47),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_lit_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_lit_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_name, 5),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2), SHIFT_REPEAT(68),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_list_repeat1, 2), SHIFT_REPEAT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_list_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_list_repeat1, 2), SHIFT_REPEAT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_list_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_textproto(void) {
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
