/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Stolen from tree-sitter-c not all of these might be in anzu
const PREC = {
  PAREN_DECLARATOR: -10,
  ASSIGNMENT: -2,
  CONDITIONAL: -1,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  OFFSETOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,
  SIZEOF: 13,
  UNARY: 14,
  CALL: 15,
  FIELD: 16,
  SUBSCRIPT: 17,
};

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

    struct_member_definition: $ => choice(
      seq($.identifier, ':', $.type_specifier, ';'),
      $.function_definition,
    ),

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

    for_statement: $ => seq('for', $.expression, 'in', $.expression, $.compound_statement),

    if_statement: $ => seq(
      'if', 
      field('condition', $.expression), 
      field('true_block', $.compound_statement), 
      optional(seq('else', field('else_block', $.compound_statement)))
    ),

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

    compound_identifier: $ => seq(
      $.identifier, 
      '.', 
      $.identifier, 
      repeat(seq('.', $.identifier)),
    ),

    type_specifier: $ => seq(
      choice( 'f32', 'f64', 'u32', 'u64', 'string'),
      optional('&'),
    ),


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
      $.string_literal,
      $.array_literal,
      $.bool_literal,
      $.identifier,
      $.compound_identifier,
      $.call_expression,
      $.binary_expression,
    ),

    // Shameless copy from tree-sitter-c
    binary_expression: $ => {
      const table = [
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULTIPLY],
        ['/', PREC.MULTIPLY],
        ['%', PREC.MULTIPLY],
        ['||', PREC.LOGICAL_OR],
        ['&&', PREC.LOGICAL_AND],
        ['|', PREC.INCLUSIVE_OR],
        ['^', PREC.EXCLUSIVE_OR],
        ['&', PREC.BITWISE_AND],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['<', PREC.RELATIONAL],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $.expression),
          // @ts-ignore
          field('operator', operator),
          field('right', $.expression),
        ));
      }));
    },

    call_expression: $ => seq(
      field('function_expression', $.expression), 
      '(', 
        field('parameters', commaSep($.expression)), 
      ')',
    ),

    number_literal: $ => /[0-9]+(.[0-9]+)?u?/,

    string_literal: $ => /"[^"]*"/,

    bool_literal: $ => choice('true', 'false'),

    array_literal: $ => seq(
      '[', 
        field('value', $.expression), 
        ';', 
        field('count', $.number_literal), 
      ']'
    ),
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
