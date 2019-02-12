#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 274
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
  aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH = 19,
  sym__all_caps = 20,
  sym__scene_loc = 21,
  sym_scene_number = 22,
  anon_sym_POUND = 23,
  sym__section_heading_text = 24,
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
  [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = "/((\\\\(\\*|_))|[A-Za-z0-9.,'\\-!? &;])+/",
  [sym__all_caps] = "_all_caps",
  [sym__scene_loc] = "_scene_loc",
  [sym_scene_number] = "scene_number",
  [anon_sym_POUND] = "#",
  [sym__section_heading_text] = "_section_heading_text",
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
  [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = {
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
  [sym__section_heading_text] = {
    .visible = false,
    .named = true,
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
          lookahead == '&' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
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
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH);
      if (lookahead == '\\')
        ADVANCE(105);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
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
          ('&' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__section_heading_text);
      if (lookahead == '[')
        ADVANCE(123);
      if (lookahead == ' ' ||
          ('&' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__section_heading_text);
      if (lookahead == '[' ||
          lookahead == ']')
        ADVANCE(124);
      if (lookahead == ' ' ||
          ('&' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(90);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__section_heading_text);
      if (lookahead == ' ' ||
          ('&' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__section_heading_text);
      if (lookahead == '[')
        ADVANCE(124);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead == ' ' ||
          ('&' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(90);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__section_heading_text);
      if (lookahead == ']')
        ADVANCE(124);
      if (lookahead == ' ' ||
          ('&' <= lookahead && lookahead <= ')') ||
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
          lookahead == '&' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
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
          lookahead == '&' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
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
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(169);
      if (lookahead == 'A')
        ADVANCE(172);
      if (lookahead == 'C')
        ADVANCE(173);
      if (lookahead == 'D')
        ADVANCE(174);
      if (lookahead == 'S')
        ADVANCE(175);
      if (lookahead == 'T')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 169:
      if (lookahead == ' ')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == ' ')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 172:
      if (lookahead == 'u')
        ADVANCE(34);
      END_STATE();
    case 173:
      if (lookahead == 'o')
        ADVANCE(41);
      if (lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 174:
      if (lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 175:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 176:
      if (lookahead == 'i')
        ADVANCE(84);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == ' ')
        ADVANCE(179);
      if (lookahead == '[')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 179:
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
  [72] = {.lex_state = 164},
  [73] = {.lex_state = 164},
  [74] = {.lex_state = 164},
  [75] = {.lex_state = 164},
  [76] = {.lex_state = 164},
  [77] = {.lex_state = 164},
  [78] = {.lex_state = 164},
  [79] = {.lex_state = 167},
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
  [116] = {.lex_state = 164},
  [117] = {.lex_state = 129},
  [118] = {.lex_state = 130},
  [119] = {.lex_state = 136},
  [120] = {.lex_state = 137},
  [121] = {.lex_state = 143},
  [122] = {.lex_state = 148},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 129},
  [125] = {.lex_state = 130},
  [126] = {.lex_state = 136},
  [127] = {.lex_state = 137},
  [128] = {.lex_state = 143},
  [129] = {.lex_state = 148},
  [130] = {.lex_state = 129},
  [131] = {.lex_state = 130},
  [132] = {.lex_state = 136},
  [133] = {.lex_state = 137},
  [134] = {.lex_state = 143},
  [135] = {.lex_state = 129},
  [136] = {.lex_state = 130},
  [137] = {.lex_state = 136},
  [138] = {.lex_state = 137},
  [139] = {.lex_state = 129},
  [140] = {.lex_state = 130},
  [141] = {.lex_state = 136},
  [142] = {.lex_state = 129},
  [143] = {.lex_state = 130},
  [144] = {.lex_state = 129},
  [145] = {.lex_state = 130},
  [146] = {.lex_state = 136},
  [147] = {.lex_state = 137},
  [148] = {.lex_state = 143},
  [149] = {.lex_state = 148},
  [150] = {.lex_state = 152},
  [151] = {.lex_state = 155},
  [152] = {.lex_state = 168},
  [153] = {.lex_state = 107},
  [154] = {.lex_state = 97},
  [155] = {.lex_state = 107},
  [156] = {.lex_state = 97},
  [157] = {.lex_state = 164},
  [158] = {.lex_state = 157},
  [159] = {.lex_state = 177},
  [160] = {.lex_state = 98},
  [161] = {.lex_state = 98},
  [162] = {.lex_state = 97},
  [163] = {.lex_state = 97},
  [164] = {.lex_state = 130},
  [165] = {.lex_state = 136},
  [166] = {.lex_state = 137},
  [167] = {.lex_state = 143},
  [168] = {.lex_state = 148},
  [169] = {.lex_state = 152},
  [170] = {.lex_state = 130},
  [171] = {.lex_state = 136},
  [172] = {.lex_state = 137},
  [173] = {.lex_state = 143},
  [174] = {.lex_state = 148},
  [175] = {.lex_state = 130},
  [176] = {.lex_state = 136},
  [177] = {.lex_state = 137},
  [178] = {.lex_state = 143},
  [179] = {.lex_state = 130},
  [180] = {.lex_state = 136},
  [181] = {.lex_state = 137},
  [182] = {.lex_state = 130},
  [183] = {.lex_state = 136},
  [184] = {.lex_state = 130},
  [185] = {.lex_state = 130},
  [186] = {.lex_state = 136},
  [187] = {.lex_state = 137},
  [188] = {.lex_state = 143},
  [189] = {.lex_state = 148},
  [190] = {.lex_state = 152},
  [191] = {.lex_state = 155},
  [192] = {.lex_state = 178},
  [193] = {.lex_state = 97},
  [194] = {.lex_state = 97},
  [195] = {.lex_state = 97},
  [196] = {.lex_state = 168},
  [197] = {.lex_state = 97},
  [198] = {.lex_state = 129},
  [199] = {.lex_state = 97},
  [200] = {.lex_state = 97},
  [201] = {.lex_state = 97},
  [202] = {.lex_state = 98},
  [203] = {.lex_state = 97},
  [204] = {.lex_state = 136},
  [205] = {.lex_state = 137},
  [206] = {.lex_state = 143},
  [207] = {.lex_state = 148},
  [208] = {.lex_state = 152},
  [209] = {.lex_state = 136},
  [210] = {.lex_state = 137},
  [211] = {.lex_state = 143},
  [212] = {.lex_state = 148},
  [213] = {.lex_state = 136},
  [214] = {.lex_state = 137},
  [215] = {.lex_state = 143},
  [216] = {.lex_state = 136},
  [217] = {.lex_state = 137},
  [218] = {.lex_state = 136},
  [219] = {.lex_state = 136},
  [220] = {.lex_state = 137},
  [221] = {.lex_state = 143},
  [222] = {.lex_state = 148},
  [223] = {.lex_state = 152},
  [224] = {.lex_state = 155},
  [225] = {.lex_state = 178},
  [226] = {.lex_state = 97},
  [227] = {.lex_state = 130},
  [228] = {.lex_state = 98},
  [229] = {.lex_state = 97},
  [230] = {.lex_state = 98},
  [231] = {.lex_state = 137},
  [232] = {.lex_state = 143},
  [233] = {.lex_state = 148},
  [234] = {.lex_state = 152},
  [235] = {.lex_state = 137},
  [236] = {.lex_state = 143},
  [237] = {.lex_state = 148},
  [238] = {.lex_state = 137},
  [239] = {.lex_state = 143},
  [240] = {.lex_state = 137},
  [241] = {.lex_state = 137},
  [242] = {.lex_state = 143},
  [243] = {.lex_state = 148},
  [244] = {.lex_state = 152},
  [245] = {.lex_state = 155},
  [246] = {.lex_state = 178},
  [247] = {.lex_state = 136},
  [248] = {.lex_state = 98},
  [249] = {.lex_state = 143},
  [250] = {.lex_state = 148},
  [251] = {.lex_state = 152},
  [252] = {.lex_state = 143},
  [253] = {.lex_state = 148},
  [254] = {.lex_state = 143},
  [255] = {.lex_state = 143},
  [256] = {.lex_state = 148},
  [257] = {.lex_state = 152},
  [258] = {.lex_state = 155},
  [259] = {.lex_state = 137},
  [260] = {.lex_state = 148},
  [261] = {.lex_state = 152},
  [262] = {.lex_state = 148},
  [263] = {.lex_state = 148},
  [264] = {.lex_state = 152},
  [265] = {.lex_state = 155},
  [266] = {.lex_state = 143},
  [267] = {.lex_state = 152},
  [268] = {.lex_state = 152},
  [269] = {.lex_state = 155},
  [270] = {.lex_state = 148},
  [271] = {.lex_state = 155},
  [272] = {.lex_state = 152},
  [273] = {.lex_state = 155},
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(53),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [4] = {
    [sym__general_text] = STATE(49),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(55),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [5] = {
    [sym__general_text] = STATE(50),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(57),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [6] = {
    [sym__general_text] = STATE(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(59),
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(69),
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
    [sym__section_heading_text] = ACTIONS(75),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [14] = {
    [sym__section_heading_text] = ACTIONS(77),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [15] = {
    [sym__section_heading_text] = ACTIONS(79),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [16] = {
    [sym__section_heading_text] = ACTIONS(81),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [17] = {
    [sym__section_heading_text] = ACTIONS(83),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [18] = {
    [sym__section_heading_text] = ACTIONS(85),
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(161),
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(195),
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
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
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
    [sym__raw_script] = STATE(117),
    [sym__dialogue_block] = STATE(117),
    [sym__action_block] = STATE(117),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(118),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(123),
    [sym_section3] = STATE(122),
    [sym_section4] = STATE(121),
    [sym_section5] = STATE(120),
    [sym_section6] = STATE(119),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(117),
    [aux_sym_script_repeat3] = STATE(118),
    [aux_sym_script_repeat4] = STATE(119),
    [aux_sym_script_repeat5] = STATE(120),
    [aux_sym_script_repeat6] = STATE(121),
    [aux_sym_script_repeat7] = STATE(122),
    [aux_sym_script_repeat8] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LF] = ACTIONS(207),
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
    [sym__raw_script] = STATE(124),
    [sym__dialogue_block] = STATE(124),
    [sym__action_block] = STATE(124),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(125),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(129),
    [sym_section4] = STATE(128),
    [sym_section5] = STATE(127),
    [sym_section6] = STATE(126),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(124),
    [aux_sym_script_repeat3] = STATE(125),
    [aux_sym_script_repeat4] = STATE(126),
    [aux_sym_script_repeat5] = STATE(127),
    [aux_sym_script_repeat6] = STATE(128),
    [aux_sym_script_repeat7] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(207),
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
    [anon_sym_POUND] = ACTIONS(213),
    [anon_sym_POUND_POUND] = ACTIONS(213),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [74] = {
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
    [sym__raw_script] = STATE(130),
    [sym__dialogue_block] = STATE(130),
    [sym__action_block] = STATE(130),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(131),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(134),
    [sym_section5] = STATE(133),
    [sym_section6] = STATE(132),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(130),
    [aux_sym_script_repeat3] = STATE(131),
    [aux_sym_script_repeat4] = STATE(132),
    [aux_sym_script_repeat5] = STATE(133),
    [aux_sym_script_repeat6] = STATE(134),
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_LF] = ACTIONS(207),
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
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_POUND_POUND] = ACTIONS(217),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(217),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [75] = {
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
    [sym__raw_script] = STATE(135),
    [sym__dialogue_block] = STATE(135),
    [sym__action_block] = STATE(135),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(136),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(138),
    [sym_section6] = STATE(137),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(135),
    [aux_sym_script_repeat3] = STATE(136),
    [aux_sym_script_repeat4] = STATE(137),
    [aux_sym_script_repeat5] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(207),
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
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(221),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [76] = {
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
    [sym__raw_script] = STATE(139),
    [sym__dialogue_block] = STATE(139),
    [sym__action_block] = STATE(139),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(140),
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(141),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(139),
    [aux_sym_script_repeat3] = STATE(140),
    [aux_sym_script_repeat4] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(207),
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
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_POUND_POUND] = ACTIONS(225),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(225),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(225),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(225),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [77] = {
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
    [sym__raw_script] = STATE(142),
    [sym__dialogue_block] = STATE(142),
    [sym__action_block] = STATE(142),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(143),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(142),
    [aux_sym_script_repeat3] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(207),
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
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_POUND_POUND] = ACTIONS(229),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(229),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(229),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(229),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(227),
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
    [sym__raw_script] = STATE(144),
    [sym__dialogue_block] = STATE(144),
    [sym__action_block] = STATE(144),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(145),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(149),
    [sym_section4] = STATE(148),
    [sym_section5] = STATE(147),
    [sym_section6] = STATE(146),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(144),
    [aux_sym_script_repeat3] = STATE(145),
    [aux_sym_script_repeat4] = STATE(146),
    [aux_sym_script_repeat5] = STATE(147),
    [aux_sym_script_repeat6] = STATE(148),
    [aux_sym_script_repeat7] = STATE(149),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LF] = ACTIONS(207),
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
    [sym__value_group] = STATE(154),
    [sym__indent] = STATE(155),
    [aux_sym__value_group_repeat1] = STATE(156),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_] = ACTIONS(235),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [80] = {
    [aux_sym_script_repeat1] = STATE(157),
    [anon_sym_LF] = ACTIONS(237),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [81] = {
    [aux_sym_script_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(244),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(244),
    [anon_sym__] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(244),
    [sym__all_caps] = ACTIONS(244),
    [sym__scene_loc] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(239),
    [anon_sym_Title] = ACTIONS(239),
    [anon_sym_Credit] = ACTIONS(239),
    [anon_sym_Author] = ACTIONS(244),
    [anon_sym_Source] = ACTIONS(239),
    [anon_sym_Draftdate] = ACTIONS(239),
    [anon_sym_Contact] = ACTIONS(239),
    [anon_sym_Authors] = ACTIONS(239),
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
    [sym_scene] = STATE(145),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(149),
    [sym_section4] = STATE(148),
    [sym_section5] = STATE(147),
    [sym_section6] = STATE(146),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(145),
    [aux_sym_script_repeat4] = STATE(146),
    [aux_sym_script_repeat5] = STATE(147),
    [aux_sym_script_repeat6] = STATE(148),
    [aux_sym_script_repeat7] = STATE(149),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(149),
    [sym_section4] = STATE(148),
    [sym_section5] = STATE(147),
    [sym_section6] = STATE(146),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(146),
    [aux_sym_script_repeat5] = STATE(147),
    [aux_sym_script_repeat6] = STATE(148),
    [aux_sym_script_repeat7] = STATE(149),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(149),
    [sym_section4] = STATE(148),
    [sym_section5] = STATE(147),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(147),
    [aux_sym_script_repeat6] = STATE(148),
    [aux_sym_script_repeat7] = STATE(149),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(149),
    [sym_section4] = STATE(148),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(148),
    [aux_sym_script_repeat7] = STATE(149),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(149),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(149),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(150),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(150),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym_section1] = STATE(151),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(254),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(257),
    [anon_sym__] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(246),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(269),
    [sym__all_caps] = ACTIONS(272),
    [sym__scene_loc] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(275),
    [anon_sym_POUND_POUND] = ACTIONS(275),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(275),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(275),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(275),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(246),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [91] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [aux_sym_script_repeat3] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(279),
    [sym__scene_loc] = ACTIONS(282),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_POUND_POUND] = ACTIONS(285),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(285),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(285),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(285),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(277),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [92] = {
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_POUND_POUND] = ACTIONS(289),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(289),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(289),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(289),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(291),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [93] = {
    [sym_sec_heading5] = STATE(32),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(296),
    [anon_sym_POUND_POUND] = ACTIONS(296),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(296),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(296),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(298),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [94] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_POUND_POUND] = ACTIONS(303),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(303),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(305),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [95] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_POUND_POUND] = ACTIONS(310),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(312),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [96] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_POUND_POUND] = ACTIONS(319),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [97] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(324),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [98] = {
    [sym_k_v_pair] = STATE(98),
    [sym_key] = STATE(35),
    [aux_sym_title_page_repeat1] = STATE(98),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_Title] = ACTIONS(329),
    [anon_sym_Credit] = ACTIONS(329),
    [anon_sym_Author] = ACTIONS(332),
    [anon_sym_Source] = ACTIONS(329),
    [anon_sym_Draftdate] = ACTIONS(329),
    [anon_sym_Contact] = ACTIONS(329),
    [anon_sym_Authors] = ACTIONS(329),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [99] = {
    [anon_sym_LF] = ACTIONS(335),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [100] = {
    [sym_normal_txt] = STATE(158),
    [sym__emphasis] = STATE(158),
    [sym_italic_txt] = STATE(158),
    [sym_bold_txt] = STATE(158),
    [sym_bold_and_italic_txt] = STATE(158),
    [sym_underlined_txt] = STATE(158),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(158),
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(49),
    [anon_sym__] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(101),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [101] = {
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(339),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(341),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [102] = {
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_STAR_STAR] = ACTIONS(343),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(345),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [103] = {
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(347),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(349),
    [anon_sym__] = ACTIONS(349),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(349),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [104] = {
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_STAR_STAR] = ACTIONS(351),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(353),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [105] = {
    [anon_sym_LF] = ACTIONS(355),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [106] = {
    [aux_sym_script_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_STAR_STAR] = ACTIONS(359),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(359),
    [anon_sym__] = ACTIONS(359),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(357),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(359),
    [sym__all_caps] = ACTIONS(359),
    [sym__scene_loc] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(359),
    [anon_sym_POUND_POUND] = ACTIONS(359),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(359),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(359),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(359),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(357),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [107] = {
    [sym__general_text] = STATE(159),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(361),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [108] = {
    [anon_sym_LF] = ACTIONS(363),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [109] = {
    [aux_sym_dialogue_repeat1] = STATE(162),
    [anon_sym_LF] = ACTIONS(365),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [110] = {
    [anon_sym_LF] = ACTIONS(367),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [111] = {
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
  [112] = {
    [aux_sym_script_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_STAR_STAR] = ACTIONS(375),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(375),
    [anon_sym__] = ACTIONS(375),
    [anon_sym_BANG] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(375),
    [sym__all_caps] = ACTIONS(375),
    [sym__scene_loc] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_POUND_POUND] = ACTIONS(375),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(375),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(375),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(375),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(373),
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
    [anon_sym_LF] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_STAR_STAR] = ACTIONS(382),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(385),
    [anon_sym__] = ACTIONS(388),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(391),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [114] = {
    [anon_sym_POUND] = ACTIONS(394),
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
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(396),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [sym__all_caps] = ACTIONS(27),
    [sym__scene_loc] = ACTIONS(396),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_POUND_POUND] = ACTIONS(398),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(398),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(398),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(398),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(396),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [116] = {
    [aux_sym_script_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(244),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(244),
    [anon_sym__] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [aux_sym_SLASH_LBRACK_CARET_BANG_AT_DOT_GT_LPAREN_POUND_EQ_STAR_TILDE_BSLASHn_RBRACK_SLASH] = ACTIONS(244),
    [sym__all_caps] = ACTIONS(244),
    [sym__scene_loc] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(244),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(239),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [117] = {
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
    [sym_scene] = STATE(164),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(169),
    [sym_section3] = STATE(168),
    [sym_section4] = STATE(167),
    [sym_section5] = STATE(166),
    [sym_section6] = STATE(165),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(164),
    [aux_sym_script_repeat4] = STATE(165),
    [aux_sym_script_repeat5] = STATE(166),
    [aux_sym_script_repeat6] = STATE(167),
    [aux_sym_script_repeat7] = STATE(168),
    [aux_sym_script_repeat8] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(403),
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
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [118] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(169),
    [sym_section3] = STATE(168),
    [sym_section4] = STATE(167),
    [sym_section5] = STATE(166),
    [sym_section6] = STATE(165),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(165),
    [aux_sym_script_repeat5] = STATE(166),
    [aux_sym_script_repeat6] = STATE(167),
    [aux_sym_script_repeat7] = STATE(168),
    [aux_sym_script_repeat8] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [119] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(169),
    [sym_section3] = STATE(168),
    [sym_section4] = STATE(167),
    [sym_section5] = STATE(166),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(166),
    [aux_sym_script_repeat6] = STATE(167),
    [aux_sym_script_repeat7] = STATE(168),
    [aux_sym_script_repeat8] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [120] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section2] = STATE(169),
    [sym_section3] = STATE(168),
    [sym_section4] = STATE(167),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(167),
    [aux_sym_script_repeat7] = STATE(168),
    [aux_sym_script_repeat8] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [121] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section2] = STATE(169),
    [sym_section3] = STATE(168),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(168),
    [aux_sym_script_repeat8] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [122] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section2] = STATE(169),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [123] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [124] = {
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
    [sym_scene] = STATE(170),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(174),
    [sym_section4] = STATE(173),
    [sym_section5] = STATE(172),
    [sym_section6] = STATE(171),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(170),
    [aux_sym_script_repeat4] = STATE(171),
    [aux_sym_script_repeat5] = STATE(172),
    [aux_sym_script_repeat6] = STATE(173),
    [aux_sym_script_repeat7] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(407),
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
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [125] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(174),
    [sym_section4] = STATE(173),
    [sym_section5] = STATE(172),
    [sym_section6] = STATE(171),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(171),
    [aux_sym_script_repeat5] = STATE(172),
    [aux_sym_script_repeat6] = STATE(173),
    [aux_sym_script_repeat7] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [126] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(174),
    [sym_section4] = STATE(173),
    [sym_section5] = STATE(172),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(172),
    [aux_sym_script_repeat6] = STATE(173),
    [aux_sym_script_repeat7] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [127] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section3] = STATE(174),
    [sym_section4] = STATE(173),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(173),
    [aux_sym_script_repeat7] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [128] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section3] = STATE(174),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [129] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [130] = {
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
    [sym_scene] = STATE(175),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(178),
    [sym_section5] = STATE(177),
    [sym_section6] = STATE(176),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(175),
    [aux_sym_script_repeat4] = STATE(176),
    [aux_sym_script_repeat5] = STATE(177),
    [aux_sym_script_repeat6] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(411),
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
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [131] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(178),
    [sym_section5] = STATE(177),
    [sym_section6] = STATE(176),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(176),
    [aux_sym_script_repeat5] = STATE(177),
    [aux_sym_script_repeat6] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [132] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(178),
    [sym_section5] = STATE(177),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(177),
    [aux_sym_script_repeat6] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [133] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section4] = STATE(178),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [134] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(413),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [135] = {
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
    [sym_scene] = STATE(179),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(181),
    [sym_section6] = STATE(180),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(179),
    [aux_sym_script_repeat4] = STATE(180),
    [aux_sym_script_repeat5] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(415),
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
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [136] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(181),
    [sym_section6] = STATE(180),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(180),
    [aux_sym_script_repeat5] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [137] = {
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(181),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [138] = {
    [sym_sec_heading5] = STATE(32),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(417),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [139] = {
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
    [sym_scene] = STATE(182),
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(183),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(182),
    [aux_sym_script_repeat4] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(419),
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
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [140] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(183),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [141] = {
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(421),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [142] = {
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
    [sym_scene] = STATE(184),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(423),
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
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(423),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [143] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [aux_sym_script_repeat3] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(425),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(423),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [144] = {
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
    [sym_scene] = STATE(185),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(189),
    [sym_section4] = STATE(188),
    [sym_section5] = STATE(187),
    [sym_section6] = STATE(186),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(185),
    [aux_sym_script_repeat4] = STATE(186),
    [aux_sym_script_repeat5] = STATE(187),
    [aux_sym_script_repeat6] = STATE(188),
    [aux_sym_script_repeat7] = STATE(189),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
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
  [145] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(189),
    [sym_section4] = STATE(188),
    [sym_section5] = STATE(187),
    [sym_section6] = STATE(186),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(186),
    [aux_sym_script_repeat5] = STATE(187),
    [aux_sym_script_repeat6] = STATE(188),
    [aux_sym_script_repeat7] = STATE(189),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
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
  [146] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(189),
    [sym_section4] = STATE(188),
    [sym_section5] = STATE(187),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(187),
    [aux_sym_script_repeat6] = STATE(188),
    [aux_sym_script_repeat7] = STATE(189),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
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
  [147] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(189),
    [sym_section4] = STATE(188),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(188),
    [aux_sym_script_repeat7] = STATE(189),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [148] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(189),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(189),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [149] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [150] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [151] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [152] = {
    [anon_sym_2] = ACTIONS(429),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [153] = {
    [sym_value] = STATE(194),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(431),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [154] = {
    [anon_sym_LF] = ACTIONS(433),
    [anon_sym_Title] = ACTIONS(435),
    [anon_sym_Credit] = ACTIONS(435),
    [anon_sym_Author] = ACTIONS(433),
    [anon_sym_Source] = ACTIONS(435),
    [anon_sym_Draftdate] = ACTIONS(435),
    [anon_sym_Contact] = ACTIONS(435),
    [anon_sym_Authors] = ACTIONS(435),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [155] = {
    [sym_value] = STATE(195),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(431),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [156] = {
    [sym__indent] = STATE(155),
    [aux_sym__value_group_repeat1] = STATE(197),
    [anon_sym_LF] = ACTIONS(437),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [157] = {
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
    [sym__raw_script] = STATE(198),
    [sym__dialogue_block] = STATE(198),
    [sym__action_block] = STATE(198),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(185),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(191),
    [sym_section2] = STATE(190),
    [sym_section3] = STATE(189),
    [sym_section4] = STATE(188),
    [sym_section5] = STATE(187),
    [sym_section6] = STATE(186),
    [aux_sym_script_repeat1] = STATE(116),
    [aux_sym_script_repeat2] = STATE(198),
    [aux_sym_script_repeat3] = STATE(185),
    [aux_sym_script_repeat4] = STATE(186),
    [aux_sym_script_repeat5] = STATE(187),
    [aux_sym_script_repeat6] = STATE(188),
    [aux_sym_script_repeat7] = STATE(189),
    [aux_sym_script_repeat8] = STATE(190),
    [aux_sym_script_repeat9] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_LF] = ACTIONS(207),
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
  [158] = {
    [sym_normal_txt] = STATE(158),
    [sym__emphasis] = STATE(158),
    [sym_italic_txt] = STATE(158),
    [sym_bold_txt] = STATE(158),
    [sym_bold_and_italic_txt] = STATE(158),
    [sym_underlined_txt] = STATE(158),
    [sym__general_text] = STATE(67),
    [aux_sym__text_repeat1] = STATE(158),
    [anon_sym_LT] = ACTIONS(439),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_STAR_STAR] = ACTIONS(382),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(385),
    [anon_sym__] = ACTIONS(388),
    [aux_sym_SLASH_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_BSLASH_STAR_PIPE_RPAREN_RPAREN_PIPE_LBRACKA_DASHZa_DASHz0_DASH9_DOT_COMMA_SQUOTE_BSLASH_DASH_BANG_QMARK_AMP_SEMI_RBRACK_RPAREN_PLUS_SLASH] = ACTIONS(391),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [160] = {
    [sym_spoken] = STATE(200),
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
  [161] = {
    [sym_parenthetical] = STATE(201),
    [sym_spoken] = STATE(201),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(443),
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
  [162] = {
    [aux_sym_dialogue_repeat1] = STATE(203),
    [anon_sym_LF] = ACTIONS(445),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [163] = {
    [anon_sym_LF] = ACTIONS(447),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [164] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(208),
    [sym_section3] = STATE(207),
    [sym_section4] = STATE(206),
    [sym_section5] = STATE(205),
    [sym_section6] = STATE(204),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(204),
    [aux_sym_script_repeat5] = STATE(205),
    [aux_sym_script_repeat6] = STATE(206),
    [aux_sym_script_repeat7] = STATE(207),
    [aux_sym_script_repeat8] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [165] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(208),
    [sym_section3] = STATE(207),
    [sym_section4] = STATE(206),
    [sym_section5] = STATE(205),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(205),
    [aux_sym_script_repeat6] = STATE(206),
    [aux_sym_script_repeat7] = STATE(207),
    [aux_sym_script_repeat8] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [166] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section2] = STATE(208),
    [sym_section3] = STATE(207),
    [sym_section4] = STATE(206),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(206),
    [aux_sym_script_repeat7] = STATE(207),
    [aux_sym_script_repeat8] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [167] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section2] = STATE(208),
    [sym_section3] = STATE(207),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(207),
    [aux_sym_script_repeat8] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [168] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section2] = STATE(208),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [169] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [170] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(212),
    [sym_section4] = STATE(211),
    [sym_section5] = STATE(210),
    [sym_section6] = STATE(209),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(209),
    [aux_sym_script_repeat5] = STATE(210),
    [aux_sym_script_repeat6] = STATE(211),
    [aux_sym_script_repeat7] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [171] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(212),
    [sym_section4] = STATE(211),
    [sym_section5] = STATE(210),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(210),
    [aux_sym_script_repeat6] = STATE(211),
    [aux_sym_script_repeat7] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [172] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section3] = STATE(212),
    [sym_section4] = STATE(211),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(211),
    [aux_sym_script_repeat7] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [173] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section3] = STATE(212),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [174] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND] = ACTIONS(455),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [175] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(215),
    [sym_section5] = STATE(214),
    [sym_section6] = STATE(213),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(213),
    [aux_sym_script_repeat5] = STATE(214),
    [aux_sym_script_repeat6] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [176] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(215),
    [sym_section5] = STATE(214),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(214),
    [aux_sym_script_repeat6] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [177] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section4] = STATE(215),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [178] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(459),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [179] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(217),
    [sym_section6] = STATE(216),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(216),
    [aux_sym_script_repeat5] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [180] = {
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(217),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [181] = {
    [sym_sec_heading5] = STATE(32),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(463),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [182] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(218),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(465),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [183] = {
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(467),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [184] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [aux_sym_script_repeat3] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(23),
    [sym__scene_loc] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_POUND_POUND] = ACTIONS(471),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(471),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(471),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(471),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(469),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [185] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(223),
    [sym_section3] = STATE(222),
    [sym_section4] = STATE(221),
    [sym_section5] = STATE(220),
    [sym_section6] = STATE(219),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(219),
    [aux_sym_script_repeat5] = STATE(220),
    [aux_sym_script_repeat6] = STATE(221),
    [aux_sym_script_repeat7] = STATE(222),
    [aux_sym_script_repeat8] = STATE(223),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
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
  [186] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(223),
    [sym_section3] = STATE(222),
    [sym_section4] = STATE(221),
    [sym_section5] = STATE(220),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(220),
    [aux_sym_script_repeat6] = STATE(221),
    [aux_sym_script_repeat7] = STATE(222),
    [aux_sym_script_repeat8] = STATE(223),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
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
  [187] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(223),
    [sym_section3] = STATE(222),
    [sym_section4] = STATE(221),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(221),
    [aux_sym_script_repeat7] = STATE(222),
    [aux_sym_script_repeat8] = STATE(223),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [188] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(223),
    [sym_section3] = STATE(222),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(222),
    [aux_sym_script_repeat8] = STATE(223),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [189] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(223),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(223),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [190] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [191] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [192] = {
    [aux_sym__indent_repeat1] = STATE(225),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(475),
    [anon_sym_] = ACTIONS(477),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [193] = {
    [anon_sym_LF] = ACTIONS(479),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [194] = {
    [anon_sym_LF] = ACTIONS(481),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [195] = {
    [anon_sym_LF] = ACTIONS(483),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [196] = {
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_Title] = ACTIONS(487),
    [anon_sym_Credit] = ACTIONS(487),
    [anon_sym_Author] = ACTIONS(485),
    [anon_sym_Source] = ACTIONS(487),
    [anon_sym_Draftdate] = ACTIONS(487),
    [anon_sym_Contact] = ACTIONS(487),
    [anon_sym_Authors] = ACTIONS(487),
    [anon_sym_2] = ACTIONS(429),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [197] = {
    [sym__indent] = STATE(155),
    [aux_sym__value_group_repeat1] = STATE(197),
    [anon_sym_LF] = ACTIONS(489),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [198] = {
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
    [sym_scene] = STATE(227),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(224),
    [sym_section2] = STATE(223),
    [sym_section3] = STATE(222),
    [sym_section4] = STATE(221),
    [sym_section5] = STATE(220),
    [sym_section6] = STATE(219),
    [aux_sym_script_repeat2] = STATE(90),
    [aux_sym_script_repeat3] = STATE(227),
    [aux_sym_script_repeat4] = STATE(219),
    [aux_sym_script_repeat5] = STATE(220),
    [aux_sym_script_repeat6] = STATE(221),
    [aux_sym_script_repeat7] = STATE(222),
    [aux_sym_script_repeat8] = STATE(223),
    [aux_sym_script_repeat9] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(473),
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
  [199] = {
    [anon_sym_LF] = ACTIONS(492),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [200] = {
    [aux_sym_dialogue_repeat1] = STATE(229),
    [anon_sym_LF] = ACTIONS(494),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [201] = {
    [anon_sym_LF] = ACTIONS(496),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [202] = {
    [sym_parenthetical] = STATE(201),
    [sym_spoken] = STATE(201),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(498),
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
  [203] = {
    [aux_sym_dialogue_repeat1] = STATE(203),
    [anon_sym_LF] = ACTIONS(500),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [204] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section2] = STATE(234),
    [sym_section3] = STATE(233),
    [sym_section4] = STATE(232),
    [sym_section5] = STATE(231),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(231),
    [aux_sym_script_repeat6] = STATE(232),
    [aux_sym_script_repeat7] = STATE(233),
    [aux_sym_script_repeat8] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(505),
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
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section2] = STATE(234),
    [sym_section3] = STATE(233),
    [sym_section4] = STATE(232),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(232),
    [aux_sym_script_repeat7] = STATE(233),
    [aux_sym_script_repeat8] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [206] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section2] = STATE(234),
    [sym_section3] = STATE(233),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(233),
    [aux_sym_script_repeat8] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [207] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section2] = STATE(234),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [208] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [209] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section3] = STATE(237),
    [sym_section4] = STATE(236),
    [sym_section5] = STATE(235),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(235),
    [aux_sym_script_repeat6] = STATE(236),
    [aux_sym_script_repeat7] = STATE(237),
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [210] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section3] = STATE(237),
    [sym_section4] = STATE(236),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(236),
    [aux_sym_script_repeat7] = STATE(237),
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [211] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section3] = STATE(237),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(237),
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [212] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND] = ACTIONS(509),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [213] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section4] = STATE(239),
    [sym_section5] = STATE(238),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(238),
    [aux_sym_script_repeat6] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [214] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section4] = STATE(239),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(239),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [215] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(513),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [216] = {
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section5] = STATE(240),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(240),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(39),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [217] = {
    [sym_sec_heading5] = STATE(32),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(517),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [218] = {
    [sym_sec_heading6] = STATE(33),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(521),
    [anon_sym_POUND_POUND] = ACTIONS(521),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(521),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(521),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(521),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(41),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [219] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(245),
    [sym_section2] = STATE(244),
    [sym_section3] = STATE(243),
    [sym_section4] = STATE(242),
    [sym_section5] = STATE(241),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(241),
    [aux_sym_script_repeat6] = STATE(242),
    [aux_sym_script_repeat7] = STATE(243),
    [aux_sym_script_repeat8] = STATE(244),
    [aux_sym_script_repeat9] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(523),
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
  [220] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(245),
    [sym_section2] = STATE(244),
    [sym_section3] = STATE(243),
    [sym_section4] = STATE(242),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(242),
    [aux_sym_script_repeat7] = STATE(243),
    [aux_sym_script_repeat8] = STATE(244),
    [aux_sym_script_repeat9] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [221] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(245),
    [sym_section2] = STATE(244),
    [sym_section3] = STATE(243),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(243),
    [aux_sym_script_repeat8] = STATE(244),
    [aux_sym_script_repeat9] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [222] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(245),
    [sym_section2] = STATE(244),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(244),
    [aux_sym_script_repeat9] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [223] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(245),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [224] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [225] = {
    [aux_sym__indent_repeat1] = STATE(246),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(525),
    [anon_sym_] = ACTIONS(527),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [226] = {
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_Title] = ACTIONS(531),
    [anon_sym_Credit] = ACTIONS(531),
    [anon_sym_Author] = ACTIONS(529),
    [anon_sym_Source] = ACTIONS(531),
    [anon_sym_Draftdate] = ACTIONS(531),
    [anon_sym_Contact] = ACTIONS(531),
    [anon_sym_Authors] = ACTIONS(531),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [227] = {
    [sym__forced_scene] = STATE(26),
    [sym_scene_heading] = STATE(27),
    [sym_scene] = STATE(91),
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(245),
    [sym_section2] = STATE(244),
    [sym_section3] = STATE(243),
    [sym_section4] = STATE(242),
    [sym_section5] = STATE(241),
    [sym_section6] = STATE(247),
    [aux_sym_script_repeat3] = STATE(91),
    [aux_sym_script_repeat4] = STATE(247),
    [aux_sym_script_repeat5] = STATE(241),
    [aux_sym_script_repeat6] = STATE(242),
    [aux_sym_script_repeat7] = STATE(243),
    [aux_sym_script_repeat8] = STATE(244),
    [aux_sym_script_repeat9] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(523),
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
  [228] = {
    [sym_parenthetical] = STATE(201),
    [sym_spoken] = STATE(201),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(533),
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
  [229] = {
    [aux_sym_dialogue_repeat1] = STATE(203),
    [anon_sym_LF] = ACTIONS(535),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [230] = {
    [sym_parenthetical] = STATE(201),
    [sym_spoken] = STATE(201),
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
  [231] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(250),
    [sym_section4] = STATE(249),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(249),
    [aux_sym_script_repeat7] = STATE(250),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [232] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(250),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(250),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [233] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section2] = STATE(251),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [234] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [235] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section3] = STATE(253),
    [sym_section4] = STATE(252),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(252),
    [aux_sym_script_repeat7] = STATE(253),
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(543),
    [anon_sym_POUND_POUND] = ACTIONS(543),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [236] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section3] = STATE(253),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(253),
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(543),
    [anon_sym_POUND_POUND] = ACTIONS(543),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [237] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(543),
    [anon_sym_POUND_POUND] = ACTIONS(543),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [238] = {
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section4] = STATE(254),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(254),
    [ts_builtin_sym_end] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(547),
    [anon_sym_POUND_POUND] = ACTIONS(547),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(547),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [239] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(547),
    [anon_sym_POUND_POUND] = ACTIONS(547),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(547),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [240] = {
    [sym_sec_heading5] = STATE(32),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(549),
    [anon_sym_POUND] = ACTIONS(551),
    [anon_sym_POUND_POUND] = ACTIONS(551),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(551),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(551),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [241] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(258),
    [sym_section2] = STATE(257),
    [sym_section3] = STATE(256),
    [sym_section4] = STATE(255),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(255),
    [aux_sym_script_repeat7] = STATE(256),
    [aux_sym_script_repeat8] = STATE(257),
    [aux_sym_script_repeat9] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [242] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(258),
    [sym_section2] = STATE(257),
    [sym_section3] = STATE(256),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(256),
    [aux_sym_script_repeat8] = STATE(257),
    [aux_sym_script_repeat9] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [243] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(258),
    [sym_section2] = STATE(257),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(257),
    [aux_sym_script_repeat9] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [244] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(258),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [245] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [246] = {
    [aux_sym__indent_repeat1] = STATE(246),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(555),
    [anon_sym_] = ACTIONS(557),
    [sym_note] = ACTIONS(63),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [247] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_sec_heading6] = STATE(33),
    [sym_section1] = STATE(258),
    [sym_section2] = STATE(257),
    [sym_section3] = STATE(256),
    [sym_section4] = STATE(255),
    [sym_section5] = STATE(259),
    [sym_section6] = STATE(92),
    [aux_sym_script_repeat4] = STATE(92),
    [aux_sym_script_repeat5] = STATE(259),
    [aux_sym_script_repeat6] = STATE(255),
    [aux_sym_script_repeat7] = STATE(256),
    [aux_sym_script_repeat8] = STATE(257),
    [aux_sym_script_repeat9] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(553),
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
  [248] = {
    [sym_parenthetical] = STATE(201),
    [sym_spoken] = STATE(201),
    [sym__text] = STATE(110),
    [sym__emphasis] = STATE(25),
    [sym_italic_txt] = STATE(25),
    [sym_bold_txt] = STATE(25),
    [sym_bold_and_italic_txt] = STATE(25),
    [sym_underlined_txt] = STATE(25),
    [sym__not_special] = STATE(25),
    [anon_sym_LF] = ACTIONS(560),
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
  [249] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section2] = STATE(261),
    [sym_section3] = STATE(260),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(260),
    [aux_sym_script_repeat8] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(562),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [250] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section2] = STATE(261),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(562),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [251] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(562),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [252] = {
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section3] = STATE(262),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(262),
    [ts_builtin_sym_end] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(568),
    [anon_sym_POUND_POUND] = ACTIONS(568),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [253] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(568),
    [anon_sym_POUND_POUND] = ACTIONS(568),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [254] = {
    [sym_sec_heading4] = STATE(31),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(570),
    [anon_sym_POUND] = ACTIONS(572),
    [anon_sym_POUND_POUND] = ACTIONS(572),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(572),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [255] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(265),
    [sym_section2] = STATE(264),
    [sym_section3] = STATE(263),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(263),
    [aux_sym_script_repeat8] = STATE(264),
    [aux_sym_script_repeat9] = STATE(265),
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [256] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(265),
    [sym_section2] = STATE(264),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(264),
    [aux_sym_script_repeat9] = STATE(265),
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [257] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(265),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(265),
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [258] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [259] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_sec_heading5] = STATE(32),
    [sym_section1] = STATE(265),
    [sym_section2] = STATE(264),
    [sym_section3] = STATE(263),
    [sym_section4] = STATE(266),
    [sym_section5] = STATE(93),
    [aux_sym_script_repeat5] = STATE(93),
    [aux_sym_script_repeat6] = STATE(266),
    [aux_sym_script_repeat7] = STATE(263),
    [aux_sym_script_repeat8] = STATE(264),
    [aux_sym_script_repeat9] = STATE(265),
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(127),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [260] = {
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section2] = STATE(267),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(267),
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_POUND] = ACTIONS(578),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [261] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_POUND] = ACTIONS(578),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [262] = {
    [sym_sec_heading3] = STATE(30),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(580),
    [anon_sym_POUND] = ACTIONS(582),
    [anon_sym_POUND_POUND] = ACTIONS(582),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [263] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(269),
    [sym_section2] = STATE(268),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(268),
    [aux_sym_script_repeat9] = STATE(269),
    [ts_builtin_sym_end] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [264] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(269),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(269),
    [ts_builtin_sym_end] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [265] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [266] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_sec_heading4] = STATE(31),
    [sym_section1] = STATE(269),
    [sym_section2] = STATE(268),
    [sym_section3] = STATE(270),
    [sym_section4] = STATE(94),
    [aux_sym_script_repeat6] = STATE(94),
    [aux_sym_script_repeat7] = STATE(270),
    [aux_sym_script_repeat8] = STATE(268),
    [aux_sym_script_repeat9] = STATE(269),
    [ts_builtin_sym_end] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(35),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(129),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [267] = {
    [sym_sec_heading2] = STATE(29),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [268] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(271),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(271),
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [269] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [270] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_sec_heading3] = STATE(30),
    [sym_section1] = STATE(271),
    [sym_section2] = STATE(272),
    [sym_section3] = STATE(95),
    [aux_sym_script_repeat7] = STATE(95),
    [aux_sym_script_repeat8] = STATE(272),
    [aux_sym_script_repeat9] = STATE(271),
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(33),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(131),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [271] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(135),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [272] = {
    [sym_sec_heading1] = STATE(28),
    [sym_sec_heading2] = STATE(29),
    [sym_section1] = STATE(273),
    [sym_section2] = STATE(96),
    [aux_sym_script_repeat8] = STATE(96),
    [aux_sym_script_repeat9] = STATE(273),
    [ts_builtin_sym_end] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(133),
    [sym_note] = ACTIONS(47),
    [sym_boneyard] = ACTIONS(47),
    [sym_synopsis] = ACTIONS(47),
  },
  [273] = {
    [sym_sec_heading1] = STATE(28),
    [sym_section1] = STATE(97),
    [aux_sym_script_repeat9] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(594),
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
  [207] = {.count = 1, .reusable = false}, SHIFT(116),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 2),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 2),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_section6, 2),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_section6, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [233] = {.count = 1, .reusable = false}, SHIFT(152),
  [235] = {.count = 1, .reusable = true}, SHIFT(153),
  [237] = {.count = 1, .reusable = false}, SHIFT(157),
  [239] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(81),
  [244] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(2),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(3),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(4),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(5),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(6),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(7),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(8),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(10),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2), SHIFT_REPEAT(11),
  [275] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat2, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat3, 2),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat3, 2), SHIFT_REPEAT(9),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat3, 2), SHIFT_REPEAT(12),
  [285] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat3, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat4, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat4, 2),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat4, 2), SHIFT_REPEAT(18),
  [294] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat5, 2),
  [296] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat5, 2),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat5, 2), SHIFT_REPEAT(17),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat6, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat6, 2),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat6, 2), SHIFT_REPEAT(16),
  [308] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat7, 2),
  [310] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat7, 2),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat7, 2), SHIFT_REPEAT(15),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat8, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat8, 2),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat8, 2), SHIFT_REPEAT(14),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat9, 2),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat9, 2), SHIFT_REPEAT(13),
  [327] = {.count = 1, .reusable = false}, REDUCE(aux_sym_title_page_repeat1, 2),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_title_page_repeat1, 2), SHIFT_REPEAT(19),
  [332] = {.count = 2, .reusable = false}, REDUCE(aux_sym_title_page_repeat1, 2), SHIFT_REPEAT(19),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_centered_action, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__text, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_italic_txt, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_italic_txt, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_bold_txt, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_bold_txt, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_bold_and_italic_txt, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_bold_and_italic_txt, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_underlined_txt, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_underlined_txt, 3),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_scene_heading, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__dialogue_block, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__dialogue_block, 3),
  [361] = {.count = 1, .reusable = true}, SHIFT(159),
  [363] = {.count = 1, .reusable = false}, SHIFT(160),
  [365] = {.count = 1, .reusable = false}, SHIFT(161),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_spoken, 1),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__delimit, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__delimit, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__action_block, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__action_block, 3),
  [377] = {.count = 1, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(3),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(4),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(5),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(6),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(67),
  [394] = {.count = 1, .reusable = true}, SHIFT(163),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_scene, 3),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_scene, 3),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(116),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 3),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 3),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_section6, 3),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_section6, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_script, 3),
  [429] = {.count = 1, .reusable = true}, SHIFT(192),
  [431] = {.count = 1, .reusable = false}, SHIFT(193),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_k_v_pair, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_k_v_pair, 3),
  [437] = {.count = 1, .reusable = false}, SHIFT(196),
  [439] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(199),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 4),
  [445] = {.count = 1, .reusable = false}, SHIFT(202),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym__numbering, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 4),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 4),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 4),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 4),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 4),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 4),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 4),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 4),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 4),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 4),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_section6, 4),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_section6, 4),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_script, 4),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__indent, 2),
  [477] = {.count = 1, .reusable = false}, SHIFT(225),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_value, 1),
  [481] = {.count = 1, .reusable = false}, SHIFT(226),
  [483] = {.count = 1, .reusable = false}, REDUCE(aux_sym__value_group_repeat1, 2),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym__value_group, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym__value_group, 2),
  [489] = {.count = 2, .reusable = false}, REDUCE(aux_sym__value_group_repeat1, 2), SHIFT_REPEAT(152),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_parenthetical, 3),
  [494] = {.count = 1, .reusable = false}, SHIFT(228),
  [496] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dialogue_repeat1, 2),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 5),
  [500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dialogue_repeat1, 2), SHIFT_REPEAT(230),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 5),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 5),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 5),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 5),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 5),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 5),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 5),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 5),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_section5, 5),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_section5, 5),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_script, 5),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym__indent, 3),
  [527] = {.count = 1, .reusable = false}, SHIFT(246),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym__value_group, 3),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym__value_group, 3),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 6),
  [535] = {.count = 1, .reusable = false}, SHIFT(248),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 6),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 6),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 6),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 6),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 6),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 6),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_section4, 6),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_section4, 6),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_script, 6),
  [555] = {.count = 1, .reusable = false}, REDUCE(aux_sym__indent_repeat1, 2),
  [557] = {.count = 2, .reusable = false}, REDUCE(aux_sym__indent_repeat1, 2), SHIFT_REPEAT(246),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_dialogue, 7),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 7),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 7),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 7),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 7),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_section3, 7),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym_section3, 7),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_script, 7),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 8),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 8),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_section2, 8),
  [582] = {.count = 1, .reusable = false}, REDUCE(sym_section2, 8),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_script, 8),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_section1, 9),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_section1, 9),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_script, 9),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_script, 10),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_script, 11),
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
