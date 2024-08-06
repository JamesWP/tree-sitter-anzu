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
  POSTFIX_UNARY: -4,
  TYPE_SUFFIX: 0, // TODO: not sure if this is right or not
};

module.exports = grammar({
  name: 'anzu',

  word: $ => $.identifier,

  extras: $ => [
    /\s|\\\r?\n/, // whitespace is ignored
    $.comment,    // comments are ignored
  ],

  conflicts: $ => [
    [$.assignment_expression, $.binary_expression, $.pointer_expression],
    [$.binary_expression, $.pointer_expression]
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
      optional(field('template_parameters', seq('!', $.template_parameter_list,))),
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

    template_parameter_list: $ => seq(
      '(',
        commaSep($.identifier), 
      ')',
    ),

    function_return_type_specifier: $ => seq(
      '->', $.type_specifier
    ),

    struct_member_definition: $ => choice(
      seq($.identifier, ':', $.type_specifier, ';'),
      $.function_definition,
    ),

    parameter: $ => seq($.identifier, ':', $.type_specifier),


/** 
 *             STATEMENTS 
 **/  
    statement: $ => choice(
      $.let_statement,
      $.var_statement,
      $.compound_statement,
      $.return_statement,
      $.for_statement,
      $.while_statement,
      $.if_statement,
      $.arena_statement,
      $.expression_statement,
    ),

    let_statement: $ => seq('let', $._variable_declaration, ';'),

    var_statement: $ => seq('var', $._variable_declaration, ';'),

    compound_statement: $ => seq('{', repeat($.statement), '}'),

    return_statement: $ => seq('return', optional($.expression), ';'),

    for_statement: $ => seq('for', $.expression, 'in', $.expression, $.compound_statement),

    while_statement: $ => seq('while', $.expression, $.compound_statement),

    if_statement: $ => seq(
      'if', 
      field('condition', $.expression), 
      field('true_block', $.compound_statement), 
      repeat(seq(
        'else', 
        optional(seq('if', 
           field('else_condition', $.expression)
        )),
        field('else_block', $.compound_statement),
      )),
    ),

    arena_statement: $ => seq('arena', $.identifier, ';'),

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

    type_specifier: $ => choice(
      $.builtin_type,
      field('type_id', $.identifier),
      prec.right(PREC.TYPE_SUFFIX, seq($.type_specifier, $.type_suffix)), 
      seq('typeof', '(', $.expression, ')'), 
    ),

    builtin_type: $ => choice('f32', 'f64', 'u32', 'u64', 'i32', 'i64', 'string'),

    type_suffix: $ => choice('&', 'const', '[]'),

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
      $._expression_not_binary,
      $.binary_expression,
    ),
    
    _expression_not_binary: $ => choice(
      $.number_literal,
      $.string_literal,
      $.array_literal,
      $.array_initializer_literal,
      $.bool_literal,
      $.identifier,
      $.compound_identifier,
      $.call_expression,
      $.template_expression,
      $.parenthesized_expression,
      $.unary_expression,
      $.pointer_expression,
      $.subscript_expression,
      $.assignment_expression,
    ),
  
    parenthesized_expression: $ => seq('(', $.expression, ')'),

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

    pointer_expression: $ => prec(PREC.POSTFIX_UNARY, seq(
      field('argument', $.expression),
      field('operator', choice('&', '@')),
    )),

    subscript_expression: $ => seq($.expression, '[', $.expression, ']'),

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', choice('-', '+')),
      field('argument', $.expression),
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', $._assignment_left_expression),
      field('operator', choice(
        '=',
        '*=',
        '/=',
        '%=',
        '+=',
        '-=',
        '<<=',
        '>>=',
        '&=',
        '^=',
        '|=',
      )),
      field('right', $.expression),
    )),

    _assignment_left_expression: $ => choice(
      $.identifier,
      $.compound_identifier,
      $.call_expression,
      $.parenthesized_expression,
      $.pointer_expression,
      $.subscript_expression,
    ),

    call_expression: $ => seq(
      field('function_expression', $.expression), 
      '(', 
        field('parameters', commaSep($.expression)), 
      ')',
    ),

    template_expression: $ => seq(
      field('function_expression', $.expression), 
      '!',
      '(', 
        field('template_parameters', commaSep($.expression)), 
      ')',
    ),

    number_literal: $ => /[0-9]+(.[0-9]+)?u?/,

    string_literal: $ => /"[^"]*"/,

    bool_literal: $ => choice('true', 'false'),

    array_initializer_literal: $ => seq(
      '[', 
        field('value', $.expression), 
        ';', 
        field('count', $.number_literal), 
      ']'
    ),

    array_literal: $ => seq('[', commaSep($.expression), ']'),
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
