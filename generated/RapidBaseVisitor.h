
// Generated from Rapid.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RapidVisitor.h"


/**
 * This class provides an empty implementation of RapidVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RapidBaseVisitor : public RapidVisitor {
public:

  virtual std::any visitRapidModule(RapidParser::RapidModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDeclaration(RapidParser::ModuleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleAttributeList(RapidParser::ModuleAttributeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleAttribute(RapidParser::ModuleAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataDeclaration(RapidParser::DataDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataType(RapidParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDimension(RapidParser::ArrayDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDimExpr(RapidParser::ArrayDimExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRoutineDeclaration(RapidParser::RoutineDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureDeclaration(RapidParser::ProcedureDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(RapidParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrapDeclaration(RapidParser::TrapDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRoutineAttribute(RapidParser::RoutineAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(RapidParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(RapidParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayPlaceholder(RapidParser::ArrayPlaceholderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(RapidParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(RapidParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureCallStatement(RapidParser::ProcedureCallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(RapidParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument(RapidParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedOrPositionalExpr(RapidParser::NamedOrPositionalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchExpr(RapidParser::SwitchExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveAbsJStatement(RapidParser::MoveAbsJStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveCStatement(RapidParser::MoveCStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveJStatement(RapidParser::MoveJStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveLStatement(RapidParser::MoveLStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(RapidParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(RapidParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(RapidParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTestStatement(RapidParser::TestStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(RapidParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExitStatement(RapidParser::ExitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotoStatement(RapidParser::GotoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabelStatement(RapidParser::LabelStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConnectStatement(RapidParser::ConnectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaiseStatement(RapidParser::RaiseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRetryStatement(RapidParser::RetryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryNextStatement(RapidParser::TryNextStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXorOrExpr(RapidParser::XorOrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpr(RapidParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(RapidParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarRefExpr(RapidParser::VarRefExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(RapidParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralExpr(RapidParser::LiteralExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExpr(RapidParser::MulExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregateExpr(RapidParser::AggregateExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCallExpr(RapidParser::FuncCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExpr(RapidParser::RelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(RapidParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpr(RapidParser::AndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(RapidParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableReference(RapidParser::VariableReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregate(RapidParser::AggregateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(RapidParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

