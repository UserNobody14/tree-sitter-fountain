#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 362
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LF = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  anon_sym_TILDE = 6,
  anon_sym_EQ_EQ_EQ = 7,
  anon_sym_EQ = 8,
  anon_sym_STAR = 9,
  anon_sym_STAR_STAR = 10,
  anon_sym_STAR_STAR_STAR = 11,
  anon_sym__ = 12,
  anon_sym_BANG = 13,
  aux_sym_SLASH_DOT_PLUS_SLASH = 14,
  anon_sym_AT = 15,
  anon_sym_DOT = 16,
  aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH = 17,
  aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH = 18,
  aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH = 19,
  sym__all_caps = 20,
  sym__scene_loc = 21,
  sym_scene_number = 22,
  anon_sym_POUND = 23,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH = 24,
  anon_sym_POUND_POUND = 25,
  anon_sym_POUND_POUND_POUND = 26,
  anon_sym_POUND_POUND_POUND_POUND = 27,
  anon_sym_POUND_POUND_POUND_POUND_POUND = 28,
  anon_sym_POUND_POUND_POUND_POUND_POUND_POUND = 29,
  anon_sym_COLON = 30,
  anon_sym_ = 31,
  anon_sym_Title = 32,
  anon_sym_Credit = 33,
  anon_sym_Author = 34,
  anon_sym_Source = 35,
  anon_sym_Draftdate = 36,
  anon_sym_Contact = 37,
  anon_sym_Authors = 38,
  anon_sym_2 = 39,
  sym_note = 40,
  sym_boneyard = 41,
  sym_synopsis = 42,
  sym_script = 43,
  sym_dialogue = 44,
  sym_character = 45,
  sym_parenthetical = 46,
  sym_spoken = 47,
  sym_action = 48,
  sym__delimit = 49,
  sym_centered_action = 50,
  sym__text = 51,
  sym_normal_txt = 52,
  sym__emphasis = 53,
  sym_italic_txt = 54,
  sym_bold_txt = 55,
  sym_bold_and_italic_txt = 56,
  sym_underlined_txt = 57,
  sym__forced_action = 58,
  sym__forced_character = 59,
  sym__forced_scene = 60,
  sym__not_special = 61,
  sym__general_text = 62,
  sym__raw_script = 63,
  sym__dialogue_block = 64,
  sym__action_block = 65,
  sym__numbering = 66,
  sym_scene_heading = 67,
  sym_scene = 68,
  sym_sec_heading1 = 69,
  sym_sec_heading2 = 70,
  sym_sec_heading3 = 71,
  sym_sec_heading4 = 72,
  sym_sec_heading5 = 73,
  sym_sec_heading6 = 74,
  sym_section1 = 75,
  sym_section2 = 76,
  sym_section3 = 77,
  sym_section4 = 78,
  sym_section5 = 79,
  sym_section6 = 80,
  sym_title_page = 81,
  sym_k_v_pair = 82,
  sym__value_group = 83,
  sym_value = 84,
  sym_key = 85,
  sym__indent = 86,
  aux_sym_script_repeat1 = 87,
  aux_sym_script_repeat2 = 88,
  aux_sym_script_repeat3 = 89,
  aux_sym_script_repeat4 = 90,
  aux_sym_script_repeat5 = 91,
  aux_sym_script_repeat6 = 92,
  aux_sym_script_repeat7 = 93,
  aux_sym_script_repeat8 = 94,
  aux_sym_script_repeat9 = 95,
  aux_sym_dialogue_repeat1 = 96,
  aux_sym__text_repeat1 = 97,
  aux_sym_title_page_repeat1 = 98,
  aux_sym__value_group_repeat1 = 99,
  aux_sym__indent_repeat1 = 100,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR_STAR_STAR] = "***",
  [anon_sym__] = "_",
  [anon_sym_BANG] = "!",
  [aux_sym_SLASH_DOT_PLUS_SLASH] = "/.+/",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH] = "/[^#\\n]+/",
  [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = "/[^!@.>(#=_*~\\n]/",
  [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = "/((\\\\(\\*|_))|[A-Za-z0-9.,'\\-!? ])+/",
  [sym__all_caps] = "_all_caps",
  [sym__scene_loc] = "_scene_loc",
  [sym_scene_number] = "scene_number",
  [anon_sym_POUND] = "#",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = "/[A-Za-z0-9.,-_ ]+/",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_POUND_POUND] = "###",
  [anon_sym_POUND_POUND_POUND_POUND] = "####",
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = "#####",
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = "######",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_Title] = "Title",
  [anon_sym_Credit] = "Credit",
  [anon_sym_Author] = "Author",
  [anon_sym_Source] = "Source",
  [anon_sym_Draftdate] = "Draft date",
  [anon_sym_Contact] = "Contact",
  [anon_sym_Authors] = "Authors",
  [anon_sym_2] = "   ",
  [sym_note] = "note",
  [sym_boneyard] = "boneyard",
  [sym_synopsis] = "synopsis",
  [sym_script] = "script",
  [sym_dialogue] = "dialogue",
  [sym_character] = "character",
  [sym_parenthetical] = "parenthetical",
  [sym_spoken] = "spoken",
  [sym_action] = "action",
  [sym__delimit] = "_delimit",
  [sym_centered_action] = "centered_action",
  [sym__text] = "_text",
  [sym_normal_txt] = "normal_txt",
  [sym__emphasis] = "_emphasis",
  [sym_italic_txt] = "italic_txt",
  [sym_bold_txt] = "bold_txt",
  [sym_bold_and_italic_txt] = "bold_and_italic_txt",
  [sym_underlined_txt] = "underlined_txt",
  [sym__forced_action] = "_forced_action",
  [sym__forced_character] = "_forced_character",
  [sym__forced_scene] = "_forced_scene",
  [sym__not_special] = "normal_txt",
  [sym__general_text] = "_general_text",
  [sym__raw_script] = "_raw_script",
  [sym__dialogue_block] = "_dialogue_block",
  [sym__action_block] = "_action_block",
  [sym__numbering] = "_numbering",
  [sym_scene_heading] = "scene_heading",
  [sym_scene] = "scene",
  [sym_sec_heading1] = "sec_heading1",
  [sym_sec_heading2] = "sec_heading2",
  [sym_sec_heading3] = "sec_heading3",
  [sym_sec_heading4] = "sec_heading4",
  [sym_sec_heading5] = "sec_heading5",
  [sym_sec_heading6] = "sec_heading6",
  [sym_section1] = "section1",
  [sym_section2] = "section2",
  [sym_section3] = "section3",
  [sym_section4] = "section4",
  [sym_section5] = "section5",
  [sym_section6] = "section6",
  [sym_title_page] = "title_page",
  [sym_k_v_pair] = "k_v_pair",
  [sym__value_group] = "_value_group",
  [sym_value] = "value",
  [sym_key] = "key",
  [sym__indent] = "_indent",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_script_repeat2] = "script_repeat2",
  [aux_sym_script_repeat3] = "script_repeat3",
  [aux_sym_script_repeat4] = "script_repeat4",
  [aux_sym_script_repeat5] = "script_repeat5",
  [aux_sym_script_repeat6] = "script_repeat6",
  [aux_sym_script_repeat7] = "script_repeat7",
  [aux_sym_script_repeat8] = "script_repeat8",
  [aux_sym_script_repeat9] = "script_repeat9",
  [aux_sym_dialogue_repeat1] = "dialogue_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym__value_group_repeat1] = "_value_group_repeat1",
  [aux_sym__indent_repeat1] = "_indent_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__all_caps] = {
    .visible = false,
    .named = true,
  },
  [sym__scene_loc] = {
    .visible = false,
    .named = true,
  },
  [sym_scene_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Credit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Draftdate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Contact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Authors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_boneyard] = {
    .visible = true,
    .named = true,
  },
  [sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_spoken] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__delimit] = {
    .visible = false,
    .named = true,
  },
  [sym_centered_action] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_txt] = {
    .visible = true,
    .named = true,
  },
  [sym__emphasis] = {
    .visible = false,
    .named = true,
  },
  [sym_italic_txt] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_txt] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_and_italic_txt] = {
    .visible = true,
    .named = true,
  },
  [sym_underlined_txt] = {
    .visible = true,
    .named = true,
  },
  [sym__forced_action] = {
    .visible = false,
    .named = true,
  },
  [sym__forced_character] = {
    .visible = false,
    .named = true,
  },
  [sym__forced_scene] = {
    .visible = false,
    .named = true,
  },
  [sym__not_special] = {
    .visible = true,
    .named = true,
  },
  [sym__general_text] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_script] = {
    .visible = false,
    .named = true,
  },
  [sym__dialogue_block] = {
    .visible = false,
    .named = true,
  },
  [sym__action_block] = {
    .visible = false,
    .named = true,
  },
  [sym__numbering] = {
    .visible = false,
    .named = true,
  },
  [sym_scene_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_scene] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_heading1] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_heading2] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_heading3] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_heading4] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_heading5] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_heading6] = {
    .visible = true,
    .named = true,
  },
  [sym_section1] = {
    .visible = true,
    .named = true,
  },
  [sym_section2] = {
    .visible = true,
    .named = true,
  },
  [sym_section3] = {
    .visible = true,
    .named = true,
  },
  [sym_section4] = {
    .visible = true,
    .named = true,
  },
  [sym_section5] = {
    .visible = true,
    .named = true,
  },
  [sym_section6] = {
    .visible = true,
    .named = true,
  },
  [sym_title_page] = {
    .visible = true,
    .named = true,
  },
  [sym_k_v_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__value_group] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_page_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indent_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '!')
        ADVANCE(11);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '@')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'C')
        ADVANCE(40);
      if (lookahead == 'D')
        ADVANCE(52);
      if (lookahead == 'E')
        ADVANCE(62);
      if (lookahead == 'I')
        ADVANCE(67);
      if (lookahead == 'S')
        ADVANCE(77);
      if (lookahead == 'T')
        ADVANCE(83);
      if (lookahead == '[')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(94);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      ADVANCE(96);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '*')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_boneyard);
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_synopsis);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__all_caps);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__all_caps);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'u')
        ADVANCE(34);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 't')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'h')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'o')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'r')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Author);
      if (lookahead == 's')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Authors);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'o')
        ADVANCE(41);
      if (lookahead == 'r')
        ADVANCE(47);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 't')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'c')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Contact);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'd')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'i')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Credit);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(53);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'f')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == ' ')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'd')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 't')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Draftdate);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(63);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__all_caps);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'T')
        ADVANCE(64);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__all_caps);
      if (lookahead == ' ')
        ADVANCE(65);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(66);
      if (('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__scene_loc);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__scene_loc);
      if (lookahead == ' ')
        ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead == 'N')
        ADVANCE(71);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('-' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'E')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == ' ')
        ADVANCE(65);
      if (lookahead == '.')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__scene_loc);
      if (lookahead == ' ')
        ADVANCE(65);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__all_caps);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'T')
        ADVANCE(72);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__all_caps);
      if (lookahead == ' ')
        ADVANCE(65);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (('\'' <= lookahead && lookahead <= ')') ||
          ('-' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__scene_loc);
      if (lookahead == ' ')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'E')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'X')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'T')
        ADVANCE(69);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'o')
        ADVANCE(78);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 'u')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'r')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'c')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == 'i')
        ADVANCE(84);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'l')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'e')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '[')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == ']')
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '[')
        ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == ']')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(11);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '@')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'C')
        ADVANCE(40);
      if (lookahead == 'D')
        ADVANCE(52);
      if (lookahead == 'E')
        ADVANCE(62);
      if (lookahead == 'I')
        ADVANCE(67);
      if (lookahead == 'S')
        ADVANCE(77);
      if (lookahead == 'T')
        ADVANCE(83);
      if (lookahead == '[')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(93);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != '(' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '~')
        ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '.' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '~')
        ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 103:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(104);
      if (lookahead == '\\')
        ADVANCE(105);
      if (lookahead == '_')
        ADVANCE(102);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == '[')
        ADVANCE(89);
      END_STATE();
    case 105:
      if (lookahead == '*')
        ADVANCE(106);
      if (lookahead == '_')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH);
      if (lookahead == '\\')
        ADVANCE(105);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(8);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '[')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(90);
      if (lookahead == '[' ||
          lookahead == ']')
        ADVANCE(111);
      if (lookahead != 0)
        ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(90);
      if (lookahead == '[')
        ADVANCE(111);
      if (lookahead == ']')
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == ']')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '[')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#')
        ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\n' ||
          lookahead == '#')
        ADVANCE(90);
      if (lookahead == '[' ||
          lookahead == ']')
        ADVANCE(117);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#')
        ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '[')
        ADVANCE(117);
      if (lookahead == ']')
        ADVANCE(119);
      if (lookahead == '\n' ||
          lookahead == '#')
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == ']')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#')
        ADVANCE(117);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(104);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(23);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(122);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '[')
        ADVANCE(123);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '[' ||
          lookahead == ']')
        ADVANCE(124);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(90);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '[')
        ADVANCE(124);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(90);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == ']')
        ADVANCE(124);
      if (lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 129:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '!')
        ADVANCE(11);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '@')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(62);
      if (lookahead == 'I')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != '(' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '~')
        ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == 'E')
        ADVANCE(131);
      if (lookahead == 'I')
        ADVANCE(132);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'S')
        ADVANCE(76);
      if (lookahead == 'X')
        ADVANCE(76);
      END_STATE();
    case 132:
      if (lookahead == '/')
        ADVANCE(68);
      if (lookahead == 'N')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'T')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == ' ')
        ADVANCE(65);
      if (lookahead == '.')
        ADVANCE(135);
      if (lookahead == '/')
        ADVANCE(74);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__scene_loc);
      if (lookahead == ' ')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(74);
      END_STATE();
    case 136:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 137:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 143:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(144);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      END_STATE();
    case 148:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(149);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 152:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(153);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 155:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '#')
        ADVANCE(156);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 157:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '*')
        ADVANCE(99);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(104);
      if (lookahead == '\\')
        ADVANCE(105);
      if (lookahead == '_')
        ADVANCE(102);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 158:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '*')
        ADVANCE(159);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 161:
      if (lookahead == '*')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 163:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(99);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(104);
      if (lookahead == '\\')
        ADVANCE(105);
      if (lookahead == '_')
        ADVANCE(102);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 164:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(11);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '@')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(62);
      if (lookahead == 'I')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(88);
      if (lookahead == '_')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != '(' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '~')
        ADVANCE(96);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_scene_number);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(166);
      END_STATE();
    case 167:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(25);
      if (lookahead == 'E')
        ADVANCE(131);
      if (lookahead == 'I')
        ADVANCE(132);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 169:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 170:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 171:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(144);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 172:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(149);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 173:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(153);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 174:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(175);
      if (lookahead == 'A')
        ADVANCE(178);
      if (lookahead == 'C')
        ADVANCE(179);
      if (lookahead == 'D')
        ADVANCE(180);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == 'T')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 175:
      if (lookahead == ' ')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == ' ')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 178:
      if (lookahead == 'u')
        ADVANCE(34);
      END_STATE();
    case 179:
      if (lookahead == 'o')
        ADVANCE(41);
      if (lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 180:
      if (lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 181:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 182:
      if (lookahead == 'i')
        ADVANCE(84);
      END_STATE();
    case 183:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 184:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(156);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 185:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == ' ')
        ADVANCE(186);
      if (lookahead == '[')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 98},
  [3] = {.lex_state = 103},
  [4] = {.lex_state = 103},
  [5] = {.lex_state = 103},
  [6] = {.lex_state = 103},
  [7] = {.lex_state = 107},
  [8] = {.lex_state = 107},
  [9] = {.lex_state = 114},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 97},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 121},
  [14] = {.lex_state = 121},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 121},
  [17] = {.lex_state = 121},
  [18] = {.lex_state = 121},
  [19] = {.lex_state = 127},
  [20] = {.lex_state = 128},
  [21] = {.lex_state = 97},
  [22] = {.lex_state = 97},
  [23] = {.lex_state = 97},
  [24] = {.lex_state = 97},
  [25] = {.lex_state = 103},
  [26] = {.lex_state = 97},
  [27] = {.lex_state = 97},
  [28] = {.lex_state = 97},
  [29] = {.lex_state = 97},
  [30] = {.lex_state = 97},
  [31] = {.lex_state = 97},
  [32] = {.lex_state = 97},
  [33] = {.lex_state = 97},
  [34] = {.lex_state = 97},
  [35] = {.lex_state = 127},
  [36] = {.lex_state = 97},
  [37] = {.lex_state = 129},
  [38] = {.lex_state = 130},
  [39] = {.lex_state = 136},
  [40] = {.lex_state = 137},
  [41] = {.lex_state = 143},
  [42] = {.lex_state = 148},
  [43] = {.lex_state = 152},
  [44] = {.lex_state = 155},
  [45] = {.lex_state = 97},
  [46] = {.lex_state = 157},
  [47] = {.lex_state = 157},
  [48] = {.lex_state = 158},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 98},
  [51] = {.lex_state = 98},
  [52] = {.lex_state = 97},
  [53] = {.lex_state = 97},
  [54] = {.lex_state = 97},
  [55] = {.lex_state = 163},
  [56] = {.lex_state = 97},
  [57] = {.lex_state = 97},
  [58] = {.lex_state = 97},
  [59] = {.lex_state = 97},
  [60] = {.lex_state = 97},
  [61] = {.lex_state = 97},
  [62] = {.lex_state = 97},
  [63] = {.lex_state = 164},
  [64] = {.lex_state = 98},
  [65] = {.lex_state = 97},
  [66] = {.lex_state = 164},
  [67] = {.lex_state = 163},
  [68] = {.lex_state = 103},
  [69] = {.lex_state = 165},
  [70] = {.lex_state = 97},
  [71] = {.lex_state = 129},
  [72] = {.lex_state = 167},
  [73] = {.lex_state = 167},
  [74] = {.lex_state = 167},
  [75] = {.lex_state = 167},
  [76] = {.lex_state = 167},
  [77] = {.lex_state = 167},
  [78] = {.lex_state = 164},
  [79] = {.lex_state = 168},
  [80] = {.lex_state = 97},
  [81] = {.lex_state = 97},
  [82] = {.lex_state = 129},
  [83] = {.lex_state = 130},
  [84] = {.lex_state = 136},
  [85] = {.lex_state = 137},
  [86] = {.lex_state = 143},
  [87] = {.lex_state = 148},
  [88] = {.lex_state = 152},
  [89] = {.lex_state = 155},
  [90] = {.lex_state = 129},
  [91] = {.lex_state = 130},
  [92] = {.lex_state = 136},
  [93] = {.lex_state = 137},
  [94] = {.lex_state = 143},
  [95] = {.lex_state = 148},
  [96] = {.lex_state = 152},
  [97] = {.lex_state = 155},
  [98] = {.lex_state = 97},
  [99] = {.lex_state = 97},
  [100] = {.lex_state = 157},
  [101] = {.lex_state = 163},
  [102] = {.lex_state = 163},
  [103] = {.lex_state = 163},
  [104] = {.lex_state = 163},
  [105] = {.lex_state = 97},
  [106] = {.lex_state = 164},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 97},
  [109] = {.lex_state = 97},
  [110] = {.lex_state = 97},
  [111] = {.lex_state = 164},
  [112] = {.lex_state = 164},
  [113] = {.lex_state = 103},
  [114] = {.lex_state = 97},
  [115] = {.lex_state = 129},
  [116] = {.lex_state = 97},
  [117] = {.lex_state = 97},
  [118] = {.lex_state = 97},
  [119] = {.lex_state = 97},
  [120] = {.lex_state = 97},
  [121] = {.lex_state = 97},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 167},
  [124] = {.lex_state = 169},
  [125] = {.lex_state = 170},
  [126] = {.lex_state = 171},
  [127] = {.lex_state = 172},
  [128] = {.lex_state = 173},
  [129] = {.lex_state = 167},
  [130] = {.lex_state = 167},
  [131] = {.lex_state = 169},
  [132] = {.lex_state = 170},
  [133] = {.lex_state = 171},
  [134] = {.lex_state = 172},
  [135] = {.lex_state = 167},
  [136] = {.lex_state = 167},
  [137] = {.lex_state = 169},
  [138] = {.lex_state = 170},
  [139] = {.lex_state = 171},
  [140] = {.lex_state = 167},
  [141] = {.lex_state = 167},
  [142] = {.lex_state = 169},
  [143] = {.lex_state = 170},
  [144] = {.lex_state = 167},
  [145] = {.lex_state = 167},
  [146] = {.lex_state = 169},
  [147] = {.lex_state = 167},
  [148] = {.lex_state = 167},
  [149] = {.lex_state = 164},
  [150] = {.lex_state = 129},
  [151] = {.lex_state = 130},
  [152] = {.lex_state = 136},
  [153] = {.lex_state = 137},
  [154] = {.lex_state = 143},
  [155] = {.lex_state = 148},
  [156] = {.lex_state = 152},
  [157] = {.lex_state = 155},
  [158] = {.lex_state = 174},
  [159] = {.lex_state = 107},
  [160] = {.lex_state = 97},
  [161] = {.lex_state = 107},
  [162] = {.lex_state = 97},
  [163] = {.lex_state = 164},
  [164] = {.lex_state = 157},
  [165] = {.lex_state = 183},
  [166] = {.lex_state = 98},
  [167] = {.lex_state = 98},
  [168] = {.lex_state = 97},
  [169] = {.lex_state = 97},
  [170] = {.lex_state = 164},
  [171] = {.lex_state = 167},
  [172] = {.lex_state = 167},
  [173] = {.lex_state = 167},
  [174] = {.lex_state = 167},
  [175] = {.lex_state = 167},
  [176] = {.lex_state = 167},
  [177] = {.lex_state = 184},
  [178] = {.lex_state = 167},
  [179] = {.lex_state = 169},
  [180] = {.lex_state = 170},
  [181] = {.lex_state = 171},
  [182] = {.lex_state = 172},
  [183] = {.lex_state = 173},
  [184] = {.lex_state = 169},
  [185] = {.lex_state = 170},
  [186] = {.lex_state = 171},
  [187] = {.lex_state = 172},
  [188] = {.lex_state = 173},
  [189] = {.lex_state = 173},
  [190] = {.lex_state = 169},
  [191] = {.lex_state = 170},
  [192] = {.lex_state = 171},
  [193] = {.lex_state = 172},
  [194] = {.lex_state = 172},
  [195] = {.lex_state = 169},
  [196] = {.lex_state = 170},
  [197] = {.lex_state = 171},
  [198] = {.lex_state = 171},
  [199] = {.lex_state = 169},
  [200] = {.lex_state = 170},
  [201] = {.lex_state = 170},
  [202] = {.lex_state = 169},
  [203] = {.lex_state = 169},
  [204] = {.lex_state = 130},
  [205] = {.lex_state = 136},
  [206] = {.lex_state = 137},
  [207] = {.lex_state = 143},
  [208] = {.lex_state = 148},
  [209] = {.lex_state = 152},
  [210] = {.lex_state = 155},
  [211] = {.lex_state = 185},
  [212] = {.lex_state = 97},
  [213] = {.lex_state = 97},
  [214] = {.lex_state = 97},
  [215] = {.lex_state = 174},
  [216] = {.lex_state = 97},
  [217] = {.lex_state = 129},
  [218] = {.lex_state = 97},
  [219] = {.lex_state = 97},
  [220] = {.lex_state = 97},
  [221] = {.lex_state = 98},
  [222] = {.lex_state = 97},
  [223] = {.lex_state = 97},
  [224] = {.lex_state = 97},
  [225] = {.lex_state = 164},
  [226] = {.lex_state = 167},
  [227] = {.lex_state = 167},
  [228] = {.lex_state = 169},
  [229] = {.lex_state = 170},
  [230] = {.lex_state = 171},
  [231] = {.lex_state = 172},
  [232] = {.lex_state = 167},
  [233] = {.lex_state = 167},
  [234] = {.lex_state = 169},
  [235] = {.lex_state = 170},
  [236] = {.lex_state = 171},
  [237] = {.lex_state = 167},
  [238] = {.lex_state = 167},
  [239] = {.lex_state = 169},
  [240] = {.lex_state = 170},
  [241] = {.lex_state = 167},
  [242] = {.lex_state = 167},
  [243] = {.lex_state = 169},
  [244] = {.lex_state = 167},
  [245] = {.lex_state = 167},
  [246] = {.lex_state = 184},
  [247] = {.lex_state = 184},
  [248] = {.lex_state = 170},
  [249] = {.lex_state = 171},
  [250] = {.lex_state = 172},
  [251] = {.lex_state = 173},
  [252] = {.lex_state = 173},
  [253] = {.lex_state = 173},
  [254] = {.lex_state = 170},
  [255] = {.lex_state = 171},
  [256] = {.lex_state = 172},
  [257] = {.lex_state = 172},
  [258] = {.lex_state = 172},
  [259] = {.lex_state = 170},
  [260] = {.lex_state = 171},
  [261] = {.lex_state = 171},
  [262] = {.lex_state = 171},
  [263] = {.lex_state = 170},
  [264] = {.lex_state = 170},
  [265] = {.lex_state = 170},
  [266] = {.lex_state = 169},
  [267] = {.lex_state = 136},
  [268] = {.lex_state = 137},
  [269] = {.lex_state = 143},
  [270] = {.lex_state = 148},
  [271] = {.lex_state = 152},
  [272] = {.lex_state = 155},
  [273] = {.lex_state = 185},
  [274] = {.lex_state = 97},
  [275] = {.lex_state = 130},
  [276] = {.lex_state = 98},
  [277] = {.lex_state = 97},
  [278] = {.lex_state = 98},
  [279] = {.lex_state = 164},
  [280] = {.lex_state = 164},
  [281] = {.lex_state = 164},
  [282] = {.lex_state = 173},
  [283] = {.lex_state = 169},
  [284] = {.lex_state = 170},
  [285] = {.lex_state = 171},
  [286] = {.lex_state = 172},
  [287] = {.lex_state = 172},
  [288] = {.lex_state = 169},
  [289] = {.lex_state = 170},
  [290] = {.lex_state = 171},
  [291] = {.lex_state = 171},
  [292] = {.lex_state = 169},
  [293] = {.lex_state = 170},
  [294] = {.lex_state = 170},
  [295] = {.lex_state = 169},
  [296] = {.lex_state = 169},
  [297] = {.lex_state = 184},
  [298] = {.lex_state = 171},
  [299] = {.lex_state = 172},
  [300] = {.lex_state = 173},
  [301] = {.lex_state = 173},
  [302] = {.lex_state = 171},
  [303] = {.lex_state = 172},
  [304] = {.lex_state = 172},
  [305] = {.lex_state = 171},
  [306] = {.lex_state = 171},
  [307] = {.lex_state = 137},
  [308] = {.lex_state = 143},
  [309] = {.lex_state = 148},
  [310] = {.lex_state = 152},
  [311] = {.lex_state = 155},
  [312] = {.lex_state = 185},
  [313] = {.lex_state = 136},
  [314] = {.lex_state = 98},
  [315] = {.lex_state = 164},
  [316] = {.lex_state = 164},
  [317] = {.lex_state = 173},
  [318] = {.lex_state = 170},
  [319] = {.lex_state = 171},
  [320] = {.lex_state = 172},
  [321] = {.lex_state = 172},
  [322] = {.lex_state = 170},
  [323] = {.lex_state = 171},
  [324] = {.lex_state = 171},
  [325] = {.lex_state = 170},
  [326] = {.lex_state = 170},
  [327] = {.lex_state = 184},
  [328] = {.lex_state = 172},
  [329] = {.lex_state = 173},
  [330] = {.lex_state = 173},
  [331] = {.lex_state = 172},
  [332] = {.lex_state = 172},
  [333] = {.lex_state = 143},
  [334] = {.lex_state = 148},
  [335] = {.lex_state = 152},
  [336] = {.lex_state = 155},
  [337] = {.lex_state = 137},
  [338] = {.lex_state = 173},
  [339] = {.lex_state = 171},
  [340] = {.lex_state = 172},
  [341] = {.lex_state = 172},
  [342] = {.lex_state = 171},
  [343] = {.lex_state = 171},
  [344] = {.lex_state = 184},
  [345] = {.lex_state = 173},
  [346] = {.lex_state = 173},
  [347] = {.lex_state = 148},
  [348] = {.lex_state = 152},
  [349] = {.lex_state = 155},
  [350] = {.lex_state = 143},
  [351] = {.lex_state = 173},
  [352] = {.lex_state = 172},
  [353] = {.lex_state = 172},
  [354] = {.lex_state = 184},
  [355] = {.lex_state = 152},
  [356] = {.lex_state = 155},
  [357] = {.lex_state = 148},
  [358] = {.lex_state = 173},
  [359] = {.lex_state = 155},
  [360] = {.lex_state = 152},
  [361] = {.lex_state = 155},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_STAR_STAR] = ACTIONS(3),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(3),
    [sym__all_caps] = ACTIONS(3),
    [sym__scene_loc] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(3),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(3),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(3),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(3),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_Title] = ACTIONS(1),
    [anon_sym_Credit] = ACTIONS(1),
    [anon_sym_Author] = ACTIONS(3),
    [anon_sym_Source] = ACTIONS(1),
    [anon_sym_Draftdate] = ACTIONS(1),
    [anon_sym_Contact] = ACTIONS(1),
    [anon_sym_Authors] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [sym_boneyard] = ACTIONS(1),
    [sym_synopsis] = ACTIONS(1),
  },
  [1] = {
    [sym_script] = STATE(20),
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(37),
    [sym__dialogue_block] = STATE(37),
    [sym__action_block] = STATE(37),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(38),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(44),
    [sym_section2] = STATE(43),
    [sym_section3] = STATE(42),
    [sym_section4] = STATE(41),
    [sym_section5] = STATE(40),
    [sym_section6] = STATE(39),
    [sym_title_page] = STATE(34),
    [sym_k_v_pair] = STATE(45),
    [sym_key] = STATE(35),
    [aux_sym_script_repeat1] = STATE(36),
    [aux_sym_script_repeat2] = STATE(37),
    [aux_sym_script_repeat3] = STATE(38),
    [aux_sym_script_repeat4] = STATE(39),
    [aux_sym_script_repeat5] = STATE(40),
    [aux_sym_script_repeat6] = STATE(41),
    [aux_sym_script_repeat7] = STATE(42),
    [aux_sym_script_repeat8] = STATE(43),
    [aux_sym_script_repeat9] = STATE(44),
    [aux_sym_title_page_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [anon_sym_Title] = ACTIONS(43),
    [anon_sym_Credit] = ACTIONS(43),
    [anon_sym_Author] = ACTIONS(45),
    [anon_sym_Source] = ACTIONS(43),
    [anon_sym_Draftdate] = ACTIONS(43),
    [anon_sym_Contact] = ACTIONS(43),
    [anon_sym_Authors] = ACTIONS(43),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [2] = {
    [sym__text] = STATE(46),
    [sym__emphasis] = STATE(47),
    [sym_italic_txt] = STATE(47),
    [sym_bold_txt] = STATE(47),
    [sym_bold_and_italic_txt] = STATE(47),
    [sym_underlined_txt] = STATE(47),
    [sym__not_special] = STATE(47),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [3] = {
    [sym__general_text] = STATE(48),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(53),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [4] = {
    [sym__general_text] = STATE(49),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(55),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [5] = {
    [sym__general_text] = STATE(50),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(57),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [6] = {
    [sym__general_text] = STATE(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(59),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [7] = {
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(61),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [8] = {
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(65),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [9] = {
    [aux_sym_SLASH_LBRACK_CARET_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [10] = {
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(69),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [11] = {
    [anon_sym_LF] = ACTIONS(71),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [12] = {
    [sym__all_caps] = ACTIONS(73),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [13] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = ACTIONS(75),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [14] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [15] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = ACTIONS(79),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [16] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [17] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = ACTIONS(83),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [18] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_DASH_RBRACK_PLUS_SLASH] = ACTIONS(85),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [19] = {
    [anon_sym_COLON] = ACTIONS(87),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [21] = {
    [anon_sym_LF] = ACTIONS(91),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [22] = {
    [anon_sym_LF] = ACTIONS(93),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [23] = {
    [sym__delimit] = STATE(66),
    [anon_sym_LF] = ACTIONS(95),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [24] = {
    [anon_sym_LF] = ACTIONS(97),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [25] = {
    [sym_normal_txt] = STATE(68),
    [sym__emphasis] = STATE(68),
    [sym_italic_txt] = STATE(68),
    [sym_bold_txt] = STATE(68),
    [sym_bold_and_italic_txt] = STATE(68),
    [sym_underlined_txt] = STATE(68),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(68),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [26] = {
    [sym__numbering] = STATE(70),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [27] = {
    [sym__delimit] = STATE(71),
    [anon_sym_LF] = ACTIONS(95),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [28] = {
    [aux_sym_script_repeat1] = STATE(72),
    [anon_sym_LF] = ACTIONS(107),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [29] = {
    [aux_sym_script_repeat1] = STATE(73),
    [anon_sym_LF] = ACTIONS(109),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [30] = {
    [aux_sym_script_repeat1] = STATE(74),
    [anon_sym_LF] = ACTIONS(111),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [31] = {
    [aux_sym_script_repeat1] = STATE(75),
    [anon_sym_LF] = ACTIONS(113),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [32] = {
    [aux_sym_script_repeat1] = STATE(76),
    [anon_sym_LF] = ACTIONS(115),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [33] = {
    [aux_sym_script_repeat1] = STATE(77),
    [anon_sym_LF] = ACTIONS(117),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [34] = {
    [aux_sym_script_repeat1] = STATE(78),
    [anon_sym_LF] = ACTIONS(119),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [35] = {
    [anon_sym_COLON] = ACTIONS(121),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [36] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(82),
    [sym__dialogue_block] = STATE(82),
    [sym__action_block] = STATE(82),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(83),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(87),
    [sym_section4] = STATE(86),
    [sym_section5] = STATE(85),
    [sym_section6] = STATE(84),
    [sym_title_page] = STATE(80),
    [sym_k_v_pair] = STATE(45),
    [sym_key] = STATE(35),
    [aux_sym_script_repeat1] = STATE(81),
    [aux_sym_script_repeat2] = STATE(82),
    [aux_sym_script_repeat3] = STATE(83),
    [aux_sym_script_repeat4] = STATE(84),
    [aux_sym_script_repeat5] = STATE(85),
    [aux_sym_script_repeat6] = STATE(86),
    [aux_sym_script_repeat7] = STATE(87),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [aux_sym_title_page_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [anon_sym_Title] = ACTIONS(43),
    [anon_sym_Credit] = ACTIONS(43),
    [anon_sym_Author] = ACTIONS(45),
    [anon_sym_Source] = ACTIONS(43),
    [anon_sym_Draftdate] = ACTIONS(43),
    [anon_sym_Contact] = ACTIONS(43),
    [anon_sym_Authors] = ACTIONS(43),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [37] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(90),
    [sym__dialogue_block] = STATE(90),
    [sym__action_block] = STATE(90),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(83),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(87),
    [sym_section4] = STATE(86),
    [sym_section5] = STATE(85),
    [sym_section6] = STATE(84),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(83),
    [aux_sym_script_repeat4] = STATE(84),
    [aux_sym_script_repeat5] = STATE(85),
    [aux_sym_script_repeat6] = STATE(86),
    [aux_sym_script_repeat7] = STATE(87),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [38] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(87),
    [sym_section4] = STATE(86),
    [sym_section5] = STATE(85),
    [sym_section6] = STATE(84),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(84),
    [aux_sym_script_repeat5] = STATE(85),
    [aux_sym_script_repeat6] = STATE(86),
    [aux_sym_script_repeat7] = STATE(87),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [39] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(87),
    [sym_section4] = STATE(86),
    [sym_section5] = STATE(85),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(85),
    [aux_sym_script_repeat6] = STATE(86),
    [aux_sym_script_repeat7] = STATE(87),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [40] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(87),
    [sym_section4] = STATE(86),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(86),
    [aux_sym_script_repeat7] = STATE(87),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [41] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(87),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(87),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [42] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(88),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(88),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [43] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(89),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [44] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [45] = {
    [sym_k_v_pair] = STATE(98),
    [sym_key] = STATE(35),
    [aux_sym_title_page_repeat1] = STATE(98),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_Title] = ACTIONS(43),
    [anon_sym_Credit] = ACTIONS(43),
    [anon_sym_Author] = ACTIONS(45),
    [anon_sym_Source] = ACTIONS(43),
    [anon_sym_Draftdate] = ACTIONS(43),
    [anon_sym_Contact] = ACTIONS(43),
    [anon_sym_Authors] = ACTIONS(43),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [46] = {
    [anon_sym_LT] = ACTIONS(139),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [47] = {
    [sym_normal_txt] = STATE(100),
    [sym__emphasis] = STATE(100),
    [sym_italic_txt] = STATE(100),
    [sym_bold_txt] = STATE(100),
    [sym_bold_and_italic_txt] = STATE(100),
    [sym_underlined_txt] = STATE(100),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(100),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [48] = {
    [anon_sym_STAR] = ACTIONS(143),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [49] = {
    [anon_sym_STAR_STAR] = ACTIONS(145),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [50] = {
    [anon_sym_STAR_STAR_STAR] = ACTIONS(147),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [51] = {
    [anon_sym__] = ACTIONS(149),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [52] = {
    [anon_sym_LF] = ACTIONS(151),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [53] = {
    [anon_sym_LF] = ACTIONS(153),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [54] = {
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_POUND] = ACTIONS(157),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [55] = {
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_STAR_STAR] = ACTIONS(159),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(161),
    [anon_sym__] = ACTIONS(161),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(161),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [56] = {
    [sym__numbering] = STATE(105),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(105),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [57] = {
    [anon_sym_LF] = ACTIONS(165),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [58] = {
    [anon_sym_LF] = ACTIONS(167),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [59] = {
    [anon_sym_LF] = ACTIONS(169),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [60] = {
    [anon_sym_LF] = ACTIONS(171),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [61] = {
    [anon_sym_LF] = ACTIONS(173),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [62] = {
    [anon_sym_LF] = ACTIONS(175),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [63] = {
    [aux_sym_script_repeat1] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_STAR_STAR] = ACTIONS(181),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(181),
    [anon_sym__] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(181),
    [sym__all_caps] = ACTIONS(181),
    [sym__scene_loc] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(177),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [64] = {
    [sym_parenthetical] = STATE(108),
    [sym_spoken] = STATE(109),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [65] = {
    [anon_sym_LF] = ACTIONS(185),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [66] = {
    [aux_sym_script_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(191),
    [sym__all_caps] = ACTIONS(191),
    [sym__scene_loc] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(187),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [67] = {
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_STAR_STAR] = ACTIONS(193),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(195),
    [anon_sym__] = ACTIONS(195),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(195),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [68] = {
    [sym_normal_txt] = STATE(113),
    [sym__emphasis] = STATE(113),
    [sym_italic_txt] = STATE(113),
    [sym_bold_txt] = STATE(113),
    [sym_bold_and_italic_txt] = STATE(113),
    [sym_underlined_txt] = STATE(113),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(113),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [69] = {
    [sym_scene_number] = ACTIONS(199),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [70] = {
    [anon_sym_LF] = ACTIONS(163),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [71] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(115),
    [sym__dialogue_block] = STATE(115),
    [sym__action_block] = STATE(115),
    [aux_sym_script_repeat2] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(201),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [72] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(123),
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section2] = STATE(128),
    [sym_section3] = STATE(127),
    [sym_section4] = STATE(126),
    [sym_section5] = STATE(125),
    [sym_section6] = STATE(124),
    [aux_sym_script_repeat1] = STATE(122),
    [aux_sym_script_repeat3] = STATE(123),
    [aux_sym_script_repeat4] = STATE(124),
    [aux_sym_script_repeat5] = STATE(125),
    [aux_sym_script_repeat6] = STATE(126),
    [aux_sym_script_repeat7] = STATE(127),
    [aux_sym_script_repeat8] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(209),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [73] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(130),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(134),
    [sym_section4] = STATE(133),
    [sym_section5] = STATE(132),
    [sym_section6] = STATE(131),
    [aux_sym_script_repeat1] = STATE(129),
    [aux_sym_script_repeat3] = STATE(130),
    [aux_sym_script_repeat4] = STATE(131),
    [aux_sym_script_repeat5] = STATE(132),
    [aux_sym_script_repeat6] = STATE(133),
    [aux_sym_script_repeat7] = STATE(134),
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_POUND_POUND] = ACTIONS(215),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [74] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(136),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(139),
    [sym_section5] = STATE(138),
    [sym_section6] = STATE(137),
    [aux_sym_script_repeat1] = STATE(135),
    [aux_sym_script_repeat3] = STATE(136),
    [aux_sym_script_repeat4] = STATE(137),
    [aux_sym_script_repeat5] = STATE(138),
    [aux_sym_script_repeat6] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [75] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(141),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(143),
    [sym_section6] = STATE(142),
    [aux_sym_script_repeat1] = STATE(140),
    [aux_sym_script_repeat3] = STATE(141),
    [aux_sym_script_repeat4] = STATE(142),
    [aux_sym_script_repeat5] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [76] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(145),
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(146),
    [aux_sym_script_repeat1] = STATE(144),
    [aux_sym_script_repeat3] = STATE(145),
    [aux_sym_script_repeat4] = STATE(146),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [77] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(148),
    [aux_sym_script_repeat1] = STATE(147),
    [aux_sym_script_repeat3] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(235),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [78] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(150),
    [sym__dialogue_block] = STATE(150),
    [sym__action_block] = STATE(150),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(151),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(155),
    [sym_section4] = STATE(154),
    [sym_section5] = STATE(153),
    [sym_section6] = STATE(152),
    [aux_sym_script_repeat1] = STATE(149),
    [aux_sym_script_repeat2] = STATE(150),
    [aux_sym_script_repeat3] = STATE(151),
    [aux_sym_script_repeat4] = STATE(152),
    [aux_sym_script_repeat5] = STATE(153),
    [aux_sym_script_repeat6] = STATE(154),
    [aux_sym_script_repeat7] = STATE(155),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [79] = {
    [sym__value_group] = STATE(160),
    [sym__indent] = STATE(161),
    [aux_sym__value_group_repeat1] = STATE(162),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_] = ACTIONS(247),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [80] = {
    [aux_sym_script_repeat1] = STATE(163),
    [anon_sym_LF] = ACTIONS(249),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [81] = {
    [aux_sym_script_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(251),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(256),
    [sym__all_caps] = ACTIONS(256),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [anon_sym_Title] = ACTIONS(251),
    [anon_sym_Credit] = ACTIONS(251),
    [anon_sym_Author] = ACTIONS(256),
    [anon_sym_Source] = ACTIONS(251),
    [anon_sym_Draftdate] = ACTIONS(251),
    [anon_sym_Contact] = ACTIONS(251),
    [anon_sym_Authors] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [82] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(90),
    [sym__dialogue_block] = STATE(90),
    [sym__action_block] = STATE(90),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(151),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(155),
    [sym_section4] = STATE(154),
    [sym_section5] = STATE(153),
    [sym_section6] = STATE(152),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(151),
    [aux_sym_script_repeat4] = STATE(152),
    [aux_sym_script_repeat5] = STATE(153),
    [aux_sym_script_repeat6] = STATE(154),
    [aux_sym_script_repeat7] = STATE(155),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [83] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(155),
    [sym_section4] = STATE(154),
    [sym_section5] = STATE(153),
    [sym_section6] = STATE(152),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(152),
    [aux_sym_script_repeat5] = STATE(153),
    [aux_sym_script_repeat6] = STATE(154),
    [aux_sym_script_repeat7] = STATE(155),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [84] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(155),
    [sym_section4] = STATE(154),
    [sym_section5] = STATE(153),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(153),
    [aux_sym_script_repeat6] = STATE(154),
    [aux_sym_script_repeat7] = STATE(155),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [85] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(155),
    [sym_section4] = STATE(154),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(154),
    [aux_sym_script_repeat7] = STATE(155),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [86] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(155),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(155),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [87] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(156),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(156),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [88] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(157),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [89] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [90] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(90),
    [sym__dialogue_block] = STATE(90),
    [sym__action_block] = STATE(90),
    [aux_sym_script_repeat2] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(269),
    [anon_sym__] = ACTIONS(272),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(258),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(281),
    [sym__all_caps] = ACTIONS(284),
    [sym__scene_loc] = ACTIONS(258),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(258),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [91] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [aux_sym_script_repeat3] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(291),
    [sym__scene_loc] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(289),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [92] = {
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(303),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [93] = {
    [sym_sec_heading5] = STATE(32),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(310),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [94] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_POUND_POUND] = ACTIONS(315),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(315),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(317),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [95] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_POUND_POUND] = ACTIONS(322),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(324),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [96] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_POUND_POUND] = ACTIONS(331),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [97] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(336),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [98] = {
    [sym_k_v_pair] = STATE(98),
    [sym_key] = STATE(35),
    [aux_sym_title_page_repeat1] = STATE(98),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_Title] = ACTIONS(341),
    [anon_sym_Credit] = ACTIONS(341),
    [anon_sym_Author] = ACTIONS(344),
    [anon_sym_Source] = ACTIONS(341),
    [anon_sym_Draftdate] = ACTIONS(341),
    [anon_sym_Contact] = ACTIONS(341),
    [anon_sym_Authors] = ACTIONS(341),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [99] = {
    [anon_sym_LF] = ACTIONS(347),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [100] = {
    [sym_normal_txt] = STATE(164),
    [sym__emphasis] = STATE(164),
    [sym_italic_txt] = STATE(164),
    [sym_bold_txt] = STATE(164),
    [sym_bold_and_italic_txt] = STATE(164),
    [sym_underlined_txt] = STATE(164),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(164),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [101] = {
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_STAR_STAR] = ACTIONS(351),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(353),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [102] = {
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_STAR_STAR] = ACTIONS(355),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(357),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [103] = {
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_STAR_STAR] = ACTIONS(359),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(361),
    [anon_sym__] = ACTIONS(361),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(361),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [104] = {
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_STAR_STAR] = ACTIONS(363),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(365),
    [anon_sym__] = ACTIONS(365),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(365),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [105] = {
    [anon_sym_LF] = ACTIONS(367),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [106] = {
    [aux_sym_script_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_STAR_STAR] = ACTIONS(371),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(371),
    [anon_sym__] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(369),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(371),
    [sym__all_caps] = ACTIONS(371),
    [sym__scene_loc] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(369),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [107] = {
    [sym__general_text] = STATE(165),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(373),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [108] = {
    [anon_sym_LF] = ACTIONS(375),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [109] = {
    [aux_sym_dialogue_repeat1] = STATE(168),
    [anon_sym_LF] = ACTIONS(377),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [110] = {
    [anon_sym_LF] = ACTIONS(379),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(383),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(383),
    [sym__all_caps] = ACTIONS(383),
    [sym__scene_loc] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(383),
    [anon_sym_POUND_POUND] = ACTIONS(383),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(383),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(383),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(383),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(381),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [112] = {
    [aux_sym_script_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(387),
    [anon_sym_STAR_STAR] = ACTIONS(387),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(387),
    [anon_sym__] = ACTIONS(387),
    [anon_sym_BANG] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(385),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(387),
    [sym__all_caps] = ACTIONS(387),
    [sym__scene_loc] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(385),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [113] = {
    [sym_normal_txt] = STATE(113),
    [sym__emphasis] = STATE(113),
    [sym_italic_txt] = STATE(113),
    [sym_bold_txt] = STATE(113),
    [sym_bold_and_italic_txt] = STATE(113),
    [sym_underlined_txt] = STATE(113),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(113),
    [anon_sym_LF] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_STAR_STAR] = ACTIONS(394),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(397),
    [anon_sym__] = ACTIONS(400),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(403),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [114] = {
    [anon_sym_POUND] = ACTIONS(406),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [115] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(90),
    [sym__dialogue_block] = STATE(90),
    [sym__action_block] = STATE(90),
    [aux_sym_script_repeat2] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(408),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(408),
    [anon_sym_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(408),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [116] = {
    [sym__delimit] = STATE(170),
    [anon_sym_LF] = ACTIONS(95),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [117] = {
    [aux_sym_script_repeat1] = STATE(171),
    [anon_sym_LF] = ACTIONS(412),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [118] = {
    [aux_sym_script_repeat1] = STATE(172),
    [anon_sym_LF] = ACTIONS(414),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [119] = {
    [aux_sym_script_repeat1] = STATE(173),
    [anon_sym_LF] = ACTIONS(416),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [120] = {
    [aux_sym_script_repeat1] = STATE(174),
    [anon_sym_LF] = ACTIONS(418),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [121] = {
    [aux_sym_script_repeat1] = STATE(175),
    [anon_sym_LF] = ACTIONS(420),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [122] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [123] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section2] = STATE(183),
    [sym_section3] = STATE(182),
    [sym_section4] = STATE(181),
    [sym_section5] = STATE(180),
    [sym_section6] = STATE(179),
    [aux_sym_script_repeat1] = STATE(177),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(179),
    [aux_sym_script_repeat5] = STATE(180),
    [aux_sym_script_repeat6] = STATE(181),
    [aux_sym_script_repeat7] = STATE(182),
    [aux_sym_script_repeat8] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [124] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section2] = STATE(183),
    [sym_section3] = STATE(182),
    [sym_section4] = STATE(181),
    [sym_section5] = STATE(180),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(177),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(180),
    [aux_sym_script_repeat6] = STATE(181),
    [aux_sym_script_repeat7] = STATE(182),
    [aux_sym_script_repeat8] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [125] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section2] = STATE(183),
    [sym_section3] = STATE(182),
    [sym_section4] = STATE(181),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(177),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(181),
    [aux_sym_script_repeat7] = STATE(182),
    [aux_sym_script_repeat8] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [126] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section2] = STATE(183),
    [sym_section3] = STATE(182),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(177),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(182),
    [aux_sym_script_repeat8] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [127] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_section2] = STATE(183),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(177),
    [aux_sym_script_repeat7] = STATE(187),
    [aux_sym_script_repeat8] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [128] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat1] = STATE(177),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [129] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [130] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(193),
    [sym_section4] = STATE(192),
    [sym_section5] = STATE(191),
    [sym_section6] = STATE(190),
    [aux_sym_script_repeat1] = STATE(189),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(190),
    [aux_sym_script_repeat5] = STATE(191),
    [aux_sym_script_repeat6] = STATE(192),
    [aux_sym_script_repeat7] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [131] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(193),
    [sym_section4] = STATE(192),
    [sym_section5] = STATE(191),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(189),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(191),
    [aux_sym_script_repeat6] = STATE(192),
    [aux_sym_script_repeat7] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [132] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section3] = STATE(193),
    [sym_section4] = STATE(192),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(189),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(192),
    [aux_sym_script_repeat7] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [133] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(193),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(189),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [134] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(189),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [135] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [136] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(197),
    [sym_section5] = STATE(196),
    [sym_section6] = STATE(195),
    [aux_sym_script_repeat1] = STATE(194),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(195),
    [aux_sym_script_repeat5] = STATE(196),
    [aux_sym_script_repeat6] = STATE(197),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [137] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(197),
    [sym_section5] = STATE(196),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(194),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(196),
    [aux_sym_script_repeat6] = STATE(197),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [138] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section4] = STATE(197),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(194),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(197),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [139] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(194),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [140] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [141] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(200),
    [sym_section6] = STATE(199),
    [aux_sym_script_repeat1] = STATE(198),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(199),
    [aux_sym_script_repeat5] = STATE(200),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [142] = {
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(200),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(198),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(200),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [143] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(198),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [144] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [145] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(202),
    [aux_sym_script_repeat1] = STATE(201),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(202),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [146] = {
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(201),
    [aux_sym_script_repeat4] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [147] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(455),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [148] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [aux_sym_script_repeat1] = STATE(203),
    [aux_sym_script_repeat3] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(455),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [149] = {
    [aux_sym_script_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(251),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(256),
    [sym__all_caps] = ACTIONS(256),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [150] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(90),
    [sym__dialogue_block] = STATE(90),
    [sym__action_block] = STATE(90),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(204),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(208),
    [sym_section4] = STATE(207),
    [sym_section5] = STATE(206),
    [sym_section6] = STATE(205),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(204),
    [aux_sym_script_repeat4] = STATE(205),
    [aux_sym_script_repeat5] = STATE(206),
    [aux_sym_script_repeat6] = STATE(207),
    [aux_sym_script_repeat7] = STATE(208),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [151] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(208),
    [sym_section4] = STATE(207),
    [sym_section5] = STATE(206),
    [sym_section6] = STATE(205),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(205),
    [aux_sym_script_repeat5] = STATE(206),
    [aux_sym_script_repeat6] = STATE(207),
    [aux_sym_script_repeat7] = STATE(208),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [152] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(208),
    [sym_section4] = STATE(207),
    [sym_section5] = STATE(206),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(206),
    [aux_sym_script_repeat6] = STATE(207),
    [aux_sym_script_repeat7] = STATE(208),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [153] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(208),
    [sym_section4] = STATE(207),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(207),
    [aux_sym_script_repeat7] = STATE(208),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [154] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(208),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(208),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [155] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [156] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [157] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [158] = {
    [anon_sym_2] = ACTIONS(466),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [159] = {
    [sym_value] = STATE(213),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(468),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [160] = {
    [anon_sym_LF] = ACTIONS(470),
    [anon_sym_Title] = ACTIONS(472),
    [anon_sym_Credit] = ACTIONS(472),
    [anon_sym_Author] = ACTIONS(470),
    [anon_sym_Source] = ACTIONS(472),
    [anon_sym_Draftdate] = ACTIONS(472),
    [anon_sym_Contact] = ACTIONS(472),
    [anon_sym_Authors] = ACTIONS(472),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [161] = {
    [sym_value] = STATE(214),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(468),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [162] = {
    [sym__indent] = STATE(161),
    [aux_sym__value_group_repeat1] = STATE(216),
    [anon_sym_LF] = ACTIONS(474),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [163] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(217),
    [sym__dialogue_block] = STATE(217),
    [sym__action_block] = STATE(217),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(204),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(210),
    [sym_section2] = STATE(209),
    [sym_section3] = STATE(208),
    [sym_section4] = STATE(207),
    [sym_section5] = STATE(206),
    [sym_section6] = STATE(205),
    [aux_sym_script_repeat1] = STATE(149),
    [aux_sym_script_repeat2] = STATE(217),
    [aux_sym_script_repeat3] = STATE(204),
    [aux_sym_script_repeat4] = STATE(205),
    [aux_sym_script_repeat5] = STATE(206),
    [aux_sym_script_repeat6] = STATE(207),
    [aux_sym_script_repeat7] = STATE(208),
    [aux_sym_script_repeat8] = STATE(209),
    [aux_sym_script_repeat9] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [164] = {
    [sym_normal_txt] = STATE(164),
    [sym__emphasis] = STATE(164),
    [sym_italic_txt] = STATE(164),
    [sym_bold_txt] = STATE(164),
    [sym_bold_and_italic_txt] = STATE(164),
    [sym_underlined_txt] = STATE(164),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(164),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_STAR_STAR] = ACTIONS(394),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(397),
    [anon_sym__] = ACTIONS(400),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(403),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [166] = {
    [sym_spoken] = STATE(219),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [167] = {
    [sym_parenthetical] = STATE(220),
    [sym_spoken] = STATE(220),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [168] = {
    [aux_sym_dialogue_repeat1] = STATE(222),
    [anon_sym_LF] = ACTIONS(482),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [169] = {
    [anon_sym_LF] = ACTIONS(484),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [170] = {
    [sym_dialogue] = STATE(223),
    [sym_character] = STATE(22),
    [sym_action] = STATE(224),
    [sym_centered_action] = STATE(224),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(225),
    [sym__dialogue_block] = STATE(225),
    [sym__action_block] = STATE(225),
    [aux_sym_script_repeat2] = STATE(225),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(203),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(201),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [171] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(227),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(231),
    [sym_section4] = STATE(230),
    [sym_section5] = STATE(229),
    [sym_section6] = STATE(228),
    [aux_sym_script_repeat1] = STATE(226),
    [aux_sym_script_repeat3] = STATE(227),
    [aux_sym_script_repeat4] = STATE(228),
    [aux_sym_script_repeat5] = STATE(229),
    [aux_sym_script_repeat6] = STATE(230),
    [aux_sym_script_repeat7] = STATE(231),
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_POUND_POUND] = ACTIONS(215),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [172] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(233),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(236),
    [sym_section5] = STATE(235),
    [sym_section6] = STATE(234),
    [aux_sym_script_repeat1] = STATE(232),
    [aux_sym_script_repeat3] = STATE(233),
    [aux_sym_script_repeat4] = STATE(234),
    [aux_sym_script_repeat5] = STATE(235),
    [aux_sym_script_repeat6] = STATE(236),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [173] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(238),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(240),
    [sym_section6] = STATE(239),
    [aux_sym_script_repeat1] = STATE(237),
    [aux_sym_script_repeat3] = STATE(238),
    [aux_sym_script_repeat4] = STATE(239),
    [aux_sym_script_repeat5] = STATE(240),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(227),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [174] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(242),
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(243),
    [aux_sym_script_repeat1] = STATE(241),
    [aux_sym_script_repeat3] = STATE(242),
    [aux_sym_script_repeat4] = STATE(243),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(233),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [175] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(245),
    [aux_sym_script_repeat1] = STATE(244),
    [aux_sym_script_repeat3] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(235),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [176] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [177] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(486),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [178] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [aux_sym_script_repeat3] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(291),
    [sym__scene_loc] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(297),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(289),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [179] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(250),
    [sym_section4] = STATE(249),
    [sym_section5] = STATE(248),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(247),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(248),
    [aux_sym_script_repeat6] = STATE(249),
    [aux_sym_script_repeat7] = STATE(250),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(492),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [180] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(250),
    [sym_section4] = STATE(249),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(247),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(249),
    [aux_sym_script_repeat7] = STATE(250),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(492),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [181] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(250),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(247),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(250),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(492),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [182] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(247),
    [aux_sym_script_repeat7] = STATE(187),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(492),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [183] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat1] = STATE(247),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LF] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(492),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [184] = {
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat4] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(301),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(303),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [185] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_LF] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(308),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(310),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [186] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_POUND_POUND] = ACTIONS(315),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(315),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(317),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [187] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_POUND_POUND] = ACTIONS(322),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(324),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [188] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_POUND_POUND] = ACTIONS(331),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [189] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(494),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [190] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(256),
    [sym_section4] = STATE(255),
    [sym_section5] = STATE(254),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(253),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(254),
    [aux_sym_script_repeat6] = STATE(255),
    [aux_sym_script_repeat7] = STATE(256),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [191] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section3] = STATE(256),
    [sym_section4] = STATE(255),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(253),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(255),
    [aux_sym_script_repeat7] = STATE(256),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [192] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(256),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(253),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(256),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [193] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(253),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [194] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(502),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [195] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(260),
    [sym_section5] = STATE(259),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(258),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(259),
    [aux_sym_script_repeat6] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [196] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section4] = STATE(260),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(258),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [197] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(258),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [198] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LF] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(510),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [199] = {
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(263),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(262),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LF] = ACTIONS(516),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [200] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(262),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LF] = ACTIONS(516),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [201] = {
    [aux_sym_script_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LF] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(518),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [202] = {
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(265),
    [aux_sym_script_repeat4] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LF] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [203] = {
    [aux_sym_script_repeat1] = STATE(266),
    [ts_builtin_sym_end] = ACTIONS(526),
    [anon_sym_LF] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(526),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [204] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(271),
    [sym_section3] = STATE(270),
    [sym_section4] = STATE(269),
    [sym_section5] = STATE(268),
    [sym_section6] = STATE(267),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(267),
    [aux_sym_script_repeat5] = STATE(268),
    [aux_sym_script_repeat6] = STATE(269),
    [aux_sym_script_repeat7] = STATE(270),
    [aux_sym_script_repeat8] = STATE(271),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [205] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(271),
    [sym_section3] = STATE(270),
    [sym_section4] = STATE(269),
    [sym_section5] = STATE(268),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(268),
    [aux_sym_script_repeat6] = STATE(269),
    [aux_sym_script_repeat7] = STATE(270),
    [aux_sym_script_repeat8] = STATE(271),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [206] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(271),
    [sym_section3] = STATE(270),
    [sym_section4] = STATE(269),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(269),
    [aux_sym_script_repeat7] = STATE(270),
    [aux_sym_script_repeat8] = STATE(271),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [207] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(271),
    [sym_section3] = STATE(270),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(270),
    [aux_sym_script_repeat8] = STATE(271),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [208] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(271),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(271),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [209] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [210] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [211] = {
    [aux_sym__indent_repeat1] = STATE(273),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(534),
    [anon_sym_] = ACTIONS(536),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [212] = {
    [anon_sym_LF] = ACTIONS(538),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [213] = {
    [anon_sym_LF] = ACTIONS(540),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [214] = {
    [anon_sym_LF] = ACTIONS(542),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [215] = {
    [anon_sym_LF] = ACTIONS(544),
    [anon_sym_Title] = ACTIONS(546),
    [anon_sym_Credit] = ACTIONS(546),
    [anon_sym_Author] = ACTIONS(544),
    [anon_sym_Source] = ACTIONS(546),
    [anon_sym_Draftdate] = ACTIONS(546),
    [anon_sym_Contact] = ACTIONS(546),
    [anon_sym_Authors] = ACTIONS(546),
    [anon_sym_2] = ACTIONS(466),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [216] = {
    [sym__indent] = STATE(161),
    [aux_sym__value_group_repeat1] = STATE(216),
    [anon_sym_LF] = ACTIONS(548),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [217] = {
    [sym_dialogue] = STATE(21),
    [sym_character] = STATE(22),
    [sym_action] = STATE(23),
    [sym_centered_action] = STATE(23),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__forced_scene] = STATE(26),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(90),
    [sym__dialogue_block] = STATE(90),
    [sym__action_block] = STATE(90),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(275),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(272),
    [sym_section2] = STATE(271),
    [sym_section3] = STATE(270),
    [sym_section4] = STATE(269),
    [sym_section5] = STATE(268),
    [sym_section6] = STATE(267),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(275),
    [aux_sym_script_repeat4] = STATE(267),
    [aux_sym_script_repeat5] = STATE(268),
    [aux_sym_script_repeat6] = STATE(269),
    [aux_sym_script_repeat7] = STATE(270),
    [aux_sym_script_repeat8] = STATE(271),
    [aux_sym_script_repeat9] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [218] = {
    [anon_sym_LF] = ACTIONS(551),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [219] = {
    [aux_sym_dialogue_repeat1] = STATE(277),
    [anon_sym_LF] = ACTIONS(553),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [220] = {
    [anon_sym_LF] = ACTIONS(555),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [221] = {
    [sym_parenthetical] = STATE(220),
    [sym_spoken] = STATE(220),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [222] = {
    [aux_sym_dialogue_repeat1] = STATE(222),
    [anon_sym_LF] = ACTIONS(559),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [223] = {
    [anon_sym_LF] = ACTIONS(562),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [224] = {
    [sym__delimit] = STATE(280),
    [anon_sym_LF] = ACTIONS(95),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [225] = {
    [sym_dialogue] = STATE(223),
    [sym_character] = STATE(22),
    [sym_action] = STATE(224),
    [sym_centered_action] = STATE(224),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(281),
    [sym__dialogue_block] = STATE(281),
    [sym__action_block] = STATE(281),
    [aux_sym_script_repeat2] = STATE(281),
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_LF] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(408),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(408),
    [anon_sym_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(410),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(408),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [226] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [227] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(286),
    [sym_section4] = STATE(285),
    [sym_section5] = STATE(284),
    [sym_section6] = STATE(283),
    [aux_sym_script_repeat1] = STATE(282),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(283),
    [aux_sym_script_repeat5] = STATE(284),
    [aux_sym_script_repeat6] = STATE(285),
    [aux_sym_script_repeat7] = STATE(286),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [228] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(286),
    [sym_section4] = STATE(285),
    [sym_section5] = STATE(284),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(282),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(284),
    [aux_sym_script_repeat6] = STATE(285),
    [aux_sym_script_repeat7] = STATE(286),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [229] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section3] = STATE(286),
    [sym_section4] = STATE(285),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(282),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(285),
    [aux_sym_script_repeat7] = STATE(286),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [230] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(286),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(282),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(286),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [231] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(282),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [232] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(439),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [233] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(290),
    [sym_section5] = STATE(289),
    [sym_section6] = STATE(288),
    [aux_sym_script_repeat1] = STATE(287),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(288),
    [aux_sym_script_repeat5] = STATE(289),
    [aux_sym_script_repeat6] = STATE(290),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [234] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(290),
    [sym_section5] = STATE(289),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(287),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(289),
    [aux_sym_script_repeat6] = STATE(290),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [235] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section4] = STATE(290),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(287),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(290),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [236] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(287),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(439),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [237] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [238] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(293),
    [sym_section6] = STATE(292),
    [aux_sym_script_repeat1] = STATE(291),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(292),
    [aux_sym_script_repeat5] = STATE(293),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [239] = {
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(293),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(291),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(293),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(568),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [240] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(291),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LF] = ACTIONS(568),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(445),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [241] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [242] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(295),
    [aux_sym_script_repeat1] = STATE(294),
    [aux_sym_script_repeat3] = STATE(178),
    [aux_sym_script_repeat4] = STATE(295),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(570),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [243] = {
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(294),
    [aux_sym_script_repeat4] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(570),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [244] = {
    [aux_sym_script_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(251),
    [sym__scene_loc] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(455),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [245] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(116),
    [sym_scene] = STATE(178),
    [aux_sym_script_repeat1] = STATE(296),
    [aux_sym_script_repeat3] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(572),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(457),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(455),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [246] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [247] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(577),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [248] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section2] = STATE(300),
    [sym_section3] = STATE(299),
    [sym_section4] = STATE(298),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(297),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(298),
    [aux_sym_script_repeat7] = STATE(299),
    [aux_sym_script_repeat8] = STATE(300),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [249] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section2] = STATE(300),
    [sym_section3] = STATE(299),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(297),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(299),
    [aux_sym_script_repeat8] = STATE(300),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [250] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_section2] = STATE(300),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(297),
    [aux_sym_script_repeat7] = STATE(187),
    [aux_sym_script_repeat8] = STATE(300),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [251] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat1] = STATE(297),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [252] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [253] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(586),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [254] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section3] = STATE(303),
    [sym_section4] = STATE(302),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(301),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(302),
    [aux_sym_script_repeat7] = STATE(303),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [255] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(303),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(301),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(303),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [256] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(301),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [257] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [258] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(595),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [259] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section4] = STATE(305),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(304),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(305),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [260] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(304),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [261] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [262] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_LF] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(604),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [263] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(306),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_LF] = ACTIONS(608),
    [anon_sym_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [264] = {
    [aux_sym_script_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(610),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [265] = {
    [aux_sym_script_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(613),
    [anon_sym_LF] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(613),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [266] = {
    [aux_sym_script_repeat1] = STATE(266),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(256),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(251),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [267] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(311),
    [sym_section2] = STATE(310),
    [sym_section3] = STATE(309),
    [sym_section4] = STATE(308),
    [sym_section5] = STATE(307),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(307),
    [aux_sym_script_repeat6] = STATE(308),
    [aux_sym_script_repeat7] = STATE(309),
    [aux_sym_script_repeat8] = STATE(310),
    [aux_sym_script_repeat9] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [268] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(311),
    [sym_section2] = STATE(310),
    [sym_section3] = STATE(309),
    [sym_section4] = STATE(308),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(308),
    [aux_sym_script_repeat7] = STATE(309),
    [aux_sym_script_repeat8] = STATE(310),
    [aux_sym_script_repeat9] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [269] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(311),
    [sym_section2] = STATE(310),
    [sym_section3] = STATE(309),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(309),
    [aux_sym_script_repeat8] = STATE(310),
    [aux_sym_script_repeat9] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [270] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(311),
    [sym_section2] = STATE(310),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(310),
    [aux_sym_script_repeat9] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [271] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(311),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [272] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [273] = {
    [aux_sym__indent_repeat1] = STATE(312),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(622),
    [anon_sym_] = ACTIONS(624),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [274] = {
    [anon_sym_LF] = ACTIONS(626),
    [anon_sym_Title] = ACTIONS(628),
    [anon_sym_Credit] = ACTIONS(628),
    [anon_sym_Author] = ACTIONS(626),
    [anon_sym_Source] = ACTIONS(628),
    [anon_sym_Draftdate] = ACTIONS(628),
    [anon_sym_Contact] = ACTIONS(628),
    [anon_sym_Authors] = ACTIONS(628),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [275] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(311),
    [sym_section2] = STATE(310),
    [sym_section3] = STATE(309),
    [sym_section4] = STATE(308),
    [sym_section5] = STATE(307),
    [sym_section6] = STATE(313),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(313),
    [aux_sym_script_repeat5] = STATE(307),
    [aux_sym_script_repeat6] = STATE(308),
    [aux_sym_script_repeat7] = STATE(309),
    [aux_sym_script_repeat8] = STATE(310),
    [aux_sym_script_repeat9] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [276] = {
    [sym_parenthetical] = STATE(220),
    [sym_spoken] = STATE(220),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(630),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [277] = {
    [aux_sym_dialogue_repeat1] = STATE(222),
    [anon_sym_LF] = ACTIONS(632),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [278] = {
    [sym_parenthetical] = STATE(220),
    [sym_spoken] = STATE(220),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [279] = {
    [aux_sym_script_repeat1] = STATE(315),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LF] = ACTIONS(634),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_STAR_STAR] = ACTIONS(181),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(181),
    [anon_sym__] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(181),
    [sym__all_caps] = ACTIONS(181),
    [sym__scene_loc] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(181),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(177),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [280] = {
    [aux_sym_script_repeat1] = STATE(316),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(191),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(191),
    [sym__all_caps] = ACTIONS(191),
    [sym__scene_loc] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(191),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(187),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [281] = {
    [sym_dialogue] = STATE(223),
    [sym_character] = STATE(22),
    [sym_action] = STATE(224),
    [sym_centered_action] = STATE(224),
    [sym__text] = STATE(24),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__forced_action] = STATE(24),
    [sym__forced_character] = STATE(11),
    [sym__not_special] = STATE(25),
    [sym__raw_script] = STATE(281),
    [sym__dialogue_block] = STATE(281),
    [sym__action_block] = STATE(281),
    [aux_sym_script_repeat2] = STATE(281),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_LF] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(269),
    [anon_sym__] = ACTIONS(272),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(258),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(281),
    [sym__all_caps] = ACTIONS(284),
    [sym__scene_loc] = ACTIONS(258),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(287),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(258),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [282] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(498),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(494),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [283] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section3] = STATE(320),
    [sym_section4] = STATE(319),
    [sym_section5] = STATE(318),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(317),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(318),
    [aux_sym_script_repeat6] = STATE(319),
    [aux_sym_script_repeat7] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [284] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section3] = STATE(320),
    [sym_section4] = STATE(319),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(317),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(319),
    [aux_sym_script_repeat7] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [285] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(320),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(317),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [286] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(317),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_LF] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(498),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [287] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(506),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(502),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [288] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section4] = STATE(323),
    [sym_section5] = STATE(322),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(321),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(322),
    [aux_sym_script_repeat6] = STATE(323),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [289] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section4] = STATE(323),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(321),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(323),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [290] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(321),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(506),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [291] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LF] = ACTIONS(514),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(510),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [292] = {
    [sym_sec_heading5] = STATE(120),
    [sym_sec_heading6] = STATE(121),
    [sym_section5] = STATE(325),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(324),
    [aux_sym_script_repeat4] = STATE(184),
    [aux_sym_script_repeat5] = STATE(325),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LF] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [293] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(324),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LF] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(514),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [294] = {
    [aux_sym_script_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LF] = ACTIONS(522),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(518),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [295] = {
    [sym_sec_heading6] = STATE(121),
    [sym_section6] = STATE(184),
    [aux_sym_script_repeat1] = STATE(326),
    [aux_sym_script_repeat4] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LF] = ACTIONS(644),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(522),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [296] = {
    [aux_sym_script_repeat1] = STATE(266),
    [ts_builtin_sym_end] = ACTIONS(526),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(530),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(526),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [297] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(646),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [298] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section2] = STATE(329),
    [sym_section3] = STATE(328),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(327),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(328),
    [aux_sym_script_repeat8] = STATE(329),
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LF] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(650),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [299] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_section2] = STATE(329),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(327),
    [aux_sym_script_repeat7] = STATE(187),
    [aux_sym_script_repeat8] = STATE(329),
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LF] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(650),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [300] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat1] = STATE(327),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LF] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(650),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [301] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LF] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(652),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [302] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(331),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(330),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(331),
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LF] = ACTIONS(656),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [303] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(330),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LF] = ACTIONS(656),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [304] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_LF] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(658),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [305] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(332),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_LF] = ACTIONS(662),
    [anon_sym_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [306] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_LF] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(666),
    [anon_sym_POUND_POUND] = ACTIONS(666),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(666),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(664),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [307] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(336),
    [sym_section2] = STATE(335),
    [sym_section3] = STATE(334),
    [sym_section4] = STATE(333),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(333),
    [aux_sym_script_repeat7] = STATE(334),
    [aux_sym_script_repeat8] = STATE(335),
    [aux_sym_script_repeat9] = STATE(336),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [308] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(336),
    [sym_section2] = STATE(335),
    [sym_section3] = STATE(334),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(334),
    [aux_sym_script_repeat8] = STATE(335),
    [aux_sym_script_repeat9] = STATE(336),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [309] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(336),
    [sym_section2] = STATE(335),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(335),
    [aux_sym_script_repeat9] = STATE(336),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [310] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(336),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(336),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [311] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [312] = {
    [aux_sym__indent_repeat1] = STATE(312),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(670),
    [anon_sym_] = ACTIONS(672),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [313] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(336),
    [sym_section2] = STATE(335),
    [sym_section3] = STATE(334),
    [sym_section4] = STATE(333),
    [sym_section5] = STATE(337),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(337),
    [aux_sym_script_repeat6] = STATE(333),
    [aux_sym_script_repeat7] = STATE(334),
    [aux_sym_script_repeat8] = STATE(335),
    [aux_sym_script_repeat9] = STATE(336),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [314] = {
    [sym_parenthetical] = STATE(220),
    [sym_spoken] = STATE(220),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(675),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [315] = {
    [aux_sym_script_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_STAR_STAR] = ACTIONS(371),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(371),
    [anon_sym__] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(369),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(371),
    [sym__all_caps] = ACTIONS(371),
    [sym__scene_loc] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(371),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(369),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [316] = {
    [aux_sym_script_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(387),
    [anon_sym_STAR_STAR] = ACTIONS(387),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(387),
    [anon_sym__] = ACTIONS(387),
    [anon_sym_BANG] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(385),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(387),
    [sym__all_caps] = ACTIONS(387),
    [sym__scene_loc] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(387),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(385),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [317] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(586),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [318] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section3] = STATE(340),
    [sym_section4] = STATE(339),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(338),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(339),
    [aux_sym_script_repeat7] = STATE(340),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(677),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [319] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(340),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(338),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(340),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(677),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [320] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(338),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(677),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [321] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(597),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(595),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [322] = {
    [sym_sec_heading4] = STATE(119),
    [sym_sec_heading5] = STATE(120),
    [sym_section4] = STATE(342),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(341),
    [aux_sym_script_repeat5] = STATE(185),
    [aux_sym_script_repeat6] = STATE(342),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [323] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(341),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(597),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [324] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_LF] = ACTIONS(606),
    [anon_sym_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(604),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [325] = {
    [sym_sec_heading5] = STATE(120),
    [sym_section5] = STATE(185),
    [aux_sym_script_repeat1] = STATE(343),
    [aux_sym_script_repeat5] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_LF] = ACTIONS(681),
    [anon_sym_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(606),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [326] = {
    [aux_sym_script_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(613),
    [anon_sym_LF] = ACTIONS(615),
    [anon_sym_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(615),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(613),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [327] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(683),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [328] = {
    [sym_sec_heading2] = STATE(117),
    [sym_sec_heading3] = STATE(118),
    [sym_section2] = STATE(345),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(344),
    [aux_sym_script_repeat7] = STATE(187),
    [aux_sym_script_repeat8] = STATE(345),
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_LF] = ACTIONS(685),
    [anon_sym_POUND] = ACTIONS(687),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [329] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat1] = STATE(344),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_LF] = ACTIONS(685),
    [anon_sym_POUND] = ACTIONS(687),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [330] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LF] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(691),
    [anon_sym_POUND_POUND] = ACTIONS(689),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [331] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(346),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LF] = ACTIONS(693),
    [anon_sym_POUND] = ACTIONS(691),
    [anon_sym_POUND_POUND] = ACTIONS(691),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [332] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(697),
    [anon_sym_POUND_POUND] = ACTIONS(697),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(695),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [333] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(349),
    [sym_section2] = STATE(348),
    [sym_section3] = STATE(347),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(347),
    [aux_sym_script_repeat8] = STATE(348),
    [aux_sym_script_repeat9] = STATE(349),
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [334] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(349),
    [sym_section2] = STATE(348),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(348),
    [aux_sym_script_repeat9] = STATE(349),
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [335] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(349),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(349),
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [336] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [337] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(349),
    [sym_section2] = STATE(348),
    [sym_section3] = STATE(347),
    [sym_section4] = STATE(350),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(350),
    [aux_sym_script_repeat7] = STATE(347),
    [aux_sym_script_repeat8] = STATE(348),
    [aux_sym_script_repeat9] = STATE(349),
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [338] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LF] = ACTIONS(654),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(652),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [339] = {
    [sym_sec_heading3] = STATE(118),
    [sym_sec_heading4] = STATE(119),
    [sym_section3] = STATE(352),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(351),
    [aux_sym_script_repeat6] = STATE(186),
    [aux_sym_script_repeat7] = STATE(352),
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LF] = ACTIONS(701),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [340] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(351),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LF] = ACTIONS(701),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(654),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [341] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_LF] = ACTIONS(660),
    [anon_sym_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(658),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [342] = {
    [sym_sec_heading4] = STATE(119),
    [sym_section4] = STATE(186),
    [aux_sym_script_repeat1] = STATE(353),
    [aux_sym_script_repeat6] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_LF] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(660),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [343] = {
    [aux_sym_script_repeat1] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_LF] = ACTIONS(666),
    [anon_sym_POUND] = ACTIONS(666),
    [anon_sym_POUND_POUND] = ACTIONS(666),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(666),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(664),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [344] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(705),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(705),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [345] = {
    [sym_sec_heading2] = STATE(117),
    [sym_section2] = STATE(188),
    [aux_sym_script_repeat1] = STATE(354),
    [aux_sym_script_repeat8] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(705),
    [anon_sym_LF] = ACTIONS(707),
    [anon_sym_POUND] = ACTIONS(709),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [346] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(711),
    [anon_sym_LF] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(713),
    [anon_sym_POUND_POUND] = ACTIONS(711),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [347] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(356),
    [sym_section2] = STATE(355),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(355),
    [aux_sym_script_repeat9] = STATE(356),
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [348] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(356),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(356),
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [349] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [350] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(356),
    [sym_section2] = STATE(355),
    [sym_section3] = STATE(357),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(357),
    [aux_sym_script_repeat8] = STATE(355),
    [aux_sym_script_repeat9] = STATE(356),
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [351] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LF] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(691),
    [anon_sym_POUND_POUND] = ACTIONS(689),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [352] = {
    [sym_sec_heading3] = STATE(118),
    [sym_section3] = STATE(187),
    [aux_sym_script_repeat1] = STATE(358),
    [aux_sym_script_repeat7] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LF] = ACTIONS(717),
    [anon_sym_POUND] = ACTIONS(691),
    [anon_sym_POUND_POUND] = ACTIONS(691),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [353] = {
    [aux_sym_script_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_POUND] = ACTIONS(697),
    [anon_sym_POUND_POUND] = ACTIONS(697),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(695),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [354] = {
    [aux_sym_script_repeat1] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(719),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [355] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(359),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(359),
    [ts_builtin_sym_end] = ACTIONS(721),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [356] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(721),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [357] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(359),
    [sym_section2] = STATE(360),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(360),
    [aux_sym_script_repeat9] = STATE(359),
    [ts_builtin_sym_end] = ACTIONS(721),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [358] = {
    [aux_sym_script_repeat1] = STATE(252),
    [ts_builtin_sym_end] = ACTIONS(711),
    [anon_sym_LF] = ACTIONS(713),
    [anon_sym_POUND] = ACTIONS(713),
    [anon_sym_POUND_POUND] = ACTIONS(711),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [359] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(723),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [360] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(361),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(361),
    [ts_builtin_sym_end] = ACTIONS(723),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [361] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(725),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_script, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(36),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [49] = {.count = 1, .reusable = true}, SHIFT(5),
  [51] = {.count = 1, .reusable = true}, SHIFT(6),
  [53] = {.count = 1, .reusable = true}, SHIFT(48),
  [55] = {.count = 1, .reusable = true}, SHIFT(49),
  [57] = {.count = 1, .reusable = true}, SHIFT(50),
  [59] = {.count = 1, .reusable = true}, SHIFT(51),
  [61] = {.count = 1, .reusable = false}, SHIFT(52),
  [63] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [65] = {.count = 1, .reusable = false}, SHIFT(53),
  [67] = {.count = 1, .reusable = false}, SHIFT(54),
  [69] = {.count = 1, .reusable = true}, SHIFT(55),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(56),
  [75] = {.count = 1, .reusable = false}, SHIFT(57),
  [77] = {.count = 1, .reusable = false}, SHIFT(58),
  [79] = {.count = 1, .reusable = false}, SHIFT(59),
  [81] = {.count = 1, .reusable = false}, SHIFT(60),
  [83] = {.count = 1, .reusable = false}, SHIFT(61),
  [85] = {.count = 1, .reusable = false}, SHIFT(62),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [89] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [91] = {.count = 1, .reusable = false}, SHIFT(63),
  [93] = {.count = 1, .reusable = false}, SHIFT(64),
  [95] = {.count = 1, .reusable = false}, SHIFT(65),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_action, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__text, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(67),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_scene_heading, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(69),
  [107] = {.count = 1, .reusable = false}, SHIFT(72),
  [109] = {.count = 1, .reusable = false}, SHIFT(73),
  [111] = {.count = 1, .reusable = false}, SHIFT(74),
  [113] = {.count = 1, .reusable = false}, SHIFT(75),
  [115] = {.count = 1, .reusable = false}, SHIFT(76),
  [117] = {.count = 1, .reusable = false}, SHIFT(77),
  [119] = {.count = 1, .reusable = false}, SHIFT(78),
  [121] = {.count = 1, .reusable = true}, SHIFT(79),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_script, 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(81),
  [127] = {.count = 1, .reusable = true}, SHIFT(17),
  [129] = {.count = 1, .reusable = true}, SHIFT(16),
  [131] = {.count = 1, .reusable = true}, SHIFT(15),
  [133] = {.count = 1, .reusable = true}, SHIFT(14),
  [135] = {.count = 1, .reusable = true}, SHIFT(13),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_title_page, 1),
  [139] = {.count = 1, .reusable = true}, SHIFT(99),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__text, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(101),
  [145] = {.count = 1, .reusable = true}, SHIFT(102),
  [147] = {.count = 1, .reusable = true}, SHIFT(103),
  [149] = {.count = 1, .reusable = true}, SHIFT(104),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__forced_action, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__forced_character, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym__forced_scene, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__forced_scene, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__not_special, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__not_special, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_scene_heading, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_sec_heading1, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_sec_heading2, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_sec_heading3, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_sec_heading4, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_sec_heading5, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_sec_heading6, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__dialogue_block, 2),
  [179] = {.count = 1, .reusable = false}, SHIFT(106),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym__dialogue_block, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(107),
  [185] = {.count = 1, .reusable = false}, SHIFT(111),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__action_block, 2),
  [189] = {.count = 1, .reusable = false}, SHIFT(112),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__action_block, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_normal_txt, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_normal_txt, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__text, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(114),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_scene, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_scene, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 2),
  [207] = {.count = 1, .reusable = false}, SHIFT(122),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 2),
  [213] = {.count = 1, .reusable = false}, SHIFT(129),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 2),
  [219] = {.count = 1, .reusable = false}, SHIFT(135),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 2),
  [225] = {.count = 1, .reusable = false}, SHIFT(140),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 2),
  [231] = {.count = 1, .reusable = false}, SHIFT(144),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_section6, 2),
  [237] = {.count = 1, .reusable = false}, SHIFT(147),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_section6, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [243] = {.count = 1, .reusable = false}, SHIFT(149),
  [245] = {.count = 1, .reusable = false}, SHIFT(158),
  [247] = {.count = 1, .reusable = true}, SHIFT(159),
  [249] = {.count = 1, .reusable = false}, SHIFT(163),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(81),
  [256] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(2),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(3),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(4),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(5),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(6),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(7),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(8),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(10),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(11),
  [287] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat3, 2),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat3, 2), SHIFT_REPEAT(9),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat3, 2), SHIFT_REPEAT(12),
  [297] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat3, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat4, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat4, 2),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat4, 2), SHIFT_REPEAT(18),
  [306] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat5, 2),
  [308] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat5, 2),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat5, 2), SHIFT_REPEAT(17),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat6, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat6, 2),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat6, 2), SHIFT_REPEAT(16),
  [320] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat7, 2),
  [322] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat7, 2),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat7, 2), SHIFT_REPEAT(15),
  [327] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat8, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat8, 2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat8, 2), SHIFT_REPEAT(14),
  [334] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat9, 2),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat9, 2), SHIFT_REPEAT(13),
  [339] = {.count = 1, .reusable = false}, REDUCE(aux_sym_title_page_repeat1, 2),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_title_page_repeat1, 2), SHIFT_REPEAT(19),
  [344] = {.count = 2, .reusable = false}, REDUCE(aux_sym_title_page_repeat1, 2), SHIFT_REPEAT(19),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_centered_action, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__text, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_italic_txt, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_italic_txt, 3),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_bold_txt, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_bold_txt, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_bold_and_italic_txt, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_bold_and_italic_txt, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_underlined_txt, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_underlined_txt, 3),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_scene_heading, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__dialogue_block, 3),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__dialogue_block, 3),
  [373] = {.count = 1, .reusable = true}, SHIFT(165),
  [375] = {.count = 1, .reusable = false}, SHIFT(166),
  [377] = {.count = 1, .reusable = false}, SHIFT(167),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_spoken, 1),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__delimit, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__delimit, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__action_block, 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__action_block, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(3),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(4),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(5),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(6),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(67),
  [406] = {.count = 1, .reusable = true}, SHIFT(169),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_scene, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_scene, 3),
  [412] = {.count = 1, .reusable = false}, SHIFT(171),
  [414] = {.count = 1, .reusable = false}, SHIFT(172),
  [416] = {.count = 1, .reusable = false}, SHIFT(173),
  [418] = {.count = 1, .reusable = false}, SHIFT(174),
  [420] = {.count = 1, .reusable = false}, SHIFT(175),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 3),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(176),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 3),
  [429] = {.count = 1, .reusable = false}, SHIFT(177),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 3),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 3),
  [435] = {.count = 1, .reusable = false}, SHIFT(189),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 3),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 3),
  [441] = {.count = 1, .reusable = false}, SHIFT(194),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 3),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 3),
  [447] = {.count = 1, .reusable = false}, SHIFT(198),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 3),
  [453] = {.count = 1, .reusable = false}, SHIFT(201),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_section6, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_section6, 3),
  [459] = {.count = 1, .reusable = false}, SHIFT(203),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(149),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_script, 3),
  [466] = {.count = 1, .reusable = true}, SHIFT(211),
  [468] = {.count = 1, .reusable = false}, SHIFT(212),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_k_v_pair, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_k_v_pair, 3),
  [474] = {.count = 1, .reusable = false}, SHIFT(215),
  [476] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2),
  [478] = {.count = 1, .reusable = true}, SHIFT(218),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 4),
  [482] = {.count = 1, .reusable = false}, SHIFT(221),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym__numbering, 3),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 4),
  [488] = {.count = 1, .reusable = false}, SHIFT(246),
  [490] = {.count = 1, .reusable = false}, SHIFT(247),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 4),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 4),
  [496] = {.count = 1, .reusable = false}, SHIFT(252),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 4),
  [500] = {.count = 1, .reusable = false}, SHIFT(253),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 4),
  [504] = {.count = 1, .reusable = false}, SHIFT(257),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 4),
  [508] = {.count = 1, .reusable = false}, SHIFT(258),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 4),
  [512] = {.count = 1, .reusable = false}, SHIFT(261),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 4),
  [516] = {.count = 1, .reusable = false}, SHIFT(262),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 4),
  [520] = {.count = 1, .reusable = false}, SHIFT(264),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 4),
  [524] = {.count = 1, .reusable = false}, SHIFT(265),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_section6, 4),
  [528] = {.count = 1, .reusable = false}, SHIFT(266),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_section6, 4),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_script, 4),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym__indent, 2),
  [536] = {.count = 1, .reusable = false}, SHIFT(273),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_value, 1),
  [540] = {.count = 1, .reusable = false}, SHIFT(274),
  [542] = {.count = 1, .reusable = false}, REDUCE(aux_sym__value_group_repeat1, 2),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym__value_group, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym__value_group, 2),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym__value_group_repeat1, 2), SHIFT_REPEAT(158),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_parenthetical, 3),
  [553] = {.count = 1, .reusable = false}, SHIFT(276),
  [555] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dialogue_repeat1, 2),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 5),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dialogue_repeat1, 2), SHIFT_REPEAT(278),
  [562] = {.count = 1, .reusable = false}, SHIFT(279),
  [564] = {.count = 1, .reusable = false}, SHIFT(282),
  [566] = {.count = 1, .reusable = false}, SHIFT(287),
  [568] = {.count = 1, .reusable = false}, SHIFT(291),
  [570] = {.count = 1, .reusable = false}, SHIFT(294),
  [572] = {.count = 1, .reusable = false}, SHIFT(296),
  [574] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(246),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 5),
  [579] = {.count = 1, .reusable = false}, SHIFT(297),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 5),
  [583] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(252),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 5),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 5),
  [590] = {.count = 1, .reusable = false}, SHIFT(301),
  [592] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(257),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 5),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 5),
  [599] = {.count = 1, .reusable = false}, SHIFT(304),
  [601] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(261),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 5),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 5),
  [608] = {.count = 1, .reusable = false}, SHIFT(306),
  [610] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(264),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 5),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 5),
  [617] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(266),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_script, 5),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym__indent, 3),
  [624] = {.count = 1, .reusable = false}, SHIFT(312),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym__value_group, 3),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym__value_group, 3),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 6),
  [632] = {.count = 1, .reusable = false}, SHIFT(314),
  [634] = {.count = 1, .reusable = false}, SHIFT(315),
  [636] = {.count = 1, .reusable = false}, SHIFT(316),
  [638] = {.count = 1, .reusable = false}, SHIFT(317),
  [640] = {.count = 1, .reusable = false}, SHIFT(321),
  [642] = {.count = 1, .reusable = false}, SHIFT(324),
  [644] = {.count = 1, .reusable = false}, SHIFT(326),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 6),
  [648] = {.count = 1, .reusable = false}, SHIFT(327),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 6),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 6),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 6),
  [656] = {.count = 1, .reusable = false}, SHIFT(330),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 6),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 6),
  [662] = {.count = 1, .reusable = false}, SHIFT(332),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 6),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 6),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_script, 6),
  [670] = {.count = 1, .reusable = false}, REDUCE(aux_sym__indent_repeat1, 2),
  [672] = {.count = 2, .reusable = false}, REDUCE(aux_sym__indent_repeat1, 2), SHIFT_REPEAT(312),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 7),
  [677] = {.count = 1, .reusable = false}, SHIFT(338),
  [679] = {.count = 1, .reusable = false}, SHIFT(341),
  [681] = {.count = 1, .reusable = false}, SHIFT(343),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 7),
  [685] = {.count = 1, .reusable = false}, SHIFT(344),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 7),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 7),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 7),
  [693] = {.count = 1, .reusable = false}, SHIFT(346),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 7),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 7),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_script, 7),
  [701] = {.count = 1, .reusable = false}, SHIFT(351),
  [703] = {.count = 1, .reusable = false}, SHIFT(353),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 8),
  [707] = {.count = 1, .reusable = false}, SHIFT(354),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 8),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 8),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 8),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_script, 8),
  [717] = {.count = 1, .reusable = false}, SHIFT(358),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 9),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_script, 9),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_script, 10),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_script, 11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Fountain() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
