// main.cpp
//
// Minimal driver for the RAPID parser generated from Rapid.g4.
// Usage: rapid_parser <file.mod>

#include <fstream>
#include <iostream>
#include <sstream>

#include "antlr4-runtime.h"
#include "RapidLexer.h"
#include "RapidParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <file.mod>" << std::endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Could not open file: " << argv[1] << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    RapidLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto* token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    RapidParser parser(&tokens);
    RapidParser::RapidModuleContext* tree = parser.rapidModule();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing finished with "
                  << parser.getNumberOfSyntaxErrors()
                  << " syntax error(s)." << std::endl;
        return 2;
    }

    std::cout << "\nParse tree:\n"
              << tree->toStringTree(&parser) << std::endl;

    return 0;
}
