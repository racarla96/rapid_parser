// Generated from /workspaces/rapid_parser/Rapid.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link RapidParser}.
 */
public interface RapidListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link RapidParser#rapidModule}.
	 * @param ctx the parse tree
	 */
	void enterRapidModule(RapidParser.RapidModuleContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#rapidModule}.
	 * @param ctx the parse tree
	 */
	void exitRapidModule(RapidParser.RapidModuleContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#moduleDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterModuleDeclaration(RapidParser.ModuleDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#moduleDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitModuleDeclaration(RapidParser.ModuleDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#moduleAttributeList}.
	 * @param ctx the parse tree
	 */
	void enterModuleAttributeList(RapidParser.ModuleAttributeListContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#moduleAttributeList}.
	 * @param ctx the parse tree
	 */
	void exitModuleAttributeList(RapidParser.ModuleAttributeListContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#moduleAttribute}.
	 * @param ctx the parse tree
	 */
	void enterModuleAttribute(RapidParser.ModuleAttributeContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#moduleAttribute}.
	 * @param ctx the parse tree
	 */
	void exitModuleAttribute(RapidParser.ModuleAttributeContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#dataDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterDataDeclaration(RapidParser.DataDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#dataDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitDataDeclaration(RapidParser.DataDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#dataType}.
	 * @param ctx the parse tree
	 */
	void enterDataType(RapidParser.DataTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#dataType}.
	 * @param ctx the parse tree
	 */
	void exitDataType(RapidParser.DataTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#arrayDimension}.
	 * @param ctx the parse tree
	 */
	void enterArrayDimension(RapidParser.ArrayDimensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#arrayDimension}.
	 * @param ctx the parse tree
	 */
	void exitArrayDimension(RapidParser.ArrayDimensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#arrayDimExpr}.
	 * @param ctx the parse tree
	 */
	void enterArrayDimExpr(RapidParser.ArrayDimExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#arrayDimExpr}.
	 * @param ctx the parse tree
	 */
	void exitArrayDimExpr(RapidParser.ArrayDimExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#routineDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterRoutineDeclaration(RapidParser.RoutineDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#routineDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitRoutineDeclaration(RapidParser.RoutineDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#procedureDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterProcedureDeclaration(RapidParser.ProcedureDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#procedureDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitProcedureDeclaration(RapidParser.ProcedureDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDeclaration(RapidParser.FunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDeclaration(RapidParser.FunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#trapDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterTrapDeclaration(RapidParser.TrapDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#trapDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitTrapDeclaration(RapidParser.TrapDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#routineAttribute}.
	 * @param ctx the parse tree
	 */
	void enterRoutineAttribute(RapidParser.RoutineAttributeContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#routineAttribute}.
	 * @param ctx the parse tree
	 */
	void exitRoutineAttribute(RapidParser.RoutineAttributeContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(RapidParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(RapidParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(RapidParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(RapidParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#arrayPlaceholder}.
	 * @param ctx the parse tree
	 */
	void enterArrayPlaceholder(RapidParser.ArrayPlaceholderContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#arrayPlaceholder}.
	 * @param ctx the parse tree
	 */
	void exitArrayPlaceholder(RapidParser.ArrayPlaceholderContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(RapidParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(RapidParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#assignmentStatement}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentStatement(RapidParser.AssignmentStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#assignmentStatement}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentStatement(RapidParser.AssignmentStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#procedureCallStatement}.
	 * @param ctx the parse tree
	 */
	void enterProcedureCallStatement(RapidParser.ProcedureCallStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#procedureCallStatement}.
	 * @param ctx the parse tree
	 */
	void exitProcedureCallStatement(RapidParser.ProcedureCallStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void enterArgumentList(RapidParser.ArgumentListContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void exitArgumentList(RapidParser.ArgumentListContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#argument}.
	 * @param ctx the parse tree
	 */
	void enterArgument(RapidParser.ArgumentContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#argument}.
	 * @param ctx the parse tree
	 */
	void exitArgument(RapidParser.ArgumentContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(RapidParser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(RapidParser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#forStatement}.
	 * @param ctx the parse tree
	 */
	void enterForStatement(RapidParser.ForStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#forStatement}.
	 * @param ctx the parse tree
	 */
	void exitForStatement(RapidParser.ForStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#whileStatement}.
	 * @param ctx the parse tree
	 */
	void enterWhileStatement(RapidParser.WhileStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#whileStatement}.
	 * @param ctx the parse tree
	 */
	void exitWhileStatement(RapidParser.WhileStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#testStatement}.
	 * @param ctx the parse tree
	 */
	void enterTestStatement(RapidParser.TestStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#testStatement}.
	 * @param ctx the parse tree
	 */
	void exitTestStatement(RapidParser.TestStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void enterReturnStatement(RapidParser.ReturnStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void exitReturnStatement(RapidParser.ReturnStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#exitStatement}.
	 * @param ctx the parse tree
	 */
	void enterExitStatement(RapidParser.ExitStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#exitStatement}.
	 * @param ctx the parse tree
	 */
	void exitExitStatement(RapidParser.ExitStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#gotoStatement}.
	 * @param ctx the parse tree
	 */
	void enterGotoStatement(RapidParser.GotoStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#gotoStatement}.
	 * @param ctx the parse tree
	 */
	void exitGotoStatement(RapidParser.GotoStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#labelStatement}.
	 * @param ctx the parse tree
	 */
	void enterLabelStatement(RapidParser.LabelStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#labelStatement}.
	 * @param ctx the parse tree
	 */
	void exitLabelStatement(RapidParser.LabelStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#connectStatement}.
	 * @param ctx the parse tree
	 */
	void enterConnectStatement(RapidParser.ConnectStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#connectStatement}.
	 * @param ctx the parse tree
	 */
	void exitConnectStatement(RapidParser.ConnectStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#raiseStatement}.
	 * @param ctx the parse tree
	 */
	void enterRaiseStatement(RapidParser.RaiseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#raiseStatement}.
	 * @param ctx the parse tree
	 */
	void exitRaiseStatement(RapidParser.RaiseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#retryStatement}.
	 * @param ctx the parse tree
	 */
	void enterRetryStatement(RapidParser.RetryStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#retryStatement}.
	 * @param ctx the parse tree
	 */
	void exitRetryStatement(RapidParser.RetryStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#tryNextStatement}.
	 * @param ctx the parse tree
	 */
	void enterTryNextStatement(RapidParser.TryNextStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#tryNextStatement}.
	 * @param ctx the parse tree
	 */
	void exitTryNextStatement(RapidParser.TryNextStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code xorOrExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterXorOrExpr(RapidParser.XorOrExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code xorOrExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitXorOrExpr(RapidParser.XorOrExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unaryExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExpr(RapidParser.UnaryExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unaryExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExpr(RapidParser.UnaryExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code notExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterNotExpr(RapidParser.NotExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code notExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitNotExpr(RapidParser.NotExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varRefExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterVarRefExpr(RapidParser.VarRefExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varRefExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitVarRefExpr(RapidParser.VarRefExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code addExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAddExpr(RapidParser.AddExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code addExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAddExpr(RapidParser.AddExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code literalExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterLiteralExpr(RapidParser.LiteralExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code literalExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitLiteralExpr(RapidParser.LiteralExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code mulExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMulExpr(RapidParser.MulExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code mulExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMulExpr(RapidParser.MulExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code aggregateExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAggregateExpr(RapidParser.AggregateExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code aggregateExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAggregateExpr(RapidParser.AggregateExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code funcCallExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterFuncCallExpr(RapidParser.FuncCallExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code funcCallExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitFuncCallExpr(RapidParser.FuncCallExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterRelExpr(RapidParser.RelExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code relExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitRelExpr(RapidParser.RelExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code parenExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterParenExpr(RapidParser.ParenExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code parenExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitParenExpr(RapidParser.ParenExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code andExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAndExpr(RapidParser.AndExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code andExpr}
	 * labeled alternative in {@link RapidParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAndExpr(RapidParser.AndExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall(RapidParser.FunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall(RapidParser.FunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#variableReference}.
	 * @param ctx the parse tree
	 */
	void enterVariableReference(RapidParser.VariableReferenceContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#variableReference}.
	 * @param ctx the parse tree
	 */
	void exitVariableReference(RapidParser.VariableReferenceContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#aggregate}.
	 * @param ctx the parse tree
	 */
	void enterAggregate(RapidParser.AggregateContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#aggregate}.
	 * @param ctx the parse tree
	 */
	void exitAggregate(RapidParser.AggregateContext ctx);
	/**
	 * Enter a parse tree produced by {@link RapidParser#literal}.
	 * @param ctx the parse tree
	 */
	void enterLiteral(RapidParser.LiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link RapidParser#literal}.
	 * @param ctx the parse tree
	 */
	void exitLiteral(RapidParser.LiteralContext ctx);
}