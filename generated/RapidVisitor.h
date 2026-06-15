
// Generated from Rapid.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RapidParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RapidParser.
 */
class  RapidVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RapidParser.
   */
    virtual std::any visitRapidModule(RapidParser::RapidModuleContext *context) = 0;

    virtual std::any visitModuleDeclaration(RapidParser::ModuleDeclarationContext *context) = 0;

    virtual std::any visitModuleAttributeList(RapidParser::ModuleAttributeListContext *context) = 0;

    virtual std::any visitModuleAttribute(RapidParser::ModuleAttributeContext *context) = 0;

    virtual std::any visitDataDeclaration(RapidParser::DataDeclarationContext *context) = 0;

    virtual std::any visitDataType(RapidParser::DataTypeContext *context) = 0;

    virtual std::any visitArrayDimension(RapidParser::ArrayDimensionContext *context) = 0;

    virtual std::any visitArrayDimExpr(RapidParser::ArrayDimExprContext *context) = 0;

    virtual std::any visitRoutineDeclaration(RapidParser::RoutineDeclarationContext *context) = 0;

    virtual std::any visitProcedureDeclaration(RapidParser::ProcedureDeclarationContext *context) = 0;

    virtual std::any visitFunctionDeclaration(RapidParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitTrapDeclaration(RapidParser::TrapDeclarationContext *context) = 0;

    virtual std::any visitRoutineAttribute(RapidParser::RoutineAttributeContext *context) = 0;

    virtual std::any visitParameterList(RapidParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(RapidParser::ParameterContext *context) = 0;

    virtual std::any visitArrayPlaceholder(RapidParser::ArrayPlaceholderContext *context) = 0;

    virtual std::any visitStatement(RapidParser::StatementContext *context) = 0;

    virtual std::any visitAssignmentStatement(RapidParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitProcedureCallStatement(RapidParser::ProcedureCallStatementContext *context) = 0;

    virtual std::any visitArgumentList(RapidParser::ArgumentListContext *context) = 0;

    virtual std::any visitArgument(RapidParser::ArgumentContext *context) = 0;

    virtual std::any visitNamedOrPositionalExpr(RapidParser::NamedOrPositionalExprContext *context) = 0;

    virtual std::any visitSwitchExpr(RapidParser::SwitchExprContext *context) = 0;

    virtual std::any visitMoveAbsJStatement(RapidParser::MoveAbsJStatementContext *context) = 0;

    virtual std::any visitMoveCStatement(RapidParser::MoveCStatementContext *context) = 0;

    virtual std::any visitMoveJStatement(RapidParser::MoveJStatementContext *context) = 0;

    virtual std::any visitMoveLStatement(RapidParser::MoveLStatementContext *context) = 0;

    virtual std::any visitIfStatement(RapidParser::IfStatementContext *context) = 0;

    virtual std::any visitForStatement(RapidParser::ForStatementContext *context) = 0;

    virtual std::any visitWhileStatement(RapidParser::WhileStatementContext *context) = 0;

    virtual std::any visitTestStatement(RapidParser::TestStatementContext *context) = 0;

    virtual std::any visitReturnStatement(RapidParser::ReturnStatementContext *context) = 0;

    virtual std::any visitExitStatement(RapidParser::ExitStatementContext *context) = 0;

    virtual std::any visitGotoStatement(RapidParser::GotoStatementContext *context) = 0;

    virtual std::any visitLabelStatement(RapidParser::LabelStatementContext *context) = 0;

    virtual std::any visitConnectStatement(RapidParser::ConnectStatementContext *context) = 0;

    virtual std::any visitRaiseStatement(RapidParser::RaiseStatementContext *context) = 0;

    virtual std::any visitRetryStatement(RapidParser::RetryStatementContext *context) = 0;

    virtual std::any visitTryNextStatement(RapidParser::TryNextStatementContext *context) = 0;

    virtual std::any visitXorOrExpr(RapidParser::XorOrExprContext *context) = 0;

    virtual std::any visitUnaryExpr(RapidParser::UnaryExprContext *context) = 0;

    virtual std::any visitNotExpr(RapidParser::NotExprContext *context) = 0;

    virtual std::any visitVarRefExpr(RapidParser::VarRefExprContext *context) = 0;

    virtual std::any visitAddExpr(RapidParser::AddExprContext *context) = 0;

    virtual std::any visitLiteralExpr(RapidParser::LiteralExprContext *context) = 0;

    virtual std::any visitMulExpr(RapidParser::MulExprContext *context) = 0;

    virtual std::any visitAggregateExpr(RapidParser::AggregateExprContext *context) = 0;

    virtual std::any visitFuncCallExpr(RapidParser::FuncCallExprContext *context) = 0;

    virtual std::any visitRelExpr(RapidParser::RelExprContext *context) = 0;

    virtual std::any visitParenExpr(RapidParser::ParenExprContext *context) = 0;

    virtual std::any visitAndExpr(RapidParser::AndExprContext *context) = 0;

    virtual std::any visitFunctionCall(RapidParser::FunctionCallContext *context) = 0;

    virtual std::any visitVariableReference(RapidParser::VariableReferenceContext *context) = 0;

    virtual std::any visitAggregate(RapidParser::AggregateContext *context) = 0;

    virtual std::any visitLiteral(RapidParser::LiteralContext *context) = 0;


};

