module.exports = grammar({
    name: 'textproto',
    rules: {
        source_file: $ => repeat($._field),

        // lexical elements (no whitespace or comments)
        comment: $ => /#[^\n]*/,
        _dec_lit: $ => choice("0", /[1-9][0-9]*/),
        _dec_int: $ => $._dec_lit,
        _oct_int: $ => /0[0-7]+/,
        _hex_int: $ => /0[Xx][0-9A-Fa-f]+/,
        _letter: $ => /[A-Za-z_]/,
        _dec: $ => /[0-9]/,
        _hex: $ => /[0-9A-Fa-f]/,
        _whitespace: $ => choice(" ", "\t", "\r", "\n", "\v", "\f"),
        _ident: $ => /[A-Za-z_][A-Za-z_0-9]+/,
        _single_string: $ => /'[^'\n]*'/,
        _double_string: $ => /"[^"\n]*"/,
        _string: $ => choice($._single_string, $._double_string),
        float_lit: $ => seq(".", repeat1($._dec), optional($._exp)),
        _float: $ => choice(seq($.float_lit, token.immediate(optional(choice("F", "f")))), seq($._dec_lit, token.immediate(choice("F", "f")))),
        _exp: $ => /[Ee][+-][0-9]+/,

        // syntax elements
        identifier: $ => $._ident,
        scalar_field: $ => seq($.field_name, ":", choice($.scalar_value, $.scalar_list), optional(choice(";", ","))),
        scalar_list: $ => prec(1, seq("[", optional(seq($.scalar_value, repeat(seq(",", $.scalar_value)))), "]")),
        _field: $ => choice($.scalar_field, $.message_field),
        message_field: $ => seq($.field_name, optional(":"), choice($.message_value, $.message_list), optional(choice(";", ","))),
        message_list: $ => seq("[", optional(seq($.message_value, repeat(seq(",", $.message_value)))), "]"),
        message_value: $ => choice(seq("{", repeat($._field), "}"), seq("<", repeat($._field), ">")),
        field_name: $ => choice($._ident, $.extension_name, $.any_name),
        extension_name: $ => seq("[", $.type_name, "]"),
        any_name: $ => seq("[", $.domain, "/", $.type_name, "]"),
        type_name: $ => seq($._ident, repeat(seq(".", $._ident))),
        domain: $ => seq($._ident, repeat(seq(".", $._ident))),
        scalar_value: $ => choice($.string, $.float, $.identifier, $.signed_identifier, $.dec_signed_integer, $.oct_signed_integer, $.hex_signed_integer, $.dec_unsigned_integer, $.oct_unsigned_integer, $.hex_unsigned_integer),
        string: $ => repeat1($._string),
        float: $ => seq(optional("-"), $._float),
        signed_identifier: $ => seq("-", $._ident),
        dec_signed_integer: $ => seq("-", $._dec_int),
        oct_signed_integer: $ => seq("-", $._oct_int),
        hex_signed_integer: $ => seq("-", $._hex_int),
        dec_unsigned_integer: $ => $._dec_int,
        oct_unsigned_integer: $ => $._oct_int,
        hex_unsigned_integer: $ => $._hex_int,
    },
extras: $ => [$.comment, /\s/],
});
