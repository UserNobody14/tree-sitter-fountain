module.exports = grammar({
  name: "Fountain",

    extras: $ => [$.note, $.boneyard, $.synopsis],

    //TODO: LONG TERM:
    //make an 'ending early' version of dialogue.
    //make synopsis, boneyard, and note stop being a part of dialogue?

    //conflicts: $ => [[$.section1, $.section2, $.section3, $.section4]]

    //TODO: Make less endline char sensitive
    //TODO: make dialog & action able to fall directly under sections.
    //TODO: make internal spoken emphasis chars visible.

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
          repeat1(seq('\n', $.spoken)),
          '\n'),

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


      //TODO: allow forcing a character with the @ symbol

      //TODO: allow dual dialog via ^ symbol
      //TODO: allow same line parentheticals??
      //called character extensions?
      //TODO: allow multiple parentheticals?!

      character: $ => choice(seq('@', /.+/), $._all_caps),

      parenthetical: $ => prec(2, /[ \t]?(\()+(([A-Za-z0-9 ])+)(\))+[ \t]?/),
      transition: $ => choice(seq($._all_caps, 'TO:', $._delimit),
                              seq('>', /[^<\n]+/, $._delimit)),

      spoken: $ => prec(1, $._text),

      page_break: $ => seq('\n', '===', repeat('='), repeat('\n')),

      //TODO: allow forcing an action with an ! character.

      action: $ => choice($._forced_action, $._text),

      _forced_action: $ => prec(2, seq('!', /.+/)),

      centered_action: $ => seq('>', $._text, '<'),

      note: $ => token(seq('[[', /[^[\]]+/, ']]')),

      boneyard: $=> /\n\/\*(.|\n)*\n\*\//,

      _delimit: $=> seq('\n', '\n'),

      synopsis: $=> token(seq('\n','=', /.+/)),

      //text emphasis utilities

      _text: $=> seq(choice(
          alias($._not_special,
              $.normal_txt),
          $.italic_txt,
          $.bold_txt,
          $.bold_and_italic_txt,
          $.underlined_txt),
                     repeat(choice($.normal_txt,
                                   $.italic_txt,
                                   $.bold_txt,
                                   $.bold_and_italic_txt,
                                   $.underlined_txt))),

      normal_txt: $=> $._general_text,

      italic_txt: $=> seq('*', $._general_text, '*'),

      bold_txt: $=> seq('**', $._general_text, '**'),

      bold_and_italic_txt: $=> seq('***', $._general_text, '***'),

      underlined_txt: $=> seq('_', $._general_text, '_'),

      //Line starting char utilities

      _not_special: $=> seq(/[^!@.>(#=_*~\n]/,
                            /((\\(\*|_))|[A-Za-z0-9.,\-!? ])+/),

      //utilities

      _general_text: $=> /((\\(\*|_))|[A-Za-z0-9.,\-!? ])+/,

      _raw_script: $ => choice($._dialogue_block, $._action_block),

      _dialogue_block: $ => prec.right(1, seq($.dialogue, '\n',
                                              repeat('\n'))),

      _action_block: $ => prec.right(1, seq(choice($.action,
                                                   $.centered_action),
                                         $._delimit, repeat('\n'))),

      _all_caps: $ => /([A-Z*_]+[0-9A-Z (._\-')]*)/,

      //organizer things

      _scene_loc: $=> prec(4, token(seq(choice('INT', 'EXT'),
                                   optional('.'),
                                   optional(choice('/INT.', '/EXT.')),
                                        ' '))),
      //TODO: make scene headings include optional numbers
      //TODO: allow forced scene headings w/ periods

      scene_number: $ => /(\d|[A-Z]|[-_])+/,

      _scene_numbering: $ => seq('#', $.scene_number, '#'),

      scene_heading: $ => prec(5, seq(choice(seq('.', /[^#\n]+/),
                                          seq($._scene_loc,
                                              $._all_caps)),
                                      optional($._scene_numbering))),

      scene: $ => prec.right(6, seq($.scene_heading,

                                    $._delimit,
                                    repeat($._raw_script)
                                    //repeat('\n')
                                   )),

      //section headings and such

      sec_heading1: $=> seq('#', /[A-Za-z0-9.,-_ ]+/),

      sec_heading2: $=> seq('##', /[A-Za-z0-9.,-_ ]+/),

      sec_heading3: $=> seq('###', /[A-Za-z0-9.,-_ ]+/),

      sec_heading4: $=> seq('####', /[A-Za-z0-9.,-_ ]+/),

      sec_heading5: $=> seq('#####', /[A-Za-z0-9.,-_ ]+/),

      sec_heading6: $=> seq('######', /[A-Za-z0-9.,-_ ]+/),

      //Each sec is defined separately to make it
      //easier to indent from the syntax tree & other
      //stuff like that.

      section1: $=> prec.right(12, seq($.sec_heading1, repeat1('\n'),
                                       repeat($.scene),
                                       repeat($.section6),
                                       repeat($.section5),
                                       repeat($.section4),
                                       repeat($.section3),
                                       repeat($.section2),
                                       repeat('\n'))),

      section2: $=> prec.right(11, seq($.sec_heading2, repeat1('\n'),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat($.section5),
                                      repeat($.section4),
                                      repeat($.section3),
                                      repeat('\n'))),

      section3: $=> prec.right(10, seq($.sec_heading3, repeat1('\n'),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat($.section5),
                                      repeat($.section4),
                                      repeat('\n'))),

      section4: $=> prec.right(9, seq($.sec_heading4, repeat1('\n'),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat($.section5),
                                      repeat('\n'))),

      section5: $=> prec.right(8, seq($.sec_heading5, repeat1('\n'),
                                      repeat($.scene),
                                      repeat($.section6),
                                      repeat('\n'))),

      section6: $=> prec.right(7, seq($.sec_heading6, repeat1('\n'),
                                      repeat($.scene),
                                      repeat('\n')))

  }
});
