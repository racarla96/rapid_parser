// main.cpp
//
// Driver for the RAPID parser/interpreter generated from Rapid.g4.
//
// Usage: rapid_parser <file.mod> [--tokens] [--tree] [--no-run] [--entry=ProcName]
//
//   --tokens         print the lexer's token stream
//   --tree           print the ANTLR parse tree
//   --no-run         don't execute the program (default: run PROC <entry>)
//   --entry=Name     entry procedure to call (default: main)
//
// With no flags, the file is parsed silently and PROC main (if present) is
// executed by the interpreter.

#include <fstream>
#include <iostream>
#include <sstream>

#include "antlr4-runtime.h"
#include "RapidLexer.h"
#include "RapidParser.h"
#include "Interpreter.hpp"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <file.mod> [--tokens] [--tree] [--no-run] [--entry=ProcName]" << std::endl;
        return 1;
    }

    bool showTokens = false;
    bool showTree = false;
    bool doRun = true;
    std::string entry = "main";

    for (int i = 2; i < argc; ++i) {
        const std::string arg = argv[i];
        if (arg == "--tokens") {
            showTokens = true;
        } else if (arg == "--tree") {
            showTree = true;
        } else if (arg == "--no-run") {
            doRun = false;
        } else if (arg.rfind("--entry=", 0) == 0) {
            entry = arg.substr(8);
        } else {
            std::cerr << "Unknown option: " << arg << std::endl;
            return 1;
        }
    }

    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Could not open file: " << argv[1] << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    RapidLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    if (showTokens) {
        tokens.fill();
        for (auto* token : tokens.getTokens()) {
            std::cout << token->toString() << std::endl;
        }
        tokens.reset();
    }

    RapidParser parser(&tokens);
    RapidParser::RapidModuleContext* tree = parser.rapidModule();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing finished with "
                  << parser.getNumberOfSyntaxErrors()
                  << " syntax error(s)." << std::endl;
        return 2;
    }

    if (showTree) {
        std::cout << "\nParse tree:\n"
                  << tree->toStringTree(&parser) << std::endl;
    }

    if (doRun) {
        rapid::Interpreter interpreter;
        try {
            interpreter.run(tree, entry);
        } catch (const std::exception& e) {
            std::cerr << "Runtime error: " << e.what() << std::endl;
            return 3;
        }
    }

    return 0;
}
