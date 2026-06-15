// Rapid.g4
//
// Starter ANTLR4 grammar for the ABB RAPID language (RobotWare 2 / IRC5),
// based on the structure described in the RAPID Reference Manual
// (module / routine / data declarations, statements, expressions).
//
// This is a STARTING POINT, not a full implementation of the manual:
//   - parameter modifiers (\Switch, optional/conditional args) are simplified
//   - RAPID identifiers are case-insensitive; this grammar currently treats
//     keywords as case-sensitive (uppercase). If your .mod files use mixed
//     case keywords, either normalize them first or extend the lexer rules
//     with case-insensitive fragments.
//   - MoveAbsJ / MoveJ / MoveL / MoveC have dedicated statement rules
//     (moveAbsJStatement, moveJStatement, moveLStatement, moveCStatement);
//     other instructions (TPWrite, SetDO, ...) still go through the generic
//     procedureCallStatement / argumentList.
//
// Extend incrementally against MANUAL_RAPID.pdf as needed.

grammar Rapid;

// ==========================================================================
// PARSER
// ==========================================================================

rapidModule
    : moduleDeclaration EOF
    ;

moduleDeclaration
    : MODULE IDENTIFIER moduleAttributeList?
        (dataDeclaration | routineDeclaration)*
      ENDMODULE
    ;

moduleAttributeList
    : '(' moduleAttribute (',' moduleAttribute)* ')'
    ;

moduleAttribute
    : SYSMODULE | NOVIEW | NOSTEPIN | VIEWONLY | READONLY
    ;

// ---- Data declarations --------------------------------------------------

dataDeclaration
    : LOCAL? (VAR | PERS | CONST) dataType IDENTIFIER arrayDimension? (':=' expression)? ';'
    ;

dataType
    : IDENTIFIER
    ;

arrayDimension
    : '{' arrayDimExpr (',' arrayDimExpr)* '}'
    ;

arrayDimExpr
    : expression
    | '*'
    ;

// ---- Routine declarations ------------------------------------------------

routineDeclaration
    : procedureDeclaration
    | functionDeclaration
    | trapDeclaration
    ;

procedureDeclaration
    : LOCAL? PROC IDENTIFIER '(' parameterList? ')' routineAttribute*
        statement*
      ENDPROC
    ;

functionDeclaration
    : LOCAL? FUNC dataType IDENTIFIER '(' parameterList? ')' routineAttribute*
        statement*
      ENDFUNC
    ;

trapDeclaration
    : TRAP IDENTIFIER routineAttribute*
        statement*
      ENDTRAP
    ;

routineAttribute
    : NOSTEPIN
    ;

parameterList
    : parameter (',' parameter)*
    ;

// '\' marks an optional/switch parameter (simplified from the full manual syntax)
parameter
    : '\\'? (INOUT | VAR | PERS)? dataType IDENTIFIER arrayPlaceholder?
    ;

arrayPlaceholder
    : '{' '*' (',' '*')* '}'
    ;

// ---- Statements -----------------------------------------------------------

statement
    : dataDeclaration
    | moveAbsJStatement
    | moveCStatement
    | moveJStatement
    | moveLStatement
    | assignmentStatement
    | procedureCallStatement
    | ifStatement
    | forStatement
    | whileStatement
    | testStatement
    | returnStatement
    | exitStatement
    | gotoStatement
    | labelStatement
    | connectStatement
    | raiseStatement
    | retryStatement
    | tryNextStatement
    ;

assignmentStatement
    : variableReference ':=' expression ';'
    ;

procedureCallStatement
    : IDENTIFIER argumentList? ';'
    ;

argumentList
    : argument (',' argument)*
    ;

argument
    : '\\' IDENTIFIER (':=' expression)?   // switch / conditional argument, e.g. \Conc, \Z:=10
    | namedOrPositionalExpr                // positional or named (Name:=expr) argument
    ;

// An argument that may optionally be passed by name, e.g.
//   jpos1              (positional)
//   ToJointPos:=jpos1  (named)
namedOrPositionalExpr
    : (IDENTIFIER ':=')? expression
    ;

// A '\Switch:=value' conditional argument with a mandatory value,
// e.g. \V:=200, \T:=5, \Z:=10, \WObj:=wobj1
switchExpr
    : '\\' IDENTIFIER ':=' expression
    ;

