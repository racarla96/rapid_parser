// Interpreter.hpp
//
// A tree-walking interpreter for the parse tree produced by Rapid.g4.
//
// Covers:
//   - module-level PERS/CONST/VAR initialization (globals)
//   - PROC/FUNC declarations, calls, parameters (positional/named/\switch),
//     RETURN, and a call stack (execution stack) with recursion-depth guard
//   - full expression evaluation (arithmetic, relational, logical,
//     aggregates, function calls, variable references incl. {index})
//   - IF/ELSEIF/ELSE, FOR/TO/STEP, WHILE, TEST/CASE/DEFAULT, GOTO/labels, EXIT
//   - a small built-in function/procedure library (NumToStr, Abs, TPWrite, ...)
//   - Move instructions (MoveAbsJ/MoveJ/MoveL/MoveC): arguments are evaluated
//     and handed to onMove(), which by default just logs a trace line -
//     override this (or hook in via a subclass) to drive the serial protocol.
//
// Known limitations (documented, not silently papered over):
//   - RECORD field access (p.trans, p.rot, ...) is NOT supported - this
//     interpreter has no RECORD type definitions, only positional {index}
//     access. A variableReference with '.' throws a clear error.
//   - PERS persistence-across-calls is simplified: PERS/CONST declared
//     inside a routine are scoped like a local VAR (re-initialized on each
//     call), not as a single shared instance.
//   - GOTO/labels only support jumps to a label in the SAME statement list
//     or an ENCLOSING one (jumping into a nested block is not supported).
//   - CONNECT/RAISE/RETRY/TRYNEXT and TRAP routines (error handlers) are not
//     modeled by the grammar/interpreter; they are stubs that log a warning
//     (CONNECT/RETRY/TRYNEXT) or raise an unhandled error (RAISE).

#pragma once

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

#include "RapidParser.h"
#include "Environment.hpp"
#include "Value.hpp"

namespace rapid {

// Arguments to a Move instruction, evaluated and ready to use.
// `targets` has 1 element for MoveAbsJ/MoveJ/MoveL, 2 for MoveC
// (CirPoint, ToPoint). Optional fields that weren't supplied remain
// Value::undefined().
struct MoveArgs {
    std::vector<Value> targets;
    Value speed;
    Value zone;
    Value tool;
    Value wobj;        // \WObj:=...
    Value vOverride;   // \V:=...
    Value tOverride;   // \T:=...
    Value zOverride;   // \Z:=...
    bool conc = false; // leading \Conc
};

// ---- Control-flow signals (thrown, caught at the appropriate level) -------

struct ReturnSignal {
    Value value;
    bool hasValue;
};

struct ExitSignal {};

struct GotoSignal {
    std::string label;
};

class Interpreter {
public:
    Interpreter();
    virtual ~Interpreter() = default;

    // Registers routines, initializes module-level data, then calls
    // `entryProc` (default "main", case-insensitive). Throws
    // std::runtime_error on any unhandled runtime error.
    void run(RapidParser::RapidModuleContext* module, const std::string& entryProc = "main");

    // Global (module-level) scope - exposed for inspection/tests.
    Environment& globals() { return globals_; }

    // The current execution stack (routine names, outermost first).
    const std::vector<std::string>& callStack() const { return callStack_; }

protected:
    // Called for every executed Move instruction. Default implementation
    // prints a one-line trace to stdout. Override to integrate with the
    // serial protocol / IDE.
    virtual void onMove(const std::string& instructionName, const MoveArgs& args);

private:
    static constexpr size_t kMaxCallDepth = 250;

    // ---- registration / setup ----
    void registerBuiltins();
    void declareData(RapidParser::DataDeclarationContext* ctx, Environment& env);
    Value defaultValueForType(const std::string& typeName);

