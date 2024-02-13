module.exports = grammar({
    name: 'textproto',

    rules: {
        source_file: $ => repeat($._field),
        _newline: $ => "\n",
        _letter: $ => /[A-Za-z_]/,
        _oct: $ => /[0-7]/,
        _dec: $ => /[0-9]/,
        dec_lit: $ => choice("0", seq(/[1-9]/, repeat($._dec))),
        _hex: $ => /[0-9A-Fa-f]/,
        _oct_int: $ => seq("0", repeat1($._oct)),
        _hex_int: $ => seq("0", choice("X", "x"), repeat1($._hex)),
        whitespace: $ => choice(" ", "\t", "\r", "\n", "\v", "\f"),
        _ident: $ => seq($._letter, repeat(/\w/)),
        identifier: $ => $._ident,
        _single_string: $ => seq("'", /[^']+/, "'"),
        _double_string: $ => seq('"', /[^"]+/, '"'),
        scalar_field: $ => seq($.field_name, ":", choice($._scalar_value, $.scalar_list), optional(choice(";", ","))),
        scalar_list: $ => prec(1, seq("[", optional(seq($._scalar_value, repeat(seq(",", $._scalar_value)))), "]")),
        _field: $ => choice($.scalar_field, $.message_field),
        message_field: $ => seq($.field_name, optional(":"), choice($.message_value, $.message_list), optional(choice(";", ","))),
        message_list: $ => seq("[", optional(seq($.message_value, repeat(seq(",", $.message_value)))), "]"),
        comment: $ => /#[^\n]*/,
        message_value: $ => choice(seq("{", repeat($._field), "}"), seq("<", repeat($._field), ">")),
        field_name: $ => choice($._ident, $.extension_name, $.any_name),
        extension_name: $ => seq("[", $.type_name, "]"),
        any_name: $ => seq("[", $.domain, "/", $.type_name, "]"),
        type_name: $ => seq($._ident, repeat(seq(".", $._ident))),
        domain: $ => seq($._ident, repeat(seq(".", $._ident))),
        _scalar_value: $ => choice($.string, $.float, $.identifier, $.signed_identifier, $.dec_signed_integer, $.oct_signed_integer, $.hex_signed_integer, $.dec_unsigned_integer, $.oct_unsigned_integer, $.hex_unsigned_integer),
        string: $ => repeat1($._string),
        float: $ => seq(optional("-"), $._float),
        signed_identifier: $ => seq("-", $._ident),
        dec_signed_integer: $ => seq("-", $._dec_int),
        oct_signed_integer: $ => seq("-", $._oct_int),
        hex_signed_integer: $ => seq("-", $._hex_int),
        dec_unsigned_integer: $ => $._dec_int,
        oct_unsigned_integer: $ => $._oct_int,
        hex_unsigned_integer: $ => $._hex_int,
        _string: $ => choice($._single_string, $._double_string),
        _float: $ => choice(seq($.float_lit, optional(choice("F", "f"))), seq($.dec_lit, choice("F", "f"))),
        _dec_int: $ => $.dec_lit,
        float_lit: $ => seq(".", repeat1($._dec), optional($._exp)),
        _exp: $ => seq(choice("E", "e"), optional(choice("+", "-")), repeat1($._dec)),








    },
    extras: $ => [$.comment, /\s/],
});