// ---- Move instructions ------------------------------------------------------
// MoveAbsJ / MoveJ / MoveL share the same trailing shape:
//   [\Conc,] [ToX:=] <target> ','
//   [Speed:=] <speeddata> (\V:=<num> | \T:=<num>)? ','
//   [Zone:=]  <zonedata>  (\Z:=<num>)? ','
//   [Tool:=]  <tooldata>  (\WObj:=<wobjdata>)? ';'
// MoveC additionally carries a CirPoint before the ToPoint.
//
// The optional leading name (ToJointPos/ToPoint/CirPoint/Speed/Zone/Tool) and
// the switch names (V/T/Z/WObj/Conc) are captured generically via
// namedOrPositionalExpr/switchExpr; a visitor can inspect their IDENTIFIER
// text, or fall back to positional order if no name was given.

moveAbsJStatement
    : MOVEABSJ ('\\' IDENTIFIER ',')?
        namedOrPositionalExpr ','                  // [ToJointPos:=] jointtarget
        namedOrPositionalExpr switchExpr? ','      // [Speed:=] speeddata [\V|\T]
        namedOrPositionalExpr switchExpr? ','      // [Zone:=] zonedata [\Z]
        namedOrPositionalExpr switchExpr?          // [Tool:=] tooldata [\WObj]
      ';'
    ;

moveCStatement
    : MOVEC ('\\' IDENTIFIER ',')?
        namedOrPositionalExpr ','                  // [CirPoint:=] robtarget
        namedOrPositionalExpr ','                  // [ToPoint:=] robtarget
        namedOrPositionalExpr switchExpr? ','      // [Speed:=] speeddata [\V|\T]
        namedOrPositionalExpr switchExpr? ','      // [Zone:=] zonedata [\Z]
        namedOrPositionalExpr switchExpr?          // [Tool:=] tooldata [\WObj]
      ';'
    ;

moveJStatement
    : MOVEJ ('\\' IDENTIFIER ',')?
        namedOrPositionalExpr ','                  // [ToPoint:=] robtarget
        namedOrPositionalExpr switchExpr? ','      // [Speed:=] speeddata [\V|\T]
        namedOrPositionalExpr switchExpr? ','      // [Zone:=] zonedata [\Z]
        namedOrPositionalExpr switchExpr?          // [Tool:=] tooldata [\WObj]
      ';'
    ;

moveLStatement
    : MOVEL ('\\' IDENTIFIER ',')?
        namedOrPositionalExpr ','                  // [ToPoint:=] robtarget
        namedOrPositionalExpr switchExpr? ','      // [Speed:=] speeddata [\V|\T]
        namedOrPositionalExpr switchExpr? ','      // [Zone:=] zonedata [\Z]
        namedOrPositionalExpr switchExpr?          // [Tool:=] tooldata [\WObj]
      ';'
    ;

ifStatement
    : IF expression THEN statement*
        (ELSEIF expression THEN statement*)*
        (ELSE statement*)?
      ENDIF
    ;

forStatement
    : FOR IDENTIFIER FROM expression TO expression (STEP expression)? DO
        statement*
      ENDFOR
    ;

whileStatement
    : WHILE expression DO
        statement*
      ENDWHILE
    ;

testStatement
    : TEST expression
        (CASE expression (',' expression)* ':' statement*)+
        (DEFAULT ':' statement*)?
      ENDTEST
    ;

returnStatement
    : RETURN expression? ';'
    ;

exitStatement
    : EXIT ';'
    ;

gotoStatement
    : GOTO IDENTIFIER ';'
    ;

labelStatement
    : IDENTIFIER ':'
    ;

connectStatement
    : CONNECT variableReference WITH IDENTIFIER ';'
    ;

raiseStatement
    : RAISE IDENTIFIER? ';'
    ;

retryStatement
    : RETRY ';'
    ;

tryNextStatement
    : TRYNEXT ';'
    ;

// ---- Expressions ------------------------------------------------------------
// Precedence (highest first): unary +/-, * / DIV MOD, + -, relational, NOT, AND, XOR/OR

