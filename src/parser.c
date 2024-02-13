#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_0 = 2,
  aux_sym__dec_lit_token1 = 3,
  sym__oct_int = 4,
  sym__hex_int = 5,
  sym__letter = 6,
  sym__dec = 7,
  sym__hex = 8,
  anon_sym_ = 9,
  anon_sym_2 = 10,
  sym__ident = 11,
  sym__single_string = 12,
  sym__double_string = 13,
  anon_sym_DOT = 14,
  aux_sym__float_token1 = 15,
  aux_sym__float_token2 = 16,
  sym__exp = 17,
  anon_sym_COLON = 18,
  anon_sym_SEMI = 19,
  anon_sym_COMMA = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_SLASH = 27,
  anon_sym_DASH = 28,
  sym_source_file = 29,
  sym__dec_lit = 30,
  sym__dec_int = 31,
  sym__string = 32,
  sym_float_lit = 33,
  sym__float = 34,
  sym_identifier = 35,
  sym_scalar_field = 36,
  sym_scalar_list = 37,
  sym__field = 38,
  sym_message_field = 39,
  sym_message_list = 40,
  sym_message_value = 41,
  sym_field_name = 42,
  sym_extension_name = 43,
  sym_any_name = 44,
  sym_type_name = 45,
  sym_domain = 46,
  sym_scalar_value = 47,
  sym_string = 48,
  sym_float = 49,
  sym_signed_identifier = 50,
  sym_dec_signed_integer = 51,
  sym_oct_signed_integer = 52,
  sym_hex_signed_integer = 53,
  sym_dec_unsigned_integer = 54,
  sym_oct_unsigned_integer = 55,
  sym_hex_unsigned_integer = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_float_lit_repeat1 = 58,
  aux_sym_scalar_list_repeat1 = 59,
  aux_sym_message_list_repeat1 = 60,
  aux_sym_type_name_repeat1 = 61,
  aux_sym_string_repeat1 = 62,
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
  [anon_sym_] = "",
  [anon_sym_2] = "\f",
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
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == 11) ADVANCE(21);
      if (lookahead == '\f') ADVANCE(22);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
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
      if (lookahead == '"') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(29);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == 11) ADVANCE(21);
      if (lookahead == '\f') ADVANCE(22);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
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
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__dec);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__single_string);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__double_string);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__float_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__float_token2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__exp);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 42:
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
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 28},
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
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
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
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_0,
    ACTIONS(35), 1,
      aux_sym__dec_lit_token1,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym__dec_int,
    STATE(29), 1,
      sym__float,
    STATE(55), 1,
      sym__dec_lit,
    STATE(59), 1,
      sym_scalar_value,
    STATE(62), 1,
      sym_message_value,
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
  [72] = 16,
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
    STATE(55), 1,
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
  [132] = 7,
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
  [160] = 4,
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
  [182] = 4,
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
  [204] = 11,
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
    STATE(55), 1,
      sym__dec_lit,
    STATE(74), 1,
      sym_float_lit,
  [238] = 7,
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
  [264] = 7,
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
  [290] = 7,
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
  [316] = 11,
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
  [350] = 7,
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
  [376] = 7,
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
  [402] = 2,
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
  [416] = 2,
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
  [430] = 2,
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
  [444] = 2,
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
  [458] = 2,
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
  [472] = 2,
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
  [486] = 2,
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
  [500] = 2,
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
  [514] = 2,
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
  [528] = 2,
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
  [542] = 2,
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
  [556] = 3,
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
  [572] = 2,
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
  [586] = 2,
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
  [600] = 2,
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
  [614] = 2,
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
  [627] = 3,
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
  [642] = 3,
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
  [657] = 2,
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
  [670] = 2,
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
  [683] = 2,
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
  [696] = 3,
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
  [711] = 2,
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
  [724] = 2,
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
  [737] = 6,
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
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_message_value,
  [806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_type_name_repeat1,
    ACTIONS(139), 2,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [820] = 5,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym__dec,
    ACTIONS(145), 1,
      aux_sym__float_token1,
    ACTIONS(147), 1,
      sym__exp,
    STATE(49), 1,
      aux_sym_float_lit_repeat1,
  [836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      aux_sym_type_name_repeat1,
  [852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      aux_sym_type_name_repeat1,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [878] = 5,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__dec,
    ACTIONS(164), 1,
      aux_sym__float_token1,
    ACTIONS(166), 1,
      sym__exp,
    STATE(49), 1,
      aux_sym_float_lit_repeat1,
  [894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
  [914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__ident,
    STATE(70), 1,
      sym_domain,
    STATE(72), 1,
      sym_type_name,
  [927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_type_name_repeat1,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_SLASH,
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym__float_token2,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_message_list_repeat1,
  [973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_scalar_list_repeat1,
  [986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_type_name_repeat1,
  [999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_scalar_list_repeat1,
  [1012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(66), 1,
      sym_message_value,
  [1025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_scalar_list_repeat1,
  [1038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_message_list_repeat1,
  [1051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_message_list_repeat1,
  [1064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__dec,
    STATE(45), 1,
      aux_sym_float_lit_repeat1,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__ident,
    STATE(73), 1,
      sym_type_name,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__ident,
  [1107] = 2,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__float_token1,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
  [1121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
  [1142] = 2,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym__float_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 350,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 402,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 444,
  [SMALL_STATE(19)] = 458,
  [SMALL_STATE(20)] = 472,
  [SMALL_STATE(21)] = 486,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 514,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 586,
  [SMALL_STATE(29)] = 600,
  [SMALL_STATE(30)] = 614,
  [SMALL_STATE(31)] = 627,
  [SMALL_STATE(32)] = 642,
  [SMALL_STATE(33)] = 657,
  [SMALL_STATE(34)] = 670,
  [SMALL_STATE(35)] = 683,
  [SMALL_STATE(36)] = 696,
  [SMALL_STATE(37)] = 711,
  [SMALL_STATE(38)] = 724,
  [SMALL_STATE(39)] = 737,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 768,
  [SMALL_STATE(42)] = 779,
  [SMALL_STATE(43)] = 790,
  [SMALL_STATE(44)] = 806,
  [SMALL_STATE(45)] = 820,
  [SMALL_STATE(46)] = 836,
  [SMALL_STATE(47)] = 852,
  [SMALL_STATE(48)] = 868,
  [SMALL_STATE(49)] = 878,
  [SMALL_STATE(50)] = 894,
  [SMALL_STATE(51)] = 904,
  [SMALL_STATE(52)] = 914,
  [SMALL_STATE(53)] = 927,
  [SMALL_STATE(54)] = 940,
  [SMALL_STATE(55)] = 949,
  [SMALL_STATE(56)] = 960,
  [SMALL_STATE(57)] = 973,
  [SMALL_STATE(58)] = 986,
  [SMALL_STATE(59)] = 999,
  [SMALL_STATE(60)] = 1012,
  [SMALL_STATE(61)] = 1025,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1051,
  [SMALL_STATE(64)] = 1064,
  [SMALL_STATE(65)] = 1074,
  [SMALL_STATE(66)] = 1084,
  [SMALL_STATE(67)] = 1092,
  [SMALL_STATE(68)] = 1100,
  [SMALL_STATE(69)] = 1107,
  [SMALL_STATE(70)] = 1114,
  [SMALL_STATE(71)] = 1121,
  [SMALL_STATE(72)] = 1128,
  [SMALL_STATE(73)] = 1135,
  [SMALL_STATE(74)] = 1142,
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
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2), SHIFT_REPEAT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_lit_repeat1, 2), SHIFT_REPEAT(49),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_lit_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_lit_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_name, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_name, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_list_repeat1, 2), SHIFT_REPEAT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_list_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_list_repeat1, 2), SHIFT_REPEAT(60),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_list_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
