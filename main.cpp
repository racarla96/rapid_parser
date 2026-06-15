// main.cpp
//
// Driver for the RAPID parser/interpreter generated from Rapid.g4.
//
// Usage: rapid_parser <file.mod> [--system=FILE]... [--tokens] [--tree]
//                      [--no-run] [--entry=ProcName] [--step]
//
//   --system=FILE    load a "system" module first (e.g. predefined
//                     speeddata/zonedata/tooldata such as v1000, z50, tool0,
//                     wobj0 - see examples/BASE.sys). May be given multiple
//                     times; modules are loaded in the order given, before
//                     <file.mod>.
//   --tokens         print the lexer's token stream for <file.mod>
//   --tree           print the ANTLR parse tree for <file.mod>
//   --no-run         don't execute the program (default: run PROC <entry>)
//   --entry=Name     entry procedure to call (default: main)
//   --step           interactive step debugger: pause before each
//                     statement, read commands from stdin (h for help)
//
// With no flags, the file is parsed silently and PROC main (if present) is
// executed by the interpreter. Move-instruction traces always show the
// call chain ([Main->Estrella]), source line number, and (if available)
// the source line text.

#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "RapidLexer.h"
#include "RapidParser.h"
#include "Interpreter.hpp"

using namespace antlr4;

namespace {

// Owns everything needed to keep a parsed module's tree alive for the
// lifetime of the program (PROC/FUNC declarations registered by
// Interpreter::load() hold raw pointers into this tree).
struct ParsedModule {
    std::string source;
    std::vector<std::string> lines; // source split by '\n', for --step / Move traces
    std::unique_ptr<ANTLRInputStream> input;
    std::unique_ptr<RapidLexer> lexer;
    std::unique_ptr<CommonTokenStream> tokens;
    std::unique_ptr<RapidParser> parser;
    RapidParser::RapidModuleContext* tree = nullptr;
};

// Parses `path` into `out`. Prints an error and returns false on failure
// (file not found or syntax errors).
bool parseFile(const std::string& path, ParsedModule& out) {
    std::ifstream stream(path);
    if (!stream.is_open()) {
        std::cerr << "Could not open file: " << path << std::endl;
        return false;
    }

    std::ostringstream contents;
    contents << stream.rdbuf();
    out.source = contents.str();

    out.lines.clear();
    std::istringstream lineStream(out.source);
    std::string line;
    while (std::getline(lineStream, line)) out.lines.push_back(line);

    out.input = std::make_unique<ANTLRInputStream>(out.source);
    out.lexer = std::make_unique<RapidLexer>(out.input.get());
    out.tokens = std::make_unique<CommonTokenStream>(out.lexer.get());
    out.parser = std::make_unique<RapidParser>(out.tokens.get());
    out.tree = out.parser->rapidModule();

    if (out.parser->getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing finished with "
                  << out.parser->getNumberOfSyntaxErrors()
                  << " syntax error(s) in " << path << std::endl;
        return false;
    }
    return true;
}

} // namespace

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0]
                  << " <file.mod> [--system=FILE]... [--tokens] [--tree]"
                  << " [--no-run] [--entry=ProcName] [--step]"
                  << std::endl;
        return 1;
    }

    bool showTokens = false;
    bool showTree = false;
    bool doRun = true;
    bool step = false;
    std::string entry = "main";
    std::vector<std::string> systemFiles;

    for (int i = 2; i < argc; ++i) {
        const std::string arg = argv[i];
        if (arg == "--tokens") {
            showTokens = true;
        } else if (arg == "--tree") {
            showTree = true;
        } else if (arg == "--no-run") {
            doRun = false;
        } else if (arg == "--step") {
            step = true;
        } else if (arg.rfind("--entry=", 0) == 0) {
            entry = arg.substr(8);
        } else if (arg.rfind("--system=", 0) == 0) {
            systemFiles.push_back(arg.substr(9));
        } else {
            std::cerr << "Unknown option: " << arg << std::endl;
            return 1;
        }
    }

    rapid::Interpreter interpreter;

    // Load system module(s) first (predefined speeddata/zonedata/tooldata/...).
    std::vector<ParsedModule> systemModules(systemFiles.size());
    for (size_t i = 0; i < systemFiles.size(); ++i) {
        if (!parseFile(systemFiles[i], systemModules[i])) return 2;
        interpreter.load(systemModules[i].tree);
    }

    // Load the user's module.
    ParsedModule mainModule;
    if (!parseFile(argv[1], mainModule)) return 2;

    if (showTokens) {
        mainModule.tokens->fill();
        for (auto* token : mainModule.tokens->getTokens()) {
            std::cout << token->toString() << std::endl;
        }
    }

    if (showTree) {
        std::cout << "\nParse tree:\n"
                  << mainModule.tree->toStringTree(mainModule.parser.get()) << std::endl;
    }

    // Source lines power the "(source line text)" shown in Move traces and
    // in the --step debugger prompt.
    interpreter.setSourceLines(mainModule.lines);
    if (step) interpreter.setStepping(true);

    interpreter.load(mainModule.tree);

    if (doRun) {
        try {
            interpreter.call(entry);
        } catch (const std::exception& e) {
            std::cerr << "Runtime error: " << e.what() << std::endl;
            return 3;
        }
    }

    return 0;
}
