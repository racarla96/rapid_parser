
// Generated from Rapid.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RapidLexer : public antlr4::Lexer {
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

  explicit RapidLexer(antlr4::CharStream *input);

  ~RapidLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

