
// Generated from Rapid.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RapidParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, AND = 23, BACKWARD = 24, CASE = 25, CONNECT = 26, 
    CONST = 27, DEFAULT = 28, DIV = 29, DO = 30, ELSE = 31, ELSEIF = 32, 
    ENDFOR = 33, ENDFUNC = 34, ENDIF = 35, ENDMODULE = 36, ENDPROC = 37, 
    ENDTEST = 38, ENDTRAP = 39, ENDWHILE = 40, ERROR = 41, EXIT = 42, FALSE = 43, 
    FOR = 44, FROM = 45, FUNC = 46, GOTO = 47, IF = 48, INOUT = 49, LOCAL = 50, 
    MOD = 51, MODULE = 52, NOSTEPIN = 53, NOT = 54, NOVIEW = 55, OR = 56, 
    PERS = 57, PROC = 58, RAISE = 59, READONLY = 60, RETRY = 61, RETURN = 62, 
    STEP = 63, SYSMODULE = 64, TEST = 65, THEN = 66, TO = 67, TRAP = 68, 
    TRUE = 69, TRYNEXT = 70, VAR = 71, VIEWONLY = 72, WHILE = 73, WITH = 74, 
    XOR = 75, STRING = 76, NUM = 77, MOVEABSJ = 78, MOVEC = 79, MOVEJ = 80, 
    MOVEL = 81, IDENTIFIER = 82, COMMENT = 83, WHITESPACE = 84
  };

  enum {
    RuleRapidModule = 0, RuleModuleDeclaration = 1, RuleModuleAttributeList = 2, 
    RuleModuleAttribute = 3, RuleDataDeclaration = 4, RuleDataType = 5, 
    RuleArrayDimension = 6, RuleArrayDimExpr = 7, RuleRoutineDeclaration = 8, 
    RuleProcedureDeclaration = 9, RuleFunctionDeclaration = 10, RuleTrapDeclaration = 11, 
    RuleRoutineAttribute = 12, RuleParameterList = 13, RuleParameter = 14, 
    RuleArrayPlaceholder = 15, RuleStatement = 16, RuleAssignmentStatement = 17, 
    RuleProcedureCallStatement = 18, RuleArgumentList = 19, RuleArgument = 20, 
    RuleNamedOrPositionalExpr = 21, RuleSwitchExpr = 22, RuleMoveAbsJStatement = 23, 
    RuleMoveCStatement = 24, RuleMoveJStatement = 25, RuleMoveLStatement = 26, 
    RuleIfStatement = 27, RuleForStatement = 28, RuleWhileStatement = 29, 
    RuleTestStatement = 30, RuleReturnStatement = 31, RuleExitStatement = 32, 
    RuleGotoStatement = 33, RuleLabelStatement = 34, RuleConnectStatement = 35, 
    RuleRaiseStatement = 36, RuleRetryStatement = 37, RuleTryNextStatement = 38, 
    RuleExpression = 39, RuleFunctionCall = 40, RuleVariableReference = 41, 
    RuleAggregate = 42, RuleLiteral = 43
  };

  explicit RapidParser(antlr4::TokenStream *input);

  RapidParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RapidParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class RapidModuleContext;
  class ModuleDeclarationContext;
  class ModuleAttributeListContext;
  class ModuleAttributeContext;
  class DataDeclarationContext;
  class DataTypeContext;
  class ArrayDimensionContext;
  class ArrayDimExprContext;
  class RoutineDeclarationContext;
  class ProcedureDeclarationContext;
  class FunctionDeclarationContext;
  class TrapDeclarationContext;
  class RoutineAttributeContext;
  class ParameterListContext;
  class ParameterContext;
  class ArrayPlaceholderContext;
  class StatementContext;
  class AssignmentStatementContext;
  class ProcedureCallStatementContext;
  class ArgumentListContext;
  class ArgumentContext;
  class NamedOrPositionalExprContext;
  class SwitchExprContext;
  class MoveAbsJStatementContext;
  class MoveCStatementContext;
  class MoveJStatementContext;
  class MoveLStatementContext;
  class IfStatementContext;
  class ForStatementContext;
  class WhileStatementContext;
  class TestStatementContext;
  class ReturnStatementContext;
  class ExitStatementContext;
  class GotoStatementContext;
  class LabelStatementContext;
  class ConnectStatementContext;
  class RaiseStatementContext;
  class RetryStatementContext;
  class TryNextStatementContext;
  class ExpressionContext;
  class FunctionCallContext;
  class VariableReferenceContext;
  class AggregateContext;
  class LiteralContext; 

  class  RapidModuleContext : public antlr4::ParserRuleContext {
  public:
    RapidModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleDeclarationContext *moduleDeclaration();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RapidModuleContext* rapidModule();

  class  ModuleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ENDMODULE();
    ModuleAttributeListContext *moduleAttributeList();
    std::vector<DataDeclarationContext *> dataDeclaration();
    DataDeclarationContext* dataDeclaration(size_t i);
    std::vector<RoutineDeclarationContext *> routineDeclaration();
    RoutineDeclarationContext* routineDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDeclarationContext* moduleDeclaration();

  class  ModuleAttributeListContext : public antlr4::ParserRuleContext {
  public:
    ModuleAttributeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModuleAttributeContext *> moduleAttribute();
    ModuleAttributeContext* moduleAttribute(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleAttributeListContext* moduleAttributeList();

  class  ModuleAttributeContext : public antlr4::ParserRuleContext {
  public:
    ModuleAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSMODULE();
    antlr4::tree::TerminalNode *NOVIEW();
    antlr4::tree::TerminalNode *NOSTEPIN();
    antlr4::tree::TerminalNode *VIEWONLY();
    antlr4::tree::TerminalNode *READONLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleAttributeContext* moduleAttribute();

  class  DataDeclarationContext : public antlr4::ParserRuleContext {
  public:
    DataDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *PERS();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *LOCAL();
    ArrayDimensionContext *arrayDimension();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataDeclarationContext* dataDeclaration();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class  ArrayDimensionContext : public antlr4::ParserRuleContext {
  public:
    ArrayDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayDimExprContext *> arrayDimExpr();
    ArrayDimExprContext* arrayDimExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDimensionContext* arrayDimension();

  class  ArrayDimExprContext : public antlr4::ParserRuleContext {
  public:
    ArrayDimExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDimExprContext* arrayDimExpr();

  class  RoutineDeclarationContext : public antlr4::ParserRuleContext {
  public:
    RoutineDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcedureDeclarationContext *procedureDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    TrapDeclarationContext *trapDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineDeclarationContext* routineDeclaration();

  class  ProcedureDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProcedureDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROC();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ENDPROC();
    antlr4::tree::TerminalNode *LOCAL();
    ParameterListContext *parameterList();
    std::vector<RoutineAttributeContext *> routineAttribute();
    RoutineAttributeContext* routineAttribute(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureDeclarationContext* procedureDeclaration();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ENDFUNC();
    antlr4::tree::TerminalNode *LOCAL();
    ParameterListContext *parameterList();
    std::vector<RoutineAttributeContext *> routineAttribute();
    RoutineAttributeContext* routineAttribute(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  TrapDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TrapDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAP();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ENDTRAP();
    std::vector<RoutineAttributeContext *> routineAttribute();
    RoutineAttributeContext* routineAttribute(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrapDeclarationContext* trapDeclaration();

  class  RoutineAttributeContext : public antlr4::ParserRuleContext {
  public:
    RoutineAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOSTEPIN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineAttributeContext* routineAttribute();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArrayPlaceholderContext *arrayPlaceholder();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *PERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  ArrayPlaceholderContext : public antlr4::ParserRuleContext {
  public:
    ArrayPlaceholderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayPlaceholderContext* arrayPlaceholder();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataDeclarationContext *dataDeclaration();
    MoveAbsJStatementContext *moveAbsJStatement();
    MoveCStatementContext *moveCStatement();
    MoveJStatementContext *moveJStatement();
    MoveLStatementContext *moveLStatement();
    AssignmentStatementContext *assignmentStatement();
    ProcedureCallStatementContext *procedureCallStatement();
    IfStatementContext *ifStatement();
    ForStatementContext *forStatement();
    WhileStatementContext *whileStatement();
    TestStatementContext *testStatement();
    ReturnStatementContext *returnStatement();
    ExitStatementContext *exitStatement();
    GotoStatementContext *gotoStatement();
    LabelStatementContext *labelStatement();
    ConnectStatementContext *connectStatement();
    RaiseStatementContext *raiseStatement();
    RetryStatementContext *retryStatement();
    TryNextStatementContext *tryNextStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableReferenceContext *variableReference();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  ProcedureCallStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArgumentListContext *argumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureCallStatementContext* procedureCallStatement();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();
    NamedOrPositionalExprContext *namedOrPositionalExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  NamedOrPositionalExprContext : public antlr4::ParserRuleContext {
  public:
    NamedOrPositionalExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedOrPositionalExprContext* namedOrPositionalExpr();

  class  SwitchExprContext : public antlr4::ParserRuleContext {
  public:
    SwitchExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchExprContext* switchExpr();

  class  MoveAbsJStatementContext : public antlr4::ParserRuleContext {
  public:
    MoveAbsJStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVEABSJ();
    std::vector<NamedOrPositionalExprContext *> namedOrPositionalExpr();
    NamedOrPositionalExprContext* namedOrPositionalExpr(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<SwitchExprContext *> switchExpr();
    SwitchExprContext* switchExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveAbsJStatementContext* moveAbsJStatement();

  class  MoveCStatementContext : public antlr4::ParserRuleContext {
  public:
    MoveCStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVEC();
    std::vector<NamedOrPositionalExprContext *> namedOrPositionalExpr();
    NamedOrPositionalExprContext* namedOrPositionalExpr(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<SwitchExprContext *> switchExpr();
    SwitchExprContext* switchExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveCStatementContext* moveCStatement();

  class  MoveJStatementContext : public antlr4::ParserRuleContext {
  public:
    MoveJStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVEJ();
    std::vector<NamedOrPositionalExprContext *> namedOrPositionalExpr();
    NamedOrPositionalExprContext* namedOrPositionalExpr(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<SwitchExprContext *> switchExpr();
    SwitchExprContext* switchExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveJStatementContext* moveJStatement();

  class  MoveLStatementContext : public antlr4::ParserRuleContext {
  public:
    MoveLStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVEL();
    std::vector<NamedOrPositionalExprContext *> namedOrPositionalExpr();
    NamedOrPositionalExprContext* namedOrPositionalExpr(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<SwitchExprContext *> switchExpr();
    SwitchExprContext* switchExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveLStatementContext* moveLStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ENDIF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *FROM();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *ENDFOR();
    antlr4::tree::TerminalNode *STEP();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *ENDWHILE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  TestStatementContext : public antlr4::ParserRuleContext {
  public:
    TestStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEST();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ENDTEST();
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestStatementContext* testStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ExitStatementContext : public antlr4::ParserRuleContext {
  public:
    ExitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExitStatementContext* exitStatement();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  LabelStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelStatementContext* labelStatement();

  class  ConnectStatementContext : public antlr4::ParserRuleContext {
  public:
    ConnectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECT();
    VariableReferenceContext *variableReference();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectStatementContext* connectStatement();

  class  RaiseStatementContext : public antlr4::ParserRuleContext {
  public:
    RaiseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RaiseStatementContext* raiseStatement();

  class  RetryStatementContext : public antlr4::ParserRuleContext {
  public:
    RetryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETRY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetryStatementContext* retryStatement();

  class  TryNextStatementContext : public antlr4::ParserRuleContext {
  public:
    TryNextStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRYNEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryNextStatementContext* tryNextStatement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  XorOrExprContext : public ExpressionContext {
  public:
    XorOrExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryExprContext : public ExpressionContext {
  public:
    UnaryExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public ExpressionContext {
  public:
    NotExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarRefExprContext : public ExpressionContext {
  public:
    VarRefExprContext(ExpressionContext *ctx);

    VariableReferenceContext *variableReference();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddExprContext : public ExpressionContext {
  public:
    AddExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralExprContext : public ExpressionContext {
  public:
    LiteralExprContext(ExpressionContext *ctx);

    LiteralContext *literal();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulExprContext : public ExpressionContext {
  public:
    MulExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AggregateExprContext : public ExpressionContext {
  public:
    AggregateExprContext(ExpressionContext *ctx);

    AggregateContext *aggregate();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallExprContext : public ExpressionContext {
  public:
    FuncCallExprContext(ExpressionContext *ctx);

    FunctionCallContext *functionCall();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelExprContext : public ExpressionContext {
  public:
    RelExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExpressionContext {
  public:
    ParenExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndExprContext : public ExpressionContext {
  public:
    AndExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArgumentListContext *argumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  VariableReferenceContext : public antlr4::ParserRuleContext {
  public:
    VariableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableReferenceContext* variableReference();

  class  AggregateContext : public antlr4::ParserRuleContext {
  public:
    AggregateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregateContext* aggregate();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

