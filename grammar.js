/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'anzu',

  word: $ => $.identifier,

  extras: $ => [
    /\s|\\\r?\n/, // whitespace is ignored
    $.comment,    // comments are ignored
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.statement,
      $.function_definition,
      $.struct_definition,
    )),

/** 
 *             STRUCTS & FUNCTIONS 
 **/  

    function_definition: $ => seq(
      'fn',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('return_type', optional($.function_return_type_specifier)),
      field('body', $.compound_statement),
    ), 

    struct_definition: $ => seq(
      'struct', field('name', $.identifier),
      '{',
        field('members', repeat($.struct_member_definition)),
      '}',
    ),

    parameter_list: $ => seq(
      '(',
      commaSep($.parameter), 
      ')',
    ),

    function_return_type_specifier: $ => seq(
      '->', $.type_specifier
    ),

    struct_member_definition: $ => seq(
      $.identifier, ':', $.type_specifier, ';'),

    parameter: $ => 'TODO', 


/** 
 *             STATEMENTS 
 **/  
    statement: $ => choice(
      $.let_statement,
      $.var_statement,
      $.compound_statement,
      $.return_statement,
      $.for_statement,
      $.if_statement,
      $.expression_statement,
    ),

    let_statement: $ => seq('let', $._variable_declaration, ';'),

    var_statement: $ => seq('var', $._variable_declaration, ';'),

    compound_statement: $ => seq('{', repeat($.statement), '}'),

    return_statement: $ => seq('return', optional($.expression), ';'),

    for_statement: $ => seq('for', 'TODO', ';'),

    if_statement: $ => seq('if', 'TODO', ';'),

    expression_statement: $ => seq($.expression, ';'),
  
    _variable_declaration: $ => seq(
      field('name', $.identifier), 
      optional(choice(
        seq(
          ':=', 
          field('value', $.expression),
        ),
        seq(
          ':', 
          field('type', $.type_specifier),
          '=',
          field('value', $.expression),
        ),
      )), 
    ),


/** 
 *             COMMON
 **/  
    identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,

    type_specifier: $ => 'TODO',


/**
 *             MISC
 **/
    comment: _ => token(choice(
      seq('#', /(\\+(.|\r?\n)|[^\\\n])*/),
      // TODO: Maybe add multi line comment block?
    )),


/** 
 *             EXPRESSIONS 
 **/  
    expression: $ => choice(
      $.number_literal,
      $.string_literal 
    ),

    number_literal: $ => /[0-9]+(.[0-9]+)?u?/,

    string_literal: $ => /"[^"]*"/,
  }
});

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
