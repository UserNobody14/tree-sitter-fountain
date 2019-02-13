module.exports = grammar({
  name: "Fountain",

    extras: $ => [$.note, $.boneyard, $.synopsis],

    //TODO: LONG TERM:
    //make an 'ending early' version of dialogue.
    //conflicts: $ => [[$.section1, $.section2, $.section3, $.section4]]

    //TODO: Make less endline char sensitive
    //TODO: make dialog & action able to fall directly under sections.
    //TODO: make internal spoken emphasis chars visible.
    //TODO: allow trailing/opening whitespaces more?

  rules: {
      script: $ => seq(repeat('\n'),
                       optional(seq($.title_page, repeat1('\n'))),
                       repeat($._raw_script),
                       repeat($.scene),
                       repeat($.section6),
                       repeat($.section5),
                       repeat($.section4),
                       repeat($.section3),
                       repeat($.section2),
                       repeat($.section1)),

      dialogue: $ => seq(
          $.character,
          optional(seq('\n', $.parenthetical)),
          seq('\n', $.spoken),
          repeat(choice(seq('\n', $.spoken),
                        seq('\n', $.parenthetical))),
          '\n'),

      //TODO: allow dual dialog via ^ symbol
      //TODO: allow same line parentheticals??
      //called character extensions?
      //TODO: allow multiple parentheticals?!
      //TODO: add in lyrics?

      character: $ => choice($._forced_character, $._all_caps),

      //$=> prec(2, /[ \t]?(\()+(([A-Za-z0-9 ])+)(\))+[ \t]?/),

      parenthetical: $=> seq('(', $._general_text, ')'),

      spoken: $ => prec(1, $._text),

      //character_extension: $ => prec(1, $._parenthetical),

      action: $ => choice($._forced_action, $._text),

      _delimit: $=> seq('\n', '\n'),

      _dialogue_line: $ => choice($.parenthetical, $.spoken),

      centered_action: $ => seq('>', $._text, '<'),

      lyric: $ => seq('~', $._text),

      page_break: $ => seq('\n', '===', repeat('='), repeat('\n')),

      transition: $ => choice(seq($._all_caps, 'TO:', $._delimit),
                              seq('>', /[^<\n]+/, $._delimit)),

      //text emphasis utilities

      //TODO: prevent errors caused by unclosed syntax? Make it carry over?
      // ie:
      //sldkjghlhlkjh***sldkhflskdhf
      //slkdjflf***
      //perhaps not. Seems quite difficult for a very small fix.

      _text: $=> seq(choice(alias($._not_special, $.normal_txt),
                            $._emphasis),
                     repeat(choice($.normal_txt, $._emphasis))),

      normal_txt: $=> $._general_text,

      //Emphasis Text. grammar

      _emphasis: $=> choice($.italic_txt, $.bold_txt,
                            $.bold_and_italic_txt, $.underlined_txt),

      italic_txt: $=> seq('*', $._general_text, '*'),

      bold_txt: $=> seq('**', $._general_text, '**'),

      bold_and_italic_txt: $=> seq('***', $._general_text, '***'),

      underlined_txt: $=> seq('_', $._general_text, '_'),

      //forced items

      _forced_action: $ => prec(2, seq('!', /.+/)),

      _forced_character: $ => seq('@', /.+/),

      _forced_scene: $ => seq('.',  /[^#\n]+/),

      //Line starting char utilities

      _not_special: $=> seq(/[^!@.>(#=_*~\n]/,
                            /((\\(\*|_))|[A-Za-z0-9.,'\-!? &;])+/),

      //utilities

      _general_text: $=> /((\\(\*|_))|[A-Za-z0-9.,'\-!? &;])+/,

      _raw_script: $ => choice($._dialogue_block, $._action_block),

      _dialogue_block: $ => prec.right(1, seq($.dialogue, '\n',
                                              repeat('\n'))),

      _action_block: $ => prec.right(1, seq(choice($.action,
                                                   $.centered_action),
                                         $._delimit, repeat('\n'))),

      _all_caps: $ => /([A-Z*_]+[0-9A-Z (._\-')]*)/,

      //organizer things

      _scene_loc: $=> prec(4, token(
          seq(choice('INT', 'EXT', 'EST', 'INT/EXT', 'I/E', 'INT./EXT'),
              choice('.', ' ', '. ')))),

      scene_number: $ => /(\d|[A-Z]|[-_])+/,

      _numbering: $ => seq('#', $.scene_number, '#'),

      scene_heading: $ => prec(5, seq(
          choice($._forced_scene, seq($._scene_loc,
                                      $._all_caps)),
          optional($._numbering))),

      scene: $ => prec.right(6, seq($.scene_heading, $._delimit,
                                    repeat($._raw_script))),

      //section headings and such
      _section_heading_text: $=> /[A-Za-z0-9.,-_ ()?'&]+/,

      sec_heading1: $=> seq('#', $._section_heading_text),
      sec_heading2: $=> seq('##', $._section_heading_text),
      sec_heading3: $=> seq('###', $._section_heading_text),
      sec_heading4: $=> seq('####', $._section_heading_text),
      sec_heading5: $=> seq('#####', $._section_heading_text),
      sec_heading6: $=> seq('######', $._section_heading_text),

      //Each sec is defined separately to make it
      //easier to indent from the syntax tree & other
      //stuff like that.

      section1: $=> prec.right(12, seq($.sec_heading1, repeat1('\n'),
                                       repeat($._raw_script),
                                       repeat($.scene),
                                       repeat($.section6),
                                       repeat($.section5),
                                       repeat($.section4),
                                       repeat($.section3),
                                       repeat($.section2),
                                       //repeat('\n')
                                     )),

      section2: $=> prec.right(11, seq($.sec_heading2, repeat1('\n'),
                                      repeat($._raw_script),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat($.section5),
                                      repeat($.section4),
                                      repeat($.section3),
                                      //repeat('\n')
                                    )),

      section3: $=> prec.right(10, seq($.sec_heading3, repeat1('\n'),
                                      repeat($._raw_script),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat($.section5),
                                      repeat($.section4),
                                      //repeat('\n')
                                    )),

      section4: $=> prec.right(9, seq($.sec_heading4, repeat1('\n'),
                                      repeat($._raw_script),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat($.section5),
                                      //repeat('\n')
                                    )),

      section5: $=> prec.right(8, seq($.sec_heading5, repeat1('\n'),
                                      repeat($._raw_script),
                                      repeat($.scene),
                                      repeat($.section6),
                                      //repeat('\n')
                                    )),

      section6: $=> prec.right(7, seq($.sec_heading6, repeat1('\n'),
                                      repeat($._raw_script),
                                      repeat($.scene),
                                      //repeat('\n')
                                    )),

      //title page is formatted key: value/s
      title_page: $=> repeat1($.k_v_pair),

      k_v_pair: $=> prec.right(2, seq($.key, ':', $._value_group)),

      _value_group: $=> choice(seq(' ', $.value, '\n'),
                               seq(repeat1(seq($._indent, $.value)),
                                   '\n')),

      value: $=> prec(2, /.+/),

      key: $=> choice('Title', 'Credit', 'Author', 'Source', 'Draft date',
                      'Contact', 'Authors'),

      _indent: $=> choice(seq('\n', '   ', repeat(' '))),

      //Extras & Comments:

      note: $ => token(seq('[[', /[^[\]]+/, ']]')),

      boneyard: $=> /\n\/\*(.|\n)*\n\*\//,

      synopsis: $=> token(seq('\n','=', /.+/))

  }
});
