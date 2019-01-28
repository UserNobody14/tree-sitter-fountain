module.exports = grammar({
  name: "Fountain",

    extras: $ => [$.note, $.boneyard],

    //conflicts: $ => [[$.section1, $.section2, $.section3, $.section4]]

    //TODO: Make less endline char sensitive
    //TODO: make dialog & action able to fall directly under sections.
    //TODO: make synopses work.
    //TODO: make internal spoken emphasis chars visible.

  rules: {
      script: $ => seq(repeat('\n'),
                       optional(seq($.title_page, repeat1('\n'))),
                       repeat(choice($.dialogue, $._action_block)),
                       repeat($.scene),
                       repeat($.section6),
                       repeat($.section5),
                       repeat($.section4),
                       repeat($.section3),
                       repeat($.section2),
                       repeat($.section1)),

      dialogue: $ => seq(
          $.character,
          optional(seq('\n', $.parenthetical)), '\n',
          repeat1(seq($.spoken, '\n')),
          '\n'),

      //title page is formatted key: value/s

      title_page: $=> repeat1($.k_v_pair),

      k_v_pair: $=> prec.right(2, seq($.key, ':',
                                   choice(
                                       seq(' ', $.value),
                                       repeat1(seq($._indent, $.value))),
                                   '\n')),

      value: $=> prec(2, /.+/),

      key: $=> choice('Title', 'Credit', 'Author', 'Source', 'Draft date',
                      'Contact', 'Authors'),

      _indent: $=> choice(seq('\n', '   ', repeat(' '))),


      //TODO: allow forcing a character with the @ symbol
      //TODO: allow dual dialog via ^ symbol

      character: $ => prec(1, /([A-Z*_]+[0-9A-Z (._\-')]*)/),

      parenthetical: $ => prec(2, /[ \t]?(\()+(([A-Za-z0-9 ])+)(\))+[ \t]?/),
      transition: $ => choice(seq('\n', $._all_caps, 'TO:', $._delimit),
                              seq('>', /[^<\n]+/, $._delimit)),

      spoken: $ => prec(1, $._text),

      page_break: $ => seq('\n', '===', repeat('='), repeat('\n')),

      //TODO: allow forcing an action with an ! character.

      action: $ => choice(seq('!', /.+/), $._text),

      centered_action: $ => seq('>', $._text, '<'),

      note: $ => token(seq('[[', /[^[\]]+/, ']]')),

      boneyard: $=> /\n\/\*(.|\n)*\n\*\//,

      _delimit: $=> seq('\n', '\n'),

      synopsis: $=> seq('\n','=', /.+/),

      //text emphasis utilities

      _text: $=> repeat1(choice($.normal_txt, $.italic_txt, $.bold_txt,
                                $.bold_and_italic_txt, $.underlined_txt)),

      normal_txt: $=> $._general_text,

      italic_txt: $=> seq('*', $._general_text, '*'),

      bold_txt: $=> seq('**', $._general_text, '**'),

      bold_and_italic_txt: $=> seq('***', $._general_text, '***'),

      underlined_txt: $=> seq('_', $._general_text, '_'),

      _general_text: $=> /((\\(\*|_))|[A-Za-z0-9.,\-!? ])+/,

      //utilities

      _raw_script: $=> repeat1(choice($._d_or_a,)),

      _d_or_a: $ => choice($.dialogue, $._action_block, $._dialogue_plus,
                           $._action_plus),

      _dialogue_plus: $ => seq($.dialogue, repeat('\n')),

      _action_plus: $ => seq($._action_block, repeat('\n')),

      _action_block: $ => seq(choice($.action, $.centered_action),
                              $._delimit),

      _all_caps: $ => /([A-Z*_]+[0-9A-Z (._\-')]*)/,

      //organizer things

      _scene_loc: $=> prec(4, token(seq(choice('INT', 'EXT'),
                                   optional('.'),
                                   optional(choice('/INT.', '/EXT.')),
                                        ' '))),
      //TODO: make scene headings include optional numbers
      //TODO: allow forced scene headings w/ periods

      scene_heading: $ => prec(5, seq($._scene_loc, /.+/)),

      scene: $ => prec.right(6, seq($.scene_heading, $._delimit,
                                    repeat(choice($.dialogue,
                                                  $._action_block)),
                                    repeat('\n')
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
