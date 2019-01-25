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

      // dialogue: $ => prec.right(1, seq(
      //     $.character,
      //     optional(seq('\n', $.parenthetical)),
      //     repeat1(seq('\n', $.spoken)),
      //     $._delimit)),

      _raw_script: $=> repeat1(choice($.dialogue,
                                      $._action_block)),

      //fully_spoken: $ => seq(repeat1(seq('\n', $.spoken)), '\n'),

      _final_line: $ => seq($.spoken, $._delimit),

      _dialogue_plus: $ => seq($.dialogue, $._delimit),

      _action_block: $ => seq($.action, $._delimit),

      character: $ => prec(1, /([A-Z*_]+[0-9A-Z (._\-')]*)/),
      //([ \t]*[^<>a-z\s\/\n][^<>a-z:!\?\n]*[^<>a-z\(!\?:,\n\.][ \t]?)
      //([ \t]*[^<>a-z\s\/\n][^<>a-z:!\?\n]*[^<>a-z(!\?:,\n\.][ \t]?)

      spoken: $ =>  prec(1, /([ \t]*([^[=(\s#]([A-Za-z0-9.,-_ ])+)[ \t]?)/),
      //  /([ \t]*([^(\s]([A-Za-z0-9.,-_ ])+)[ \t]?)/
      //the above regex is your original. use
      //make this a line that must have no endline chars

      parenthetical: $ => prec(2, /[ \t]?(\()+(([A-Za-z0-9 ])+)(\))+[ \t]?/),
      //make this refer 2 NO endline chars.

      action: $ => /([ \t]*([^(\n#=]([A-Za-z0-9.,-_ ])+)[a-z]([A-Za-z0-9.,-_ ])+[ \t]?)/,
      //extras

      //note: $ => token(prec(2, /\[{2}([^[\]]+)\]{2}/)),

      note: $ => token(seq('[[', /[^[\]]+/, ']]')),

      boneyard: $=> /\n\/\*(.|\n)*\n\*\//,

      _delimit: $=> seq('\n', '\n'),

      synopsis: $=> seq('\n','=', /.+/),

      //organizer things

      _scene_loc: $=> prec(4, token(seq(choice('INT', 'EXT'),
                                   optional('.'),
                                   optional(choice('/INT.', '/EXT.')),
                                   ' '))),

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