    // ---- statements ----
    void execStatements(const std::vector<RapidParser::StatementContext*>& stmts, Environment& env);
    void execStatement(RapidParser::StatementContext* ctx, Environment& env);
    void execAssignment(RapidParser::AssignmentStatementContext* ctx, Environment& env);
    void execIf(RapidParser::IfStatementContext* ctx, Environment& env);
    void execFor(RapidParser::ForStatementContext* ctx, Environment& env);
    void execWhile(RapidParser::WhileStatementContext* ctx, Environment& env);
    void execTest(RapidParser::TestStatementContext* ctx, Environment& env);
    void execReturn(RapidParser::ReturnStatementContext* ctx, Environment& env);
    void execProcedureCall(RapidParser::ProcedureCallStatementContext* ctx, Environment& env);
    void execIncrDecr(RapidParser::ProcedureCallStatementContext* ctx, Environment& env, bool incr);

    void execMoveAbsJ(RapidParser::MoveAbsJStatementContext* ctx, Environment& env);
    void execMoveC(RapidParser::MoveCStatementContext* ctx, Environment& env);
    void execMoveJ(RapidParser::MoveJStatementContext* ctx, Environment& env);
    void execMoveL(RapidParser::MoveLStatementContext* ctx, Environment& env);
    MoveArgs evalMoveArgs(const std::vector<RapidParser::NamedOrPositionalExprContext*>& nopes,
                          const std::vector<RapidParser::SwitchExprContext*>& switches,
                          size_t numTargets, Environment& env);

    // ---- IF / TEST helpers (ANTLR flattens repeated optional groups,
    //      so these walk ctx->children directly to recover branch structure) ----
    struct IfBranch {
        RapidParser::ExpressionContext* condition; // nullptr => else-branch
        std::vector<RapidParser::StatementContext*> body;
    };
    std::vector<IfBranch> splitIfBranches(RapidParser::IfStatementContext* ctx);

    struct TestCase {
        std::vector<RapidParser::ExpressionContext*> values; // empty for DEFAULT
        std::vector<RapidParser::StatementContext*> body;
        bool isDefault = false;
    };
    struct TestInfo {
        RapidParser::ExpressionContext* selector = nullptr;
        std::vector<TestCase> cases;
    };
    TestInfo splitTest(RapidParser::TestStatementContext* ctx);

    // ---- expressions ----
    Value evalExpression(RapidParser::ExpressionContext* ctx, Environment& env);
    Value evalAggregate(RapidParser::AggregateContext* ctx, Environment& env);
    Value evalLiteral(RapidParser::LiteralContext* ctx);
    Value evalVariableReference(RapidParser::VariableReferenceContext* ctx, Environment& env);
    void assignVariableReference(RapidParser::VariableReferenceContext* ctx, const Value& value, Environment& env);

    // ---- calls ----
    Value evalFunctionCall(RapidParser::FunctionCallContext* ctx, Environment& env);
    Value callRoutine(const std::string& name, RapidParser::ArgumentListContext* args,
                       Environment& callerEnv, bool isFunction);
    struct ParamInfo {
        std::string name;
        bool optional;
    };
    void bindArguments(RapidParser::ParameterListContext* params, RapidParser::ArgumentListContext* args,
                        Environment& callerEnv, Environment& callee);
    std::vector<Value> evalPositionalArgs(RapidParser::ArgumentListContext* args, Environment& env);
    bool evalPresent(RapidParser::ArgumentListContext* args, Environment& env);

    // ---- misc ----
    static std::string unescapeRapidString(const std::string& raw);
    std::runtime_error error(const std::string& msg) const;

    Environment globals_;
    std::vector<std::string> callStack_;

    std::unordered_map<std::string, RapidParser::ProcedureDeclarationContext*> procedures_;
    std::unordered_map<std::string, RapidParser::FunctionDeclarationContext*> functions_;

    using NativeFn = std::function<Value(Interpreter&, std::vector<Value>&)>;
    using NativeProc = std::function<void(Interpreter&, std::vector<Value>&)>;
    std::unordered_map<std::string, NativeFn> builtinFunctions_;
    std::unordered_map<std::string, NativeProc> builtinProcedures_;
};

} // namespace rapid