expression
    : '(' expression ')'                                          # parenExpr
    | aggregate                                                    # aggregateExpr
    | functionCall                                                 # funcCallExpr
    | variableReference                                            # varRefExpr
    | literal                                                       # literalExpr
    | ('-' | '+') expression                                        # unaryExpr
    | expression op=('*' | '/' | DIV | MOD) expression              # mulExpr
    | expression op=('+' | '-') expression                          # addExpr
    | expression op=('=' | '<>' | '<' | '>' | '<=' | '>=') expression # relExpr
    | NOT expression                                                # notExpr
    | expression AND expression                                     # andExpr
    | expression op=(XOR | OR) expression                           # xorOrExpr
    ;

functionCall
    : IDENTIFIER '(' argumentList? ')'
    ;

variableReference
    : IDENTIFIER ('.' IDENTIFIER)* ('{' expression (',' expression)* '}')?
    ;

aggregate
    : '[' expression (',' expression)* ']'
    ;

literal
    : NUM
    | STRING
    | TRUE
    | FALSE
    ;

// ==========================================================================
// LEXER
// ==========================================================================

// ---- Keywords (RAPID reserved words) ----
AND       : 'AND';
BACKWARD  : 'BACKWARD';
CASE      : 'CASE';
CONNECT   : 'CONNECT';
CONST     : 'CONST';
DEFAULT   : 'DEFAULT';
DIV       : 'DIV';
DO        : 'DO';
ELSE      : 'ELSE';
ELSEIF    : 'ELSEIF';
ENDFOR    : 'ENDFOR';
ENDFUNC   : 'ENDFUNC';
ENDIF     : 'ENDIF';
ENDMODULE : 'ENDMODULE';
ENDPROC   : 'ENDPROC';
ENDTEST   : 'ENDTEST';
ENDTRAP   : 'ENDTRAP';
ENDWHILE  : 'ENDWHILE';
ERROR     : 'ERROR';
EXIT      : 'EXIT';
FALSE     : 'FALSE';
FOR       : 'FOR';
FROM      : 'FROM';
FUNC      : 'FUNC';
GOTO      : 'GOTO';
IF        : 'IF';
INOUT     : 'INOUT';
LOCAL     : 'LOCAL';
MOD       : 'MOD';
MODULE    : 'MODULE';
NOSTEPIN  : 'NOSTEPIN';
NOT       : 'NOT';
NOVIEW    : 'NOVIEW';
OR        : 'OR';
PERS      : 'PERS';
PROC      : 'PROC';
RAISE     : 'RAISE';
READONLY  : 'READONLY';
RETRY     : 'RETRY';
RETURN    : 'RETURN';
STEP      : 'STEP';
SYSMODULE : 'SYSMODULE';
TEST      : 'TEST';
THEN      : 'THEN';
TO        : 'TO';
TRAP      : 'TRAP';
TRUE      : 'TRUE';
TRYNEXT   : 'TRYNEXT';
VAR       : 'VAR';
VIEWONLY  : 'VIEWONLY';
WHILE     : 'WHILE';
WITH      : 'WITH';
XOR       : 'XOR';

// ---- Literals ----

// String values, with RAPID-style doubled-quote and doubled-backslash escapes
STRING
    : '"' ( '""' | '\\\\' | ~["\r\n] )*? '"'
    ;

// Integer or decimal, with optional exponent (e.g. 3, -100, 3.5, 3E2, -245E-2)
NUM
    : DIGIT+ ('.' DIGIT+)? EXPONENT?
    | DIGIT+ EXPONENT
    ;

fragment EXPONENT : [eE] [+-]? DIGIT+;
fragment DIGIT    : [0-9];

// ---- Move instructions (predefined RAPID instruction names) ----
// Defined as dedicated keyword tokens (must come before IDENTIFIER, since
// ANTLR breaks ties between equal-length matches by rule order) so the
// parser can give them their own strongly-typed statement rules.
MOVEABSJ : 'MoveAbsJ';
MOVEC    : 'MoveC';
MOVEJ    : 'MoveJ';
MOVEL    : 'MoveL';

// ---- Identifiers ----
// max length 16 chars per the manual; not enforced here
IDENTIFIER
    : [a-zA-Z_] [a-zA-Z0-9_]*
    ;

// ---- Comments & whitespace ----

// "A comment starts with an exclamation mark and ends with a new-line character"
COMMENT
    : '!' ~[\r\n]* -> skip
    ;

WHITESPACE
    : [ \t\r\n]+ -> skip
    ;
