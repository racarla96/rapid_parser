
// Generated from Rapid.g4 by ANTLR 4.13.2


#include "RapidVisitor.h"

#include "RapidParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RapidParserStaticData final {
  RapidParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RapidParserStaticData(const RapidParserStaticData&) = delete;
  RapidParserStaticData(RapidParserStaticData&&) = delete;
  RapidParserStaticData& operator=(const RapidParserStaticData&) = delete;
  RapidParserStaticData& operator=(RapidParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rapidParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RapidParserStaticData> rapidParserStaticData = nullptr;

void rapidParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rapidParserStaticData != nullptr) {
    return;
  }
#else
  assert(rapidParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RapidParserStaticData>(
    std::vector<std::string>{
      "rapidModule", "moduleDeclaration", "moduleAttributeList", "moduleAttribute", 
      "dataDeclaration", "dataType", "arrayDimension", "arrayDimExpr", "routineDeclaration", 
      "procedureDeclaration", "functionDeclaration", "trapDeclaration", 
      "routineAttribute", "parameterList", "parameter", "arrayPlaceholder", 
      "statement", "assignmentStatement", "procedureCallStatement", "argumentList", 
      "argument", "namedOrPositionalExpr", "switchExpr", "moveAbsJStatement", 
      "moveCStatement", "moveJStatement", "moveLStatement", "ifStatement", 
      "forStatement", "whileStatement", "testStatement", "returnStatement", 
      "exitStatement", "gotoStatement", "labelStatement", "connectStatement", 
      "raiseStatement", "retryStatement", "tryNextStatement", "expression", 
      "functionCall", "variableReference", "aggregate", "literal"
    },
    std::vector<std::string>{
      "", "'('", "','", "')'", "':='", "';'", "'{'", "'}'", "'*'", "'\\'", 
      "':'", "'-'", "'+'", "'/'", "'='", "'<>'", "'<'", "'>'", "'<='", "'>='", 
      "'.'", "'['", "']'", "'AND'", "'BACKWARD'", "'CASE'", "'CONNECT'", 
      "'CONST'", "'DEFAULT'", "'DIV'", "'DO'", "'ELSE'", "'ELSEIF'", "'ENDFOR'", 
      "'ENDFUNC'", "'ENDIF'", "'ENDMODULE'", "'ENDPROC'", "'ENDTEST'", "'ENDTRAP'", 
      "'ENDWHILE'", "'ERROR'", "'EXIT'", "'FALSE'", "'FOR'", "'FROM'", "'FUNC'", 
      "'GOTO'", "'IF'", "'INOUT'", "'LOCAL'", "'MOD'", "'MODULE'", "'NOSTEPIN'", 
      "'NOT'", "'NOVIEW'", "'OR'", "'PERS'", "'PROC'", "'RAISE'", "'READONLY'", 
      "'RETRY'", "'RETURN'", "'STEP'", "'SYSMODULE'", "'TEST'", "'THEN'", 
      "'TO'", "'TRAP'", "'TRUE'", "'TRYNEXT'", "'VAR'", "'VIEWONLY'", "'WHILE'", 
      "'WITH'", "'XOR'", "", "", "'MoveAbsJ'", "'MoveC'", "'MoveJ'", "'MoveL'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "AND", "BACKWARD", "CASE", "CONNECT", "CONST", 
      "DEFAULT", "DIV", "DO", "ELSE", "ELSEIF", "ENDFOR", "ENDFUNC", "ENDIF", 
      "ENDMODULE", "ENDPROC", "ENDTEST", "ENDTRAP", "ENDWHILE", "ERROR", 
      "EXIT", "FALSE", "FOR", "FROM", "FUNC", "GOTO", "IF", "INOUT", "LOCAL", 
      "MOD", "MODULE", "NOSTEPIN", "NOT", "NOVIEW", "OR", "PERS", "PROC", 
      "RAISE", "READONLY", "RETRY", "RETURN", "STEP", "SYSMODULE", "TEST", 
      "THEN", "TO", "TRAP", "TRUE", "TRYNEXT", "VAR", "VIEWONLY", "WHILE", 
      "WITH", "XOR", "STRING", "NUM", "MOVEABSJ", "MOVEC", "MOVEJ", "MOVEL", 
      "IDENTIFIER", "COMMENT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,84,619,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,1,0,1,1,1,1,1,1,3,1,95,8,1,1,1,1,1,5,1,99,8,1,10,
  	1,12,1,102,9,1,1,1,1,1,1,2,1,2,1,2,1,2,5,2,110,8,2,10,2,12,2,113,9,2,
  	1,2,1,2,1,3,1,3,1,4,3,4,120,8,4,1,4,1,4,1,4,1,4,3,4,126,8,4,1,4,1,4,3,
  	4,130,8,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,5,6,140,8,6,10,6,12,6,143,9,
  	6,1,6,1,6,1,7,1,7,3,7,149,8,7,1,8,1,8,1,8,3,8,154,8,8,1,9,3,9,157,8,9,
  	1,9,1,9,1,9,1,9,3,9,163,8,9,1,9,1,9,5,9,167,8,9,10,9,12,9,170,9,9,1,9,
  	5,9,173,8,9,10,9,12,9,176,9,9,1,9,1,9,1,10,3,10,181,8,10,1,10,1,10,1,
  	10,1,10,1,10,3,10,188,8,10,1,10,1,10,5,10,192,8,10,10,10,12,10,195,9,
  	10,1,10,5,10,198,8,10,10,10,12,10,201,9,10,1,10,1,10,1,11,1,11,1,11,5,
  	11,208,8,11,10,11,12,11,211,9,11,1,11,5,11,214,8,11,10,11,12,11,217,9,
  	11,1,11,1,11,1,12,1,12,1,13,1,13,1,13,5,13,226,8,13,10,13,12,13,229,9,
  	13,1,14,3,14,232,8,14,1,14,3,14,235,8,14,1,14,1,14,1,14,3,14,240,8,14,
  	1,15,1,15,1,15,1,15,5,15,246,8,15,10,15,12,15,249,9,15,1,15,1,15,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,3,16,272,8,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,
  	3,18,281,8,18,1,18,1,18,1,19,1,19,1,19,5,19,288,8,19,10,19,12,19,291,
  	9,19,1,20,1,20,1,20,1,20,3,20,297,8,20,1,20,3,20,300,8,20,1,21,1,21,3,
  	21,304,8,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,3,
  	23,317,8,23,1,23,1,23,1,23,1,23,3,23,323,8,23,1,23,1,23,1,23,3,23,328,
  	8,23,1,23,1,23,1,23,3,23,333,8,23,1,23,1,23,1,24,1,24,1,24,1,24,3,24,
  	341,8,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,349,8,24,1,24,1,24,1,24,3,
  	24,354,8,24,1,24,1,24,1,24,3,24,359,8,24,1,24,1,24,1,25,1,25,1,25,1,25,
  	3,25,367,8,25,1,25,1,25,1,25,1,25,3,25,373,8,25,1,25,1,25,1,25,3,25,378,
  	8,25,1,25,1,25,1,25,3,25,383,8,25,1,25,1,25,1,26,1,26,1,26,1,26,3,26,
  	391,8,26,1,26,1,26,1,26,1,26,3,26,397,8,26,1,26,1,26,1,26,3,26,402,8,
  	26,1,26,1,26,1,26,3,26,407,8,26,1,26,1,26,1,27,1,27,1,27,1,27,5,27,415,
  	8,27,10,27,12,27,418,9,27,1,27,1,27,1,27,1,27,5,27,424,8,27,10,27,12,
  	27,427,9,27,5,27,429,8,27,10,27,12,27,432,9,27,1,27,1,27,5,27,436,8,27,
  	10,27,12,27,439,9,27,3,27,441,8,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,3,28,453,8,28,1,28,1,28,5,28,457,8,28,10,28,12,28,460,
  	9,28,1,28,1,28,1,29,1,29,1,29,1,29,5,29,468,8,29,10,29,12,29,471,9,29,
  	1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,5,30,481,8,30,10,30,12,30,484,
  	9,30,1,30,1,30,5,30,488,8,30,10,30,12,30,491,9,30,4,30,493,8,30,11,30,
  	12,30,494,1,30,1,30,1,30,5,30,500,8,30,10,30,12,30,503,9,30,3,30,505,
  	8,30,1,30,1,30,1,31,1,31,3,31,511,8,31,1,31,1,31,1,32,1,32,1,32,1,33,
  	1,33,1,33,1,33,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,36,1,36,
  	3,36,533,8,36,1,36,1,36,1,37,1,37,1,37,1,38,1,38,1,38,1,39,1,39,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,3,39,556,8,39,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,
  	5,39,573,8,39,10,39,12,39,576,9,39,1,40,1,40,1,40,3,40,581,8,40,1,40,
  	1,40,1,41,1,41,1,41,5,41,588,8,41,10,41,12,41,591,9,41,1,41,1,41,1,41,
  	1,41,5,41,597,8,41,10,41,12,41,600,9,41,1,41,1,41,3,41,604,8,41,1,42,
  	1,42,1,42,1,42,5,42,610,8,42,10,42,12,42,613,9,42,1,42,1,42,1,43,1,43,
  	1,43,0,1,78,44,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,
  	86,0,8,5,0,53,53,55,55,60,60,64,64,72,72,3,0,27,27,57,57,71,71,3,0,49,
  	49,57,57,71,71,1,0,11,12,4,0,8,8,13,13,29,29,51,51,1,0,14,19,2,0,56,56,
  	75,75,3,0,43,43,69,69,76,77,670,0,88,1,0,0,0,2,91,1,0,0,0,4,105,1,0,0,
  	0,6,116,1,0,0,0,8,119,1,0,0,0,10,133,1,0,0,0,12,135,1,0,0,0,14,148,1,
  	0,0,0,16,153,1,0,0,0,18,156,1,0,0,0,20,180,1,0,0,0,22,204,1,0,0,0,24,
  	220,1,0,0,0,26,222,1,0,0,0,28,231,1,0,0,0,30,241,1,0,0,0,32,271,1,0,0,
  	0,34,273,1,0,0,0,36,278,1,0,0,0,38,284,1,0,0,0,40,299,1,0,0,0,42,303,
  	1,0,0,0,44,307,1,0,0,0,46,312,1,0,0,0,48,336,1,0,0,0,50,362,1,0,0,0,52,
  	386,1,0,0,0,54,410,1,0,0,0,56,444,1,0,0,0,58,463,1,0,0,0,60,474,1,0,0,
  	0,62,508,1,0,0,0,64,514,1,0,0,0,66,517,1,0,0,0,68,521,1,0,0,0,70,524,
  	1,0,0,0,72,530,1,0,0,0,74,536,1,0,0,0,76,539,1,0,0,0,78,555,1,0,0,0,80,
  	577,1,0,0,0,82,584,1,0,0,0,84,605,1,0,0,0,86,616,1,0,0,0,88,89,3,2,1,
  	0,89,90,5,0,0,1,90,1,1,0,0,0,91,92,5,52,0,0,92,94,5,82,0,0,93,95,3,4,
  	2,0,94,93,1,0,0,0,94,95,1,0,0,0,95,100,1,0,0,0,96,99,3,8,4,0,97,99,3,
  	16,8,0,98,96,1,0,0,0,98,97,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,
  	101,1,0,0,0,101,103,1,0,0,0,102,100,1,0,0,0,103,104,5,36,0,0,104,3,1,
  	0,0,0,105,106,5,1,0,0,106,111,3,6,3,0,107,108,5,2,0,0,108,110,3,6,3,0,
  	109,107,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,114,
  	1,0,0,0,113,111,1,0,0,0,114,115,5,3,0,0,115,5,1,0,0,0,116,117,7,0,0,0,
  	117,7,1,0,0,0,118,120,5,50,0,0,119,118,1,0,0,0,119,120,1,0,0,0,120,121,
  	1,0,0,0,121,122,7,1,0,0,122,123,3,10,5,0,123,125,5,82,0,0,124,126,3,12,
  	6,0,125,124,1,0,0,0,125,126,1,0,0,0,126,129,1,0,0,0,127,128,5,4,0,0,128,
  	130,3,78,39,0,129,127,1,0,0,0,129,130,1,0,0,0,130,131,1,0,0,0,131,132,
  	5,5,0,0,132,9,1,0,0,0,133,134,5,82,0,0,134,11,1,0,0,0,135,136,5,6,0,0,
  	136,141,3,14,7,0,137,138,5,2,0,0,138,140,3,14,7,0,139,137,1,0,0,0,140,
  	143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,144,1,0,0,0,143,141,1,
  	0,0,0,144,145,5,7,0,0,145,13,1,0,0,0,146,149,3,78,39,0,147,149,5,8,0,
  	0,148,146,1,0,0,0,148,147,1,0,0,0,149,15,1,0,0,0,150,154,3,18,9,0,151,
  	154,3,20,10,0,152,154,3,22,11,0,153,150,1,0,0,0,153,151,1,0,0,0,153,152,
  	1,0,0,0,154,17,1,0,0,0,155,157,5,50,0,0,156,155,1,0,0,0,156,157,1,0,0,
  	0,157,158,1,0,0,0,158,159,5,58,0,0,159,160,5,82,0,0,160,162,5,1,0,0,161,
  	163,3,26,13,0,162,161,1,0,0,0,162,163,1,0,0,0,163,164,1,0,0,0,164,168,
  	5,3,0,0,165,167,3,24,12,0,166,165,1,0,0,0,167,170,1,0,0,0,168,166,1,0,
  	0,0,168,169,1,0,0,0,169,174,1,0,0,0,170,168,1,0,0,0,171,173,3,32,16,0,
  	172,171,1,0,0,0,173,176,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,177,
  	1,0,0,0,176,174,1,0,0,0,177,178,5,37,0,0,178,19,1,0,0,0,179,181,5,50,
  	0,0,180,179,1,0,0,0,180,181,1,0,0,0,181,182,1,0,0,0,182,183,5,46,0,0,
  	183,184,3,10,5,0,184,185,5,82,0,0,185,187,5,1,0,0,186,188,3,26,13,0,187,
  	186,1,0,0,0,187,188,1,0,0,0,188,189,1,0,0,0,189,193,5,3,0,0,190,192,3,
  	24,12,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,
  	0,194,199,1,0,0,0,195,193,1,0,0,0,196,198,3,32,16,0,197,196,1,0,0,0,198,
  	201,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,202,1,0,0,0,201,199,1,
  	0,0,0,202,203,5,34,0,0,203,21,1,0,0,0,204,205,5,68,0,0,205,209,5,82,0,
  	0,206,208,3,24,12,0,207,206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,
  	210,1,0,0,0,210,215,1,0,0,0,211,209,1,0,0,0,212,214,3,32,16,0,213,212,
  	1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,218,1,0,0,
  	0,217,215,1,0,0,0,218,219,5,39,0,0,219,23,1,0,0,0,220,221,5,53,0,0,221,
  	25,1,0,0,0,222,227,3,28,14,0,223,224,5,2,0,0,224,226,3,28,14,0,225,223,
  	1,0,0,0,226,229,1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,27,1,0,0,
  	0,229,227,1,0,0,0,230,232,5,9,0,0,231,230,1,0,0,0,231,232,1,0,0,0,232,
  	234,1,0,0,0,233,235,7,2,0,0,234,233,1,0,0,0,234,235,1,0,0,0,235,236,1,
  	0,0,0,236,237,3,10,5,0,237,239,5,82,0,0,238,240,3,30,15,0,239,238,1,0,
  	0,0,239,240,1,0,0,0,240,29,1,0,0,0,241,242,5,6,0,0,242,247,5,8,0,0,243,
  	244,5,2,0,0,244,246,5,8,0,0,245,243,1,0,0,0,246,249,1,0,0,0,247,245,1,
  	0,0,0,247,248,1,0,0,0,248,250,1,0,0,0,249,247,1,0,0,0,250,251,5,7,0,0,
  	251,31,1,0,0,0,252,272,3,8,4,0,253,272,3,46,23,0,254,272,3,48,24,0,255,
  	272,3,50,25,0,256,272,3,52,26,0,257,272,3,34,17,0,258,272,3,36,18,0,259,
  	272,3,54,27,0,260,272,3,56,28,0,261,272,3,58,29,0,262,272,3,60,30,0,263,
  	272,3,62,31,0,264,272,3,64,32,0,265,272,3,66,33,0,266,272,3,68,34,0,267,
  	272,3,70,35,0,268,272,3,72,36,0,269,272,3,74,37,0,270,272,3,76,38,0,271,
  	252,1,0,0,0,271,253,1,0,0,0,271,254,1,0,0,0,271,255,1,0,0,0,271,256,1,
  	0,0,0,271,257,1,0,0,0,271,258,1,0,0,0,271,259,1,0,0,0,271,260,1,0,0,0,
  	271,261,1,0,0,0,271,262,1,0,0,0,271,263,1,0,0,0,271,264,1,0,0,0,271,265,
  	1,0,0,0,271,266,1,0,0,0,271,267,1,0,0,0,271,268,1,0,0,0,271,269,1,0,0,
  	0,271,270,1,0,0,0,272,33,1,0,0,0,273,274,3,82,41,0,274,275,5,4,0,0,275,
  	276,3,78,39,0,276,277,5,5,0,0,277,35,1,0,0,0,278,280,5,82,0,0,279,281,
  	3,38,19,0,280,279,1,0,0,0,280,281,1,0,0,0,281,282,1,0,0,0,282,283,5,5,
  	0,0,283,37,1,0,0,0,284,289,3,40,20,0,285,286,5,2,0,0,286,288,3,40,20,
  	0,287,285,1,0,0,0,288,291,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,
  	39,1,0,0,0,291,289,1,0,0,0,292,293,5,9,0,0,293,296,5,82,0,0,294,295,5,
  	4,0,0,295,297,3,78,39,0,296,294,1,0,0,0,296,297,1,0,0,0,297,300,1,0,0,
  	0,298,300,3,42,21,0,299,292,1,0,0,0,299,298,1,0,0,0,300,41,1,0,0,0,301,
  	302,5,82,0,0,302,304,5,4,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,305,
  	1,0,0,0,305,306,3,78,39,0,306,43,1,0,0,0,307,308,5,9,0,0,308,309,5,82,
  	0,0,309,310,5,4,0,0,310,311,3,78,39,0,311,45,1,0,0,0,312,316,5,78,0,0,
  	313,314,5,9,0,0,314,315,5,82,0,0,315,317,5,2,0,0,316,313,1,0,0,0,316,
  	317,1,0,0,0,317,318,1,0,0,0,318,319,3,42,21,0,319,320,5,2,0,0,320,322,
  	3,42,21,0,321,323,3,44,22,0,322,321,1,0,0,0,322,323,1,0,0,0,323,324,1,
  	0,0,0,324,325,5,2,0,0,325,327,3,42,21,0,326,328,3,44,22,0,327,326,1,0,
  	0,0,327,328,1,0,0,0,328,329,1,0,0,0,329,330,5,2,0,0,330,332,3,42,21,0,
  	331,333,3,44,22,0,332,331,1,0,0,0,332,333,1,0,0,0,333,334,1,0,0,0,334,
  	335,5,5,0,0,335,47,1,0,0,0,336,340,5,79,0,0,337,338,5,9,0,0,338,339,5,
  	82,0,0,339,341,5,2,0,0,340,337,1,0,0,0,340,341,1,0,0,0,341,342,1,0,0,
  	0,342,343,3,42,21,0,343,344,5,2,0,0,344,345,3,42,21,0,345,346,5,2,0,0,
  	346,348,3,42,21,0,347,349,3,44,22,0,348,347,1,0,0,0,348,349,1,0,0,0,349,
  	350,1,0,0,0,350,351,5,2,0,0,351,353,3,42,21,0,352,354,3,44,22,0,353,352,
  	1,0,0,0,353,354,1,0,0,0,354,355,1,0,0,0,355,356,5,2,0,0,356,358,3,42,
  	21,0,357,359,3,44,22,0,358,357,1,0,0,0,358,359,1,0,0,0,359,360,1,0,0,
  	0,360,361,5,5,0,0,361,49,1,0,0,0,362,366,5,80,0,0,363,364,5,9,0,0,364,
  	365,5,82,0,0,365,367,5,2,0,0,366,363,1,0,0,0,366,367,1,0,0,0,367,368,
  	1,0,0,0,368,369,3,42,21,0,369,370,5,2,0,0,370,372,3,42,21,0,371,373,3,
  	44,22,0,372,371,1,0,0,0,372,373,1,0,0,0,373,374,1,0,0,0,374,375,5,2,0,
  	0,375,377,3,42,21,0,376,378,3,44,22,0,377,376,1,0,0,0,377,378,1,0,0,0,
  	378,379,1,0,0,0,379,380,5,2,0,0,380,382,3,42,21,0,381,383,3,44,22,0,382,
  	381,1,0,0,0,382,383,1,0,0,0,383,384,1,0,0,0,384,385,5,5,0,0,385,51,1,
  	0,0,0,386,390,5,81,0,0,387,388,5,9,0,0,388,389,5,82,0,0,389,391,5,2,0,
  	0,390,387,1,0,0,0,390,391,1,0,0,0,391,392,1,0,0,0,392,393,3,42,21,0,393,
  	394,5,2,0,0,394,396,3,42,21,0,395,397,3,44,22,0,396,395,1,0,0,0,396,397,
  	1,0,0,0,397,398,1,0,0,0,398,399,5,2,0,0,399,401,3,42,21,0,400,402,3,44,
  	22,0,401,400,1,0,0,0,401,402,1,0,0,0,402,403,1,0,0,0,403,404,5,2,0,0,
  	404,406,3,42,21,0,405,407,3,44,22,0,406,405,1,0,0,0,406,407,1,0,0,0,407,
  	408,1,0,0,0,408,409,5,5,0,0,409,53,1,0,0,0,410,411,5,48,0,0,411,412,3,
  	78,39,0,412,416,5,66,0,0,413,415,3,32,16,0,414,413,1,0,0,0,415,418,1,
  	0,0,0,416,414,1,0,0,0,416,417,1,0,0,0,417,430,1,0,0,0,418,416,1,0,0,0,
  	419,420,5,32,0,0,420,421,3,78,39,0,421,425,5,66,0,0,422,424,3,32,16,0,
  	423,422,1,0,0,0,424,427,1,0,0,0,425,423,1,0,0,0,425,426,1,0,0,0,426,429,
  	1,0,0,0,427,425,1,0,0,0,428,419,1,0,0,0,429,432,1,0,0,0,430,428,1,0,0,
  	0,430,431,1,0,0,0,431,440,1,0,0,0,432,430,1,0,0,0,433,437,5,31,0,0,434,
  	436,3,32,16,0,435,434,1,0,0,0,436,439,1,0,0,0,437,435,1,0,0,0,437,438,
  	1,0,0,0,438,441,1,0,0,0,439,437,1,0,0,0,440,433,1,0,0,0,440,441,1,0,0,
  	0,441,442,1,0,0,0,442,443,5,35,0,0,443,55,1,0,0,0,444,445,5,44,0,0,445,
  	446,5,82,0,0,446,447,5,45,0,0,447,448,3,78,39,0,448,449,5,67,0,0,449,
  	452,3,78,39,0,450,451,5,63,0,0,451,453,3,78,39,0,452,450,1,0,0,0,452,
  	453,1,0,0,0,453,454,1,0,0,0,454,458,5,30,0,0,455,457,3,32,16,0,456,455,
  	1,0,0,0,457,460,1,0,0,0,458,456,1,0,0,0,458,459,1,0,0,0,459,461,1,0,0,
  	0,460,458,1,0,0,0,461,462,5,33,0,0,462,57,1,0,0,0,463,464,5,73,0,0,464,
  	465,3,78,39,0,465,469,5,30,0,0,466,468,3,32,16,0,467,466,1,0,0,0,468,
  	471,1,0,0,0,469,467,1,0,0,0,469,470,1,0,0,0,470,472,1,0,0,0,471,469,1,
  	0,0,0,472,473,5,40,0,0,473,59,1,0,0,0,474,475,5,65,0,0,475,492,3,78,39,
  	0,476,477,5,25,0,0,477,482,3,78,39,0,478,479,5,2,0,0,479,481,3,78,39,
  	0,480,478,1,0,0,0,481,484,1,0,0,0,482,480,1,0,0,0,482,483,1,0,0,0,483,
  	485,1,0,0,0,484,482,1,0,0,0,485,489,5,10,0,0,486,488,3,32,16,0,487,486,
  	1,0,0,0,488,491,1,0,0,0,489,487,1,0,0,0,489,490,1,0,0,0,490,493,1,0,0,
  	0,491,489,1,0,0,0,492,476,1,0,0,0,493,494,1,0,0,0,494,492,1,0,0,0,494,
  	495,1,0,0,0,495,504,1,0,0,0,496,497,5,28,0,0,497,501,5,10,0,0,498,500,
  	3,32,16,0,499,498,1,0,0,0,500,503,1,0,0,0,501,499,1,0,0,0,501,502,1,0,
  	0,0,502,505,1,0,0,0,503,501,1,0,0,0,504,496,1,0,0,0,504,505,1,0,0,0,505,
  	506,1,0,0,0,506,507,5,38,0,0,507,61,1,0,0,0,508,510,5,62,0,0,509,511,
  	3,78,39,0,510,509,1,0,0,0,510,511,1,0,0,0,511,512,1,0,0,0,512,513,5,5,
  	0,0,513,63,1,0,0,0,514,515,5,42,0,0,515,516,5,5,0,0,516,65,1,0,0,0,517,
  	518,5,47,0,0,518,519,5,82,0,0,519,520,5,5,0,0,520,67,1,0,0,0,521,522,
  	5,82,0,0,522,523,5,10,0,0,523,69,1,0,0,0,524,525,5,26,0,0,525,526,3,82,
  	41,0,526,527,5,74,0,0,527,528,5,82,0,0,528,529,5,5,0,0,529,71,1,0,0,0,
  	530,532,5,59,0,0,531,533,5,82,0,0,532,531,1,0,0,0,532,533,1,0,0,0,533,
  	534,1,0,0,0,534,535,5,5,0,0,535,73,1,0,0,0,536,537,5,61,0,0,537,538,5,
  	5,0,0,538,75,1,0,0,0,539,540,5,70,0,0,540,541,5,5,0,0,541,77,1,0,0,0,
  	542,543,6,39,-1,0,543,544,5,1,0,0,544,545,3,78,39,0,545,546,5,3,0,0,546,
  	556,1,0,0,0,547,556,3,84,42,0,548,556,3,80,40,0,549,556,3,82,41,0,550,
  	556,3,86,43,0,551,552,7,3,0,0,552,556,3,78,39,7,553,554,5,54,0,0,554,
  	556,3,78,39,3,555,542,1,0,0,0,555,547,1,0,0,0,555,548,1,0,0,0,555,549,
  	1,0,0,0,555,550,1,0,0,0,555,551,1,0,0,0,555,553,1,0,0,0,556,574,1,0,0,
  	0,557,558,10,6,0,0,558,559,7,4,0,0,559,573,3,78,39,7,560,561,10,5,0,0,
  	561,562,7,3,0,0,562,573,3,78,39,6,563,564,10,4,0,0,564,565,7,5,0,0,565,
  	573,3,78,39,5,566,567,10,2,0,0,567,568,5,23,0,0,568,573,3,78,39,3,569,
  	570,10,1,0,0,570,571,7,6,0,0,571,573,3,78,39,2,572,557,1,0,0,0,572,560,
  	1,0,0,0,572,563,1,0,0,0,572,566,1,0,0,0,572,569,1,0,0,0,573,576,1,0,0,
  	0,574,572,1,0,0,0,574,575,1,0,0,0,575,79,1,0,0,0,576,574,1,0,0,0,577,
  	578,5,82,0,0,578,580,5,1,0,0,579,581,3,38,19,0,580,579,1,0,0,0,580,581,
  	1,0,0,0,581,582,1,0,0,0,582,583,5,3,0,0,583,81,1,0,0,0,584,589,5,82,0,
  	0,585,586,5,20,0,0,586,588,5,82,0,0,587,585,1,0,0,0,588,591,1,0,0,0,589,
  	587,1,0,0,0,589,590,1,0,0,0,590,603,1,0,0,0,591,589,1,0,0,0,592,593,5,
  	6,0,0,593,598,3,78,39,0,594,595,5,2,0,0,595,597,3,78,39,0,596,594,1,0,
  	0,0,597,600,1,0,0,0,598,596,1,0,0,0,598,599,1,0,0,0,599,601,1,0,0,0,600,
  	598,1,0,0,0,601,602,5,7,0,0,602,604,1,0,0,0,603,592,1,0,0,0,603,604,1,
  	0,0,0,604,83,1,0,0,0,605,606,5,21,0,0,606,611,3,78,39,0,607,608,5,2,0,
  	0,608,610,3,78,39,0,609,607,1,0,0,0,610,613,1,0,0,0,611,609,1,0,0,0,611,
  	612,1,0,0,0,612,614,1,0,0,0,613,611,1,0,0,0,614,615,5,22,0,0,615,85,1,
  	0,0,0,616,617,7,7,0,0,617,87,1,0,0,0,70,94,98,100,111,119,125,129,141,
  	148,153,156,162,168,174,180,187,193,199,209,215,227,231,234,239,247,271,
  	280,289,296,299,303,316,322,327,332,340,348,353,358,366,372,377,382,390,
  	396,401,406,416,425,430,437,440,452,458,469,482,489,494,501,504,510,532,
  	555,572,574,580,589,598,603,611
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rapidParserStaticData = std::move(staticData);
}

}

RapidParser::RapidParser(TokenStream *input) : RapidParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RapidParser::RapidParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RapidParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rapidParserStaticData->atn, rapidParserStaticData->decisionToDFA, rapidParserStaticData->sharedContextCache, options);
}

RapidParser::~RapidParser() {
  delete _interpreter;
}

const atn::ATN& RapidParser::getATN() const {
  return *rapidParserStaticData->atn;
}

std::string RapidParser::getGrammarFileName() const {
  return "Rapid.g4";
}

const std::vector<std::string>& RapidParser::getRuleNames() const {
  return rapidParserStaticData->ruleNames;
}

const dfa::Vocabulary& RapidParser::getVocabulary() const {
  return rapidParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RapidParser::getSerializedATN() const {
  return rapidParserStaticData->serializedATN;
}


//----------------- RapidModuleContext ------------------------------------------------------------------

RapidParser::RapidModuleContext::RapidModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::ModuleDeclarationContext* RapidParser::RapidModuleContext::moduleDeclaration() {
  return getRuleContext<RapidParser::ModuleDeclarationContext>(0);
}

tree::TerminalNode* RapidParser::RapidModuleContext::EOF() {
  return getToken(RapidParser::EOF, 0);
}


size_t RapidParser::RapidModuleContext::getRuleIndex() const {
  return RapidParser::RuleRapidModule;
}


std::any RapidParser::RapidModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitRapidModule(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::RapidModuleContext* RapidParser::rapidModule() {
  RapidModuleContext *_localctx = _tracker.createInstance<RapidModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, RapidParser::RuleRapidModule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    moduleDeclaration();
    setState(89);
    match(RapidParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationContext ------------------------------------------------------------------

RapidParser::ModuleDeclarationContext::ModuleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ModuleDeclarationContext::MODULE() {
  return getToken(RapidParser::MODULE, 0);
}

tree::TerminalNode* RapidParser::ModuleDeclarationContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

tree::TerminalNode* RapidParser::ModuleDeclarationContext::ENDMODULE() {
  return getToken(RapidParser::ENDMODULE, 0);
}

RapidParser::ModuleAttributeListContext* RapidParser::ModuleDeclarationContext::moduleAttributeList() {
  return getRuleContext<RapidParser::ModuleAttributeListContext>(0);
}

std::vector<RapidParser::DataDeclarationContext *> RapidParser::ModuleDeclarationContext::dataDeclaration() {
  return getRuleContexts<RapidParser::DataDeclarationContext>();
}

RapidParser::DataDeclarationContext* RapidParser::ModuleDeclarationContext::dataDeclaration(size_t i) {
  return getRuleContext<RapidParser::DataDeclarationContext>(i);
}

std::vector<RapidParser::RoutineDeclarationContext *> RapidParser::ModuleDeclarationContext::routineDeclaration() {
  return getRuleContexts<RapidParser::RoutineDeclarationContext>();
}

RapidParser::RoutineDeclarationContext* RapidParser::ModuleDeclarationContext::routineDeclaration(size_t i) {
  return getRuleContext<RapidParser::RoutineDeclarationContext>(i);
}


size_t RapidParser::ModuleDeclarationContext::getRuleIndex() const {
  return RapidParser::RuleModuleDeclaration;
}


std::any RapidParser::ModuleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitModuleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ModuleDeclarationContext* RapidParser::moduleDeclaration() {
  ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, RapidParser::RuleModuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(RapidParser::MODULE);
    setState(92);
    match(RapidParser::IDENTIFIER);
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__0) {
      setState(93);
      moduleAttributeList();
    }
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 27) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 27)) & 19794439438337) != 0)) {
      setState(98);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(96);
        dataDeclaration();
        break;
      }

      case 2: {
        setState(97);
        routineDeclaration();
        break;
      }

      default:
        break;
      }
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(RapidParser::ENDMODULE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleAttributeListContext ------------------------------------------------------------------

RapidParser::ModuleAttributeListContext::ModuleAttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RapidParser::ModuleAttributeContext *> RapidParser::ModuleAttributeListContext::moduleAttribute() {
  return getRuleContexts<RapidParser::ModuleAttributeContext>();
}

RapidParser::ModuleAttributeContext* RapidParser::ModuleAttributeListContext::moduleAttribute(size_t i) {
  return getRuleContext<RapidParser::ModuleAttributeContext>(i);
}


size_t RapidParser::ModuleAttributeListContext::getRuleIndex() const {
  return RapidParser::RuleModuleAttributeList;
}


std::any RapidParser::ModuleAttributeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitModuleAttributeList(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ModuleAttributeListContext* RapidParser::moduleAttributeList() {
  ModuleAttributeListContext *_localctx = _tracker.createInstance<ModuleAttributeListContext>(_ctx, getState());
  enterRule(_localctx, 4, RapidParser::RuleModuleAttributeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(RapidParser::T__0);
    setState(106);
    moduleAttribute();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::T__1) {
      setState(107);
      match(RapidParser::T__1);
      setState(108);
      moduleAttribute();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(114);
    match(RapidParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleAttributeContext ------------------------------------------------------------------

RapidParser::ModuleAttributeContext::ModuleAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ModuleAttributeContext::SYSMODULE() {
  return getToken(RapidParser::SYSMODULE, 0);
}

tree::TerminalNode* RapidParser::ModuleAttributeContext::NOVIEW() {
  return getToken(RapidParser::NOVIEW, 0);
}

tree::TerminalNode* RapidParser::ModuleAttributeContext::NOSTEPIN() {
  return getToken(RapidParser::NOSTEPIN, 0);
}

tree::TerminalNode* RapidParser::ModuleAttributeContext::VIEWONLY() {
  return getToken(RapidParser::VIEWONLY, 0);
}

tree::TerminalNode* RapidParser::ModuleAttributeContext::READONLY() {
  return getToken(RapidParser::READONLY, 0);
}


size_t RapidParser::ModuleAttributeContext::getRuleIndex() const {
  return RapidParser::RuleModuleAttribute;
}


std::any RapidParser::ModuleAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitModuleAttribute(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ModuleAttributeContext* RapidParser::moduleAttribute() {
  ModuleAttributeContext *_localctx = _tracker.createInstance<ModuleAttributeContext>(_ctx, getState());
  enterRule(_localctx, 6, RapidParser::RuleModuleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    _la = _input->LA(1);
    if (!(((((_la - 53) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 53)) & 526469) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataDeclarationContext ------------------------------------------------------------------

RapidParser::DataDeclarationContext::DataDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::DataTypeContext* RapidParser::DataDeclarationContext::dataType() {
  return getRuleContext<RapidParser::DataTypeContext>(0);
}

tree::TerminalNode* RapidParser::DataDeclarationContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

tree::TerminalNode* RapidParser::DataDeclarationContext::VAR() {
  return getToken(RapidParser::VAR, 0);
}

tree::TerminalNode* RapidParser::DataDeclarationContext::PERS() {
  return getToken(RapidParser::PERS, 0);
}

tree::TerminalNode* RapidParser::DataDeclarationContext::CONST() {
  return getToken(RapidParser::CONST, 0);
}

tree::TerminalNode* RapidParser::DataDeclarationContext::LOCAL() {
  return getToken(RapidParser::LOCAL, 0);
}

RapidParser::ArrayDimensionContext* RapidParser::DataDeclarationContext::arrayDimension() {
  return getRuleContext<RapidParser::ArrayDimensionContext>(0);
}

RapidParser::ExpressionContext* RapidParser::DataDeclarationContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}


size_t RapidParser::DataDeclarationContext::getRuleIndex() const {
  return RapidParser::RuleDataDeclaration;
}


std::any RapidParser::DataDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitDataDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::DataDeclarationContext* RapidParser::dataDeclaration() {
  DataDeclarationContext *_localctx = _tracker.createInstance<DataDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, RapidParser::RuleDataDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::LOCAL) {
      setState(118);
      match(RapidParser::LOCAL);
    }
    setState(121);
    _la = _input->LA(1);
    if (!(((((_la - 27) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 27)) & 17593259786241) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(122);
    dataType();
    setState(123);
    match(RapidParser::IDENTIFIER);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__5) {
      setState(124);
      arrayDimension();
    }
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__3) {
      setState(127);
      match(RapidParser::T__3);
      setState(128);
      expression(0);
    }
    setState(131);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

RapidParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::DataTypeContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}


size_t RapidParser::DataTypeContext::getRuleIndex() const {
  return RapidParser::RuleDataType;
}


std::any RapidParser::DataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitDataType(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::DataTypeContext* RapidParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, RapidParser::RuleDataType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(RapidParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimensionContext ------------------------------------------------------------------

RapidParser::ArrayDimensionContext::ArrayDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RapidParser::ArrayDimExprContext *> RapidParser::ArrayDimensionContext::arrayDimExpr() {
  return getRuleContexts<RapidParser::ArrayDimExprContext>();
}

RapidParser::ArrayDimExprContext* RapidParser::ArrayDimensionContext::arrayDimExpr(size_t i) {
  return getRuleContext<RapidParser::ArrayDimExprContext>(i);
}


size_t RapidParser::ArrayDimensionContext::getRuleIndex() const {
  return RapidParser::RuleArrayDimension;
}


std::any RapidParser::ArrayDimensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitArrayDimension(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ArrayDimensionContext* RapidParser::arrayDimension() {
  ArrayDimensionContext *_localctx = _tracker.createInstance<ArrayDimensionContext>(_ctx, getState());
  enterRule(_localctx, 12, RapidParser::RuleArrayDimension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(RapidParser::T__5);
    setState(136);
    arrayDimExpr();
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::T__1) {
      setState(137);
      match(RapidParser::T__1);
      setState(138);
      arrayDimExpr();
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144);
    match(RapidParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimExprContext ------------------------------------------------------------------

RapidParser::ArrayDimExprContext::ArrayDimExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::ExpressionContext* RapidParser::ArrayDimExprContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}


size_t RapidParser::ArrayDimExprContext::getRuleIndex() const {
  return RapidParser::RuleArrayDimExpr;
}


std::any RapidParser::ArrayDimExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitArrayDimExpr(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ArrayDimExprContext* RapidParser::arrayDimExpr() {
  ArrayDimExprContext *_localctx = _tracker.createInstance<ArrayDimExprContext>(_ctx, getState());
  enterRule(_localctx, 14, RapidParser::RuleArrayDimExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RapidParser::T__0:
      case RapidParser::T__10:
      case RapidParser::T__11:
      case RapidParser::T__20:
      case RapidParser::FALSE:
      case RapidParser::NOT:
      case RapidParser::TRUE:
      case RapidParser::STRING:
      case RapidParser::NUM:
      case RapidParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        expression(0);
        break;
      }

      case RapidParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(147);
        match(RapidParser::T__7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutineDeclarationContext ------------------------------------------------------------------

RapidParser::RoutineDeclarationContext::RoutineDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::ProcedureDeclarationContext* RapidParser::RoutineDeclarationContext::procedureDeclaration() {
  return getRuleContext<RapidParser::ProcedureDeclarationContext>(0);
}

RapidParser::FunctionDeclarationContext* RapidParser::RoutineDeclarationContext::functionDeclaration() {
  return getRuleContext<RapidParser::FunctionDeclarationContext>(0);
}

RapidParser::TrapDeclarationContext* RapidParser::RoutineDeclarationContext::trapDeclaration() {
  return getRuleContext<RapidParser::TrapDeclarationContext>(0);
}


size_t RapidParser::RoutineDeclarationContext::getRuleIndex() const {
  return RapidParser::RuleRoutineDeclaration;
}


std::any RapidParser::RoutineDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitRoutineDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::RoutineDeclarationContext* RapidParser::routineDeclaration() {
  RoutineDeclarationContext *_localctx = _tracker.createInstance<RoutineDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, RapidParser::RuleRoutineDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      procedureDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(151);
      functionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(152);
      trapDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureDeclarationContext ------------------------------------------------------------------

RapidParser::ProcedureDeclarationContext::ProcedureDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ProcedureDeclarationContext::PROC() {
  return getToken(RapidParser::PROC, 0);
}

tree::TerminalNode* RapidParser::ProcedureDeclarationContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

tree::TerminalNode* RapidParser::ProcedureDeclarationContext::ENDPROC() {
  return getToken(RapidParser::ENDPROC, 0);
}

tree::TerminalNode* RapidParser::ProcedureDeclarationContext::LOCAL() {
  return getToken(RapidParser::LOCAL, 0);
}

RapidParser::ParameterListContext* RapidParser::ProcedureDeclarationContext::parameterList() {
  return getRuleContext<RapidParser::ParameterListContext>(0);
}

std::vector<RapidParser::RoutineAttributeContext *> RapidParser::ProcedureDeclarationContext::routineAttribute() {
  return getRuleContexts<RapidParser::RoutineAttributeContext>();
}

RapidParser::RoutineAttributeContext* RapidParser::ProcedureDeclarationContext::routineAttribute(size_t i) {
  return getRuleContext<RapidParser::RoutineAttributeContext>(i);
}

std::vector<RapidParser::StatementContext *> RapidParser::ProcedureDeclarationContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::ProcedureDeclarationContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}


size_t RapidParser::ProcedureDeclarationContext::getRuleIndex() const {
  return RapidParser::RuleProcedureDeclaration;
}


std::any RapidParser::ProcedureDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitProcedureDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ProcedureDeclarationContext* RapidParser::procedureDeclaration() {
  ProcedureDeclarationContext *_localctx = _tracker.createInstance<ProcedureDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, RapidParser::RuleProcedureDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::LOCAL) {
      setState(155);
      match(RapidParser::LOCAL);
    }
    setState(158);
    match(RapidParser::PROC);
    setState(159);
    match(RapidParser::IDENTIFIER);
    setState(160);
    match(RapidParser::T__0);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 144678138029277696) != 0) || _la == RapidParser::VAR

    || _la == RapidParser::IDENTIFIER) {
      setState(161);
      parameterList();
    }
    setState(164);
    match(RapidParser::T__2);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::NOSTEPIN) {
      setState(165);
      routineAttribute();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
      setState(171);
      statement();
      setState(176);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(177);
    match(RapidParser::ENDPROC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

RapidParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::FunctionDeclarationContext::FUNC() {
  return getToken(RapidParser::FUNC, 0);
}

RapidParser::DataTypeContext* RapidParser::FunctionDeclarationContext::dataType() {
  return getRuleContext<RapidParser::DataTypeContext>(0);
}

tree::TerminalNode* RapidParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

tree::TerminalNode* RapidParser::FunctionDeclarationContext::ENDFUNC() {
  return getToken(RapidParser::ENDFUNC, 0);
}

tree::TerminalNode* RapidParser::FunctionDeclarationContext::LOCAL() {
  return getToken(RapidParser::LOCAL, 0);
}

RapidParser::ParameterListContext* RapidParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<RapidParser::ParameterListContext>(0);
}

std::vector<RapidParser::RoutineAttributeContext *> RapidParser::FunctionDeclarationContext::routineAttribute() {
  return getRuleContexts<RapidParser::RoutineAttributeContext>();
}

RapidParser::RoutineAttributeContext* RapidParser::FunctionDeclarationContext::routineAttribute(size_t i) {
  return getRuleContext<RapidParser::RoutineAttributeContext>(i);
}

std::vector<RapidParser::StatementContext *> RapidParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}


size_t RapidParser::FunctionDeclarationContext::getRuleIndex() const {
  return RapidParser::RuleFunctionDeclaration;
}


std::any RapidParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::FunctionDeclarationContext* RapidParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, RapidParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::LOCAL) {
      setState(179);
      match(RapidParser::LOCAL);
    }
    setState(182);
    match(RapidParser::FUNC);
    setState(183);
    dataType();
    setState(184);
    match(RapidParser::IDENTIFIER);
    setState(185);
    match(RapidParser::T__0);
    setState(187);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 144678138029277696) != 0) || _la == RapidParser::VAR

    || _la == RapidParser::IDENTIFIER) {
      setState(186);
      parameterList();
    }
    setState(189);
    match(RapidParser::T__2);
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::NOSTEPIN) {
      setState(190);
      routineAttribute();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
      setState(196);
      statement();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
    match(RapidParser::ENDFUNC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrapDeclarationContext ------------------------------------------------------------------

RapidParser::TrapDeclarationContext::TrapDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::TrapDeclarationContext::TRAP() {
  return getToken(RapidParser::TRAP, 0);
}

tree::TerminalNode* RapidParser::TrapDeclarationContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

tree::TerminalNode* RapidParser::TrapDeclarationContext::ENDTRAP() {
  return getToken(RapidParser::ENDTRAP, 0);
}

std::vector<RapidParser::RoutineAttributeContext *> RapidParser::TrapDeclarationContext::routineAttribute() {
  return getRuleContexts<RapidParser::RoutineAttributeContext>();
}

RapidParser::RoutineAttributeContext* RapidParser::TrapDeclarationContext::routineAttribute(size_t i) {
  return getRuleContext<RapidParser::RoutineAttributeContext>(i);
}

std::vector<RapidParser::StatementContext *> RapidParser::TrapDeclarationContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::TrapDeclarationContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}


size_t RapidParser::TrapDeclarationContext::getRuleIndex() const {
  return RapidParser::RuleTrapDeclaration;
}


std::any RapidParser::TrapDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitTrapDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::TrapDeclarationContext* RapidParser::trapDeclaration() {
  TrapDeclarationContext *_localctx = _tracker.createInstance<TrapDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, RapidParser::RuleTrapDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(RapidParser::TRAP);
    setState(205);
    match(RapidParser::IDENTIFIER);
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::NOSTEPIN) {
      setState(206);
      routineAttribute();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
      setState(212);
      statement();
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(218);
    match(RapidParser::ENDTRAP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutineAttributeContext ------------------------------------------------------------------

RapidParser::RoutineAttributeContext::RoutineAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::RoutineAttributeContext::NOSTEPIN() {
  return getToken(RapidParser::NOSTEPIN, 0);
}


size_t RapidParser::RoutineAttributeContext::getRuleIndex() const {
  return RapidParser::RuleRoutineAttribute;
}


std::any RapidParser::RoutineAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitRoutineAttribute(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::RoutineAttributeContext* RapidParser::routineAttribute() {
  RoutineAttributeContext *_localctx = _tracker.createInstance<RoutineAttributeContext>(_ctx, getState());
  enterRule(_localctx, 24, RapidParser::RuleRoutineAttribute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(RapidParser::NOSTEPIN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

RapidParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RapidParser::ParameterContext *> RapidParser::ParameterListContext::parameter() {
  return getRuleContexts<RapidParser::ParameterContext>();
}

RapidParser::ParameterContext* RapidParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<RapidParser::ParameterContext>(i);
}


size_t RapidParser::ParameterListContext::getRuleIndex() const {
  return RapidParser::RuleParameterList;
}


std::any RapidParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ParameterListContext* RapidParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 26, RapidParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    parameter();
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::T__1) {
      setState(223);
      match(RapidParser::T__1);
      setState(224);
      parameter();
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

RapidParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::DataTypeContext* RapidParser::ParameterContext::dataType() {
  return getRuleContext<RapidParser::DataTypeContext>(0);
}

tree::TerminalNode* RapidParser::ParameterContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

RapidParser::ArrayPlaceholderContext* RapidParser::ParameterContext::arrayPlaceholder() {
  return getRuleContext<RapidParser::ArrayPlaceholderContext>(0);
}

tree::TerminalNode* RapidParser::ParameterContext::INOUT() {
  return getToken(RapidParser::INOUT, 0);
}

tree::TerminalNode* RapidParser::ParameterContext::VAR() {
  return getToken(RapidParser::VAR, 0);
}

tree::TerminalNode* RapidParser::ParameterContext::PERS() {
  return getToken(RapidParser::PERS, 0);
}


size_t RapidParser::ParameterContext::getRuleIndex() const {
  return RapidParser::RuleParameter;
}


std::any RapidParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ParameterContext* RapidParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 28, RapidParser::RuleParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(230);
      match(RapidParser::T__8);
    }
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 49) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 49)) & 4194561) != 0)) {
      setState(233);
      _la = _input->LA(1);
      if (!(((((_la - 49) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 49)) & 4194561) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(236);
    dataType();
    setState(237);
    match(RapidParser::IDENTIFIER);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__5) {
      setState(238);
      arrayPlaceholder();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayPlaceholderContext ------------------------------------------------------------------

RapidParser::ArrayPlaceholderContext::ArrayPlaceholderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RapidParser::ArrayPlaceholderContext::getRuleIndex() const {
  return RapidParser::RuleArrayPlaceholder;
}


std::any RapidParser::ArrayPlaceholderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitArrayPlaceholder(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ArrayPlaceholderContext* RapidParser::arrayPlaceholder() {
  ArrayPlaceholderContext *_localctx = _tracker.createInstance<ArrayPlaceholderContext>(_ctx, getState());
  enterRule(_localctx, 30, RapidParser::RuleArrayPlaceholder);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(RapidParser::T__5);
    setState(242);
    match(RapidParser::T__7);
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::T__1) {
      setState(243);
      match(RapidParser::T__1);
      setState(244);
      match(RapidParser::T__7);
      setState(249);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(250);
    match(RapidParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

RapidParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::DataDeclarationContext* RapidParser::StatementContext::dataDeclaration() {
  return getRuleContext<RapidParser::DataDeclarationContext>(0);
}

RapidParser::MoveAbsJStatementContext* RapidParser::StatementContext::moveAbsJStatement() {
  return getRuleContext<RapidParser::MoveAbsJStatementContext>(0);
}

RapidParser::MoveCStatementContext* RapidParser::StatementContext::moveCStatement() {
  return getRuleContext<RapidParser::MoveCStatementContext>(0);
}

RapidParser::MoveJStatementContext* RapidParser::StatementContext::moveJStatement() {
  return getRuleContext<RapidParser::MoveJStatementContext>(0);
}

RapidParser::MoveLStatementContext* RapidParser::StatementContext::moveLStatement() {
  return getRuleContext<RapidParser::MoveLStatementContext>(0);
}

RapidParser::AssignmentStatementContext* RapidParser::StatementContext::assignmentStatement() {
  return getRuleContext<RapidParser::AssignmentStatementContext>(0);
}

RapidParser::ProcedureCallStatementContext* RapidParser::StatementContext::procedureCallStatement() {
  return getRuleContext<RapidParser::ProcedureCallStatementContext>(0);
}

RapidParser::IfStatementContext* RapidParser::StatementContext::ifStatement() {
  return getRuleContext<RapidParser::IfStatementContext>(0);
}

RapidParser::ForStatementContext* RapidParser::StatementContext::forStatement() {
  return getRuleContext<RapidParser::ForStatementContext>(0);
}

RapidParser::WhileStatementContext* RapidParser::StatementContext::whileStatement() {
  return getRuleContext<RapidParser::WhileStatementContext>(0);
}

RapidParser::TestStatementContext* RapidParser::StatementContext::testStatement() {
  return getRuleContext<RapidParser::TestStatementContext>(0);
}

RapidParser::ReturnStatementContext* RapidParser::StatementContext::returnStatement() {
  return getRuleContext<RapidParser::ReturnStatementContext>(0);
}

RapidParser::ExitStatementContext* RapidParser::StatementContext::exitStatement() {
  return getRuleContext<RapidParser::ExitStatementContext>(0);
}

RapidParser::GotoStatementContext* RapidParser::StatementContext::gotoStatement() {
  return getRuleContext<RapidParser::GotoStatementContext>(0);
}

RapidParser::LabelStatementContext* RapidParser::StatementContext::labelStatement() {
  return getRuleContext<RapidParser::LabelStatementContext>(0);
}

RapidParser::ConnectStatementContext* RapidParser::StatementContext::connectStatement() {
  return getRuleContext<RapidParser::ConnectStatementContext>(0);
}

RapidParser::RaiseStatementContext* RapidParser::StatementContext::raiseStatement() {
  return getRuleContext<RapidParser::RaiseStatementContext>(0);
}

RapidParser::RetryStatementContext* RapidParser::StatementContext::retryStatement() {
  return getRuleContext<RapidParser::RetryStatementContext>(0);
}

RapidParser::TryNextStatementContext* RapidParser::StatementContext::tryNextStatement() {
  return getRuleContext<RapidParser::TryNextStatementContext>(0);
}


size_t RapidParser::StatementContext::getRuleIndex() const {
  return RapidParser::RuleStatement;
}


std::any RapidParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::StatementContext* RapidParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 32, RapidParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(252);
      dataDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(253);
      moveAbsJStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(254);
      moveCStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(255);
      moveJStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(256);
      moveLStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(257);
      assignmentStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(258);
      procedureCallStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(259);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(260);
      forStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(261);
      whileStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(262);
      testStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(263);
      returnStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(264);
      exitStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(265);
      gotoStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(266);
      labelStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(267);
      connectStatement();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(268);
      raiseStatement();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(269);
      retryStatement();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(270);
      tryNextStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

RapidParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::VariableReferenceContext* RapidParser::AssignmentStatementContext::variableReference() {
  return getRuleContext<RapidParser::VariableReferenceContext>(0);
}

RapidParser::ExpressionContext* RapidParser::AssignmentStatementContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}


size_t RapidParser::AssignmentStatementContext::getRuleIndex() const {
  return RapidParser::RuleAssignmentStatement;
}


std::any RapidParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::AssignmentStatementContext* RapidParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, RapidParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    variableReference();
    setState(274);
    match(RapidParser::T__3);
    setState(275);
    expression(0);
    setState(276);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureCallStatementContext ------------------------------------------------------------------

RapidParser::ProcedureCallStatementContext::ProcedureCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ProcedureCallStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

RapidParser::ArgumentListContext* RapidParser::ProcedureCallStatementContext::argumentList() {
  return getRuleContext<RapidParser::ArgumentListContext>(0);
}


size_t RapidParser::ProcedureCallStatementContext::getRuleIndex() const {
  return RapidParser::RuleProcedureCallStatement;
}


std::any RapidParser::ProcedureCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitProcedureCallStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ProcedureCallStatementContext* RapidParser::procedureCallStatement() {
  ProcedureCallStatementContext *_localctx = _tracker.createInstance<ProcedureCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, RapidParser::RuleProcedureCallStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(RapidParser::IDENTIFIER);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18023194604608002) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 8577) != 0)) {
      setState(279);
      argumentList();
    }
    setState(282);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

RapidParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RapidParser::ArgumentContext *> RapidParser::ArgumentListContext::argument() {
  return getRuleContexts<RapidParser::ArgumentContext>();
}

RapidParser::ArgumentContext* RapidParser::ArgumentListContext::argument(size_t i) {
  return getRuleContext<RapidParser::ArgumentContext>(i);
}


size_t RapidParser::ArgumentListContext::getRuleIndex() const {
  return RapidParser::RuleArgumentList;
}


std::any RapidParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ArgumentListContext* RapidParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 38, RapidParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    argument();
    setState(289);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::T__1) {
      setState(285);
      match(RapidParser::T__1);
      setState(286);
      argument();
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

RapidParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ArgumentContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

RapidParser::ExpressionContext* RapidParser::ArgumentContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}

RapidParser::NamedOrPositionalExprContext* RapidParser::ArgumentContext::namedOrPositionalExpr() {
  return getRuleContext<RapidParser::NamedOrPositionalExprContext>(0);
}


size_t RapidParser::ArgumentContext::getRuleIndex() const {
  return RapidParser::RuleArgument;
}


std::any RapidParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ArgumentContext* RapidParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 40, RapidParser::RuleArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(299);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RapidParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(292);
        match(RapidParser::T__8);
        setState(293);
        match(RapidParser::IDENTIFIER);
        setState(296);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RapidParser::T__3) {
          setState(294);
          match(RapidParser::T__3);
          setState(295);
          expression(0);
        }
        break;
      }

      case RapidParser::T__0:
      case RapidParser::T__10:
      case RapidParser::T__11:
      case RapidParser::T__20:
      case RapidParser::FALSE:
      case RapidParser::NOT:
      case RapidParser::TRUE:
      case RapidParser::STRING:
      case RapidParser::NUM:
      case RapidParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(298);
        namedOrPositionalExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedOrPositionalExprContext ------------------------------------------------------------------

RapidParser::NamedOrPositionalExprContext::NamedOrPositionalExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RapidParser::ExpressionContext* RapidParser::NamedOrPositionalExprContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}

tree::TerminalNode* RapidParser::NamedOrPositionalExprContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}


size_t RapidParser::NamedOrPositionalExprContext::getRuleIndex() const {
  return RapidParser::RuleNamedOrPositionalExpr;
}


std::any RapidParser::NamedOrPositionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitNamedOrPositionalExpr(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::NamedOrPositionalExprContext* RapidParser::namedOrPositionalExpr() {
  NamedOrPositionalExprContext *_localctx = _tracker.createInstance<NamedOrPositionalExprContext>(_ctx, getState());
  enterRule(_localctx, 42, RapidParser::RuleNamedOrPositionalExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(301);
      match(RapidParser::IDENTIFIER);
      setState(302);
      match(RapidParser::T__3);
      break;
    }

    default:
      break;
    }
    setState(305);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchExprContext ------------------------------------------------------------------

RapidParser::SwitchExprContext::SwitchExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::SwitchExprContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

RapidParser::ExpressionContext* RapidParser::SwitchExprContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}


size_t RapidParser::SwitchExprContext::getRuleIndex() const {
  return RapidParser::RuleSwitchExpr;
}


std::any RapidParser::SwitchExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitSwitchExpr(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::SwitchExprContext* RapidParser::switchExpr() {
  SwitchExprContext *_localctx = _tracker.createInstance<SwitchExprContext>(_ctx, getState());
  enterRule(_localctx, 44, RapidParser::RuleSwitchExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(RapidParser::T__8);
    setState(308);
    match(RapidParser::IDENTIFIER);
    setState(309);
    match(RapidParser::T__3);
    setState(310);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveAbsJStatementContext ------------------------------------------------------------------

RapidParser::MoveAbsJStatementContext::MoveAbsJStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::MoveAbsJStatementContext::MOVEABSJ() {
  return getToken(RapidParser::MOVEABSJ, 0);
}

std::vector<RapidParser::NamedOrPositionalExprContext *> RapidParser::MoveAbsJStatementContext::namedOrPositionalExpr() {
  return getRuleContexts<RapidParser::NamedOrPositionalExprContext>();
}

RapidParser::NamedOrPositionalExprContext* RapidParser::MoveAbsJStatementContext::namedOrPositionalExpr(size_t i) {
  return getRuleContext<RapidParser::NamedOrPositionalExprContext>(i);
}

tree::TerminalNode* RapidParser::MoveAbsJStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

std::vector<RapidParser::SwitchExprContext *> RapidParser::MoveAbsJStatementContext::switchExpr() {
  return getRuleContexts<RapidParser::SwitchExprContext>();
}

RapidParser::SwitchExprContext* RapidParser::MoveAbsJStatementContext::switchExpr(size_t i) {
  return getRuleContext<RapidParser::SwitchExprContext>(i);
}


size_t RapidParser::MoveAbsJStatementContext::getRuleIndex() const {
  return RapidParser::RuleMoveAbsJStatement;
}


std::any RapidParser::MoveAbsJStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitMoveAbsJStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::MoveAbsJStatementContext* RapidParser::moveAbsJStatement() {
  MoveAbsJStatementContext *_localctx = _tracker.createInstance<MoveAbsJStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, RapidParser::RuleMoveAbsJStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(RapidParser::MOVEABSJ);
    setState(316);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(313);
      match(RapidParser::T__8);
      setState(314);
      match(RapidParser::IDENTIFIER);
      setState(315);
      match(RapidParser::T__1);
    }
    setState(318);
    namedOrPositionalExpr();
    setState(319);
    match(RapidParser::T__1);
    setState(320);
    namedOrPositionalExpr();
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(321);
      switchExpr();
    }
    setState(324);
    match(RapidParser::T__1);
    setState(325);
    namedOrPositionalExpr();
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(326);
      switchExpr();
    }
    setState(329);
    match(RapidParser::T__1);
    setState(330);
    namedOrPositionalExpr();
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(331);
      switchExpr();
    }
    setState(334);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveCStatementContext ------------------------------------------------------------------

RapidParser::MoveCStatementContext::MoveCStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::MoveCStatementContext::MOVEC() {
  return getToken(RapidParser::MOVEC, 0);
}

std::vector<RapidParser::NamedOrPositionalExprContext *> RapidParser::MoveCStatementContext::namedOrPositionalExpr() {
  return getRuleContexts<RapidParser::NamedOrPositionalExprContext>();
}

RapidParser::NamedOrPositionalExprContext* RapidParser::MoveCStatementContext::namedOrPositionalExpr(size_t i) {
  return getRuleContext<RapidParser::NamedOrPositionalExprContext>(i);
}

tree::TerminalNode* RapidParser::MoveCStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

std::vector<RapidParser::SwitchExprContext *> RapidParser::MoveCStatementContext::switchExpr() {
  return getRuleContexts<RapidParser::SwitchExprContext>();
}

RapidParser::SwitchExprContext* RapidParser::MoveCStatementContext::switchExpr(size_t i) {
  return getRuleContext<RapidParser::SwitchExprContext>(i);
}


size_t RapidParser::MoveCStatementContext::getRuleIndex() const {
  return RapidParser::RuleMoveCStatement;
}


std::any RapidParser::MoveCStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitMoveCStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::MoveCStatementContext* RapidParser::moveCStatement() {
  MoveCStatementContext *_localctx = _tracker.createInstance<MoveCStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, RapidParser::RuleMoveCStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(RapidParser::MOVEC);
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(337);
      match(RapidParser::T__8);
      setState(338);
      match(RapidParser::IDENTIFIER);
      setState(339);
      match(RapidParser::T__1);
    }
    setState(342);
    namedOrPositionalExpr();
    setState(343);
    match(RapidParser::T__1);
    setState(344);
    namedOrPositionalExpr();
    setState(345);
    match(RapidParser::T__1);
    setState(346);
    namedOrPositionalExpr();
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(347);
      switchExpr();
    }
    setState(350);
    match(RapidParser::T__1);
    setState(351);
    namedOrPositionalExpr();
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(352);
      switchExpr();
    }
    setState(355);
    match(RapidParser::T__1);
    setState(356);
    namedOrPositionalExpr();
    setState(358);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(357);
      switchExpr();
    }
    setState(360);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveJStatementContext ------------------------------------------------------------------

RapidParser::MoveJStatementContext::MoveJStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::MoveJStatementContext::MOVEJ() {
  return getToken(RapidParser::MOVEJ, 0);
}

std::vector<RapidParser::NamedOrPositionalExprContext *> RapidParser::MoveJStatementContext::namedOrPositionalExpr() {
  return getRuleContexts<RapidParser::NamedOrPositionalExprContext>();
}

RapidParser::NamedOrPositionalExprContext* RapidParser::MoveJStatementContext::namedOrPositionalExpr(size_t i) {
  return getRuleContext<RapidParser::NamedOrPositionalExprContext>(i);
}

tree::TerminalNode* RapidParser::MoveJStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

std::vector<RapidParser::SwitchExprContext *> RapidParser::MoveJStatementContext::switchExpr() {
  return getRuleContexts<RapidParser::SwitchExprContext>();
}

RapidParser::SwitchExprContext* RapidParser::MoveJStatementContext::switchExpr(size_t i) {
  return getRuleContext<RapidParser::SwitchExprContext>(i);
}


size_t RapidParser::MoveJStatementContext::getRuleIndex() const {
  return RapidParser::RuleMoveJStatement;
}


std::any RapidParser::MoveJStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitMoveJStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::MoveJStatementContext* RapidParser::moveJStatement() {
  MoveJStatementContext *_localctx = _tracker.createInstance<MoveJStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, RapidParser::RuleMoveJStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(RapidParser::MOVEJ);
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(363);
      match(RapidParser::T__8);
      setState(364);
      match(RapidParser::IDENTIFIER);
      setState(365);
      match(RapidParser::T__1);
    }
    setState(368);
    namedOrPositionalExpr();
    setState(369);
    match(RapidParser::T__1);
    setState(370);
    namedOrPositionalExpr();
    setState(372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(371);
      switchExpr();
    }
    setState(374);
    match(RapidParser::T__1);
    setState(375);
    namedOrPositionalExpr();
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(376);
      switchExpr();
    }
    setState(379);
    match(RapidParser::T__1);
    setState(380);
    namedOrPositionalExpr();
    setState(382);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(381);
      switchExpr();
    }
    setState(384);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveLStatementContext ------------------------------------------------------------------

RapidParser::MoveLStatementContext::MoveLStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::MoveLStatementContext::MOVEL() {
  return getToken(RapidParser::MOVEL, 0);
}

std::vector<RapidParser::NamedOrPositionalExprContext *> RapidParser::MoveLStatementContext::namedOrPositionalExpr() {
  return getRuleContexts<RapidParser::NamedOrPositionalExprContext>();
}

RapidParser::NamedOrPositionalExprContext* RapidParser::MoveLStatementContext::namedOrPositionalExpr(size_t i) {
  return getRuleContext<RapidParser::NamedOrPositionalExprContext>(i);
}

tree::TerminalNode* RapidParser::MoveLStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

std::vector<RapidParser::SwitchExprContext *> RapidParser::MoveLStatementContext::switchExpr() {
  return getRuleContexts<RapidParser::SwitchExprContext>();
}

RapidParser::SwitchExprContext* RapidParser::MoveLStatementContext::switchExpr(size_t i) {
  return getRuleContext<RapidParser::SwitchExprContext>(i);
}


size_t RapidParser::MoveLStatementContext::getRuleIndex() const {
  return RapidParser::RuleMoveLStatement;
}


std::any RapidParser::MoveLStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitMoveLStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::MoveLStatementContext* RapidParser::moveLStatement() {
  MoveLStatementContext *_localctx = _tracker.createInstance<MoveLStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, RapidParser::RuleMoveLStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(RapidParser::MOVEL);
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(387);
      match(RapidParser::T__8);
      setState(388);
      match(RapidParser::IDENTIFIER);
      setState(389);
      match(RapidParser::T__1);
    }
    setState(392);
    namedOrPositionalExpr();
    setState(393);
    match(RapidParser::T__1);
    setState(394);
    namedOrPositionalExpr();
    setState(396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(395);
      switchExpr();
    }
    setState(398);
    match(RapidParser::T__1);
    setState(399);
    namedOrPositionalExpr();
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(400);
      switchExpr();
    }
    setState(403);
    match(RapidParser::T__1);
    setState(404);
    namedOrPositionalExpr();
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::T__8) {
      setState(405);
      switchExpr();
    }
    setState(408);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

RapidParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::IfStatementContext::IF() {
  return getToken(RapidParser::IF, 0);
}

std::vector<RapidParser::ExpressionContext *> RapidParser::IfStatementContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RapidParser::IfStatementContext::THEN() {
  return getTokens(RapidParser::THEN);
}

tree::TerminalNode* RapidParser::IfStatementContext::THEN(size_t i) {
  return getToken(RapidParser::THEN, i);
}

tree::TerminalNode* RapidParser::IfStatementContext::ENDIF() {
  return getToken(RapidParser::ENDIF, 0);
}

std::vector<RapidParser::StatementContext *> RapidParser::IfStatementContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> RapidParser::IfStatementContext::ELSEIF() {
  return getTokens(RapidParser::ELSEIF);
}

tree::TerminalNode* RapidParser::IfStatementContext::ELSEIF(size_t i) {
  return getToken(RapidParser::ELSEIF, i);
}

tree::TerminalNode* RapidParser::IfStatementContext::ELSE() {
  return getToken(RapidParser::ELSE, 0);
}


size_t RapidParser::IfStatementContext::getRuleIndex() const {
  return RapidParser::RuleIfStatement;
}


std::any RapidParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::IfStatementContext* RapidParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, RapidParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410);
    match(RapidParser::IF);
    setState(411);
    expression(0);
    setState(412);
    match(RapidParser::THEN);
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
      setState(413);
      statement();
      setState(418);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(430);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::ELSEIF) {
      setState(419);
      match(RapidParser::ELSEIF);
      setState(420);
      expression(0);
      setState(421);
      match(RapidParser::THEN);
      setState(425);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 26) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
        setState(422);
        statement();
        setState(427);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(432);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::ELSE) {
      setState(433);
      match(RapidParser::ELSE);
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 26) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
        setState(434);
        statement();
        setState(439);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(442);
    match(RapidParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

RapidParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ForStatementContext::FOR() {
  return getToken(RapidParser::FOR, 0);
}

tree::TerminalNode* RapidParser::ForStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

tree::TerminalNode* RapidParser::ForStatementContext::FROM() {
  return getToken(RapidParser::FROM, 0);
}

std::vector<RapidParser::ExpressionContext *> RapidParser::ForStatementContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

tree::TerminalNode* RapidParser::ForStatementContext::TO() {
  return getToken(RapidParser::TO, 0);
}

tree::TerminalNode* RapidParser::ForStatementContext::DO() {
  return getToken(RapidParser::DO, 0);
}

tree::TerminalNode* RapidParser::ForStatementContext::ENDFOR() {
  return getToken(RapidParser::ENDFOR, 0);
}

tree::TerminalNode* RapidParser::ForStatementContext::STEP() {
  return getToken(RapidParser::STEP, 0);
}

std::vector<RapidParser::StatementContext *> RapidParser::ForStatementContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::ForStatementContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}


size_t RapidParser::ForStatementContext::getRuleIndex() const {
  return RapidParser::RuleForStatement;
}


std::any RapidParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ForStatementContext* RapidParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, RapidParser::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    match(RapidParser::FOR);
    setState(445);
    match(RapidParser::IDENTIFIER);
    setState(446);
    match(RapidParser::FROM);
    setState(447);
    expression(0);
    setState(448);
    match(RapidParser::TO);
    setState(449);
    expression(0);
    setState(452);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::STEP) {
      setState(450);
      match(RapidParser::STEP);
      setState(451);
      expression(0);
    }
    setState(454);
    match(RapidParser::DO);
    setState(458);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
      setState(455);
      statement();
      setState(460);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(461);
    match(RapidParser::ENDFOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

RapidParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::WhileStatementContext::WHILE() {
  return getToken(RapidParser::WHILE, 0);
}

RapidParser::ExpressionContext* RapidParser::WhileStatementContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}

tree::TerminalNode* RapidParser::WhileStatementContext::DO() {
  return getToken(RapidParser::DO, 0);
}

tree::TerminalNode* RapidParser::WhileStatementContext::ENDWHILE() {
  return getToken(RapidParser::ENDWHILE, 0);
}

std::vector<RapidParser::StatementContext *> RapidParser::WhileStatementContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::WhileStatementContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}


size_t RapidParser::WhileStatementContext::getRuleIndex() const {
  return RapidParser::RuleWhileStatement;
}


std::any RapidParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::WhileStatementContext* RapidParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, RapidParser::RuleWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(RapidParser::WHILE);
    setState(464);
    expression(0);
    setState(465);
    match(RapidParser::DO);
    setState(469);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 26) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
      setState(466);
      statement();
      setState(471);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(472);
    match(RapidParser::ENDWHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestStatementContext ------------------------------------------------------------------

RapidParser::TestStatementContext::TestStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::TestStatementContext::TEST() {
  return getToken(RapidParser::TEST, 0);
}

std::vector<RapidParser::ExpressionContext *> RapidParser::TestStatementContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::TestStatementContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

tree::TerminalNode* RapidParser::TestStatementContext::ENDTEST() {
  return getToken(RapidParser::ENDTEST, 0);
}

std::vector<tree::TerminalNode *> RapidParser::TestStatementContext::CASE() {
  return getTokens(RapidParser::CASE);
}

tree::TerminalNode* RapidParser::TestStatementContext::CASE(size_t i) {
  return getToken(RapidParser::CASE, i);
}

tree::TerminalNode* RapidParser::TestStatementContext::DEFAULT() {
  return getToken(RapidParser::DEFAULT, 0);
}

std::vector<RapidParser::StatementContext *> RapidParser::TestStatementContext::statement() {
  return getRuleContexts<RapidParser::StatementContext>();
}

RapidParser::StatementContext* RapidParser::TestStatementContext::statement(size_t i) {
  return getRuleContext<RapidParser::StatementContext>(i);
}


size_t RapidParser::TestStatementContext::getRuleIndex() const {
  return RapidParser::RuleTestStatement;
}


std::any RapidParser::TestStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitTestStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::TestStatementContext* RapidParser::testStatement() {
  TestStatementContext *_localctx = _tracker.createInstance<TestStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, RapidParser::RuleTestStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(RapidParser::TEST);
    setState(475);
    expression(0);
    setState(492); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(476);
      match(RapidParser::CASE);
      setState(477);
      expression(0);
      setState(482);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RapidParser::T__1) {
        setState(478);
        match(RapidParser::T__1);
        setState(479);
        expression(0);
        setState(484);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(485);
      match(RapidParser::T__9);
      setState(489);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 26) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
        setState(486);
        statement();
        setState(491);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(494); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RapidParser::CASE);
    setState(504);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::DEFAULT) {
      setState(496);
      match(RapidParser::DEFAULT);
      setState(497);
      match(RapidParser::T__9);
      setState(501);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 26) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 26)) & 139805766090817539) != 0)) {
        setState(498);
        statement();
        setState(503);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(506);
    match(RapidParser::ENDTEST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

RapidParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ReturnStatementContext::RETURN() {
  return getToken(RapidParser::RETURN, 0);
}

RapidParser::ExpressionContext* RapidParser::ReturnStatementContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}


size_t RapidParser::ReturnStatementContext::getRuleIndex() const {
  return RapidParser::RuleReturnStatement;
}


std::any RapidParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ReturnStatementContext* RapidParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, RapidParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(RapidParser::RETURN);
    setState(510);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18023194604607490) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 8577) != 0)) {
      setState(509);
      expression(0);
    }
    setState(512);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitStatementContext ------------------------------------------------------------------

RapidParser::ExitStatementContext::ExitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ExitStatementContext::EXIT() {
  return getToken(RapidParser::EXIT, 0);
}


size_t RapidParser::ExitStatementContext::getRuleIndex() const {
  return RapidParser::RuleExitStatement;
}


std::any RapidParser::ExitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitExitStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ExitStatementContext* RapidParser::exitStatement() {
  ExitStatementContext *_localctx = _tracker.createInstance<ExitStatementContext>(_ctx, getState());
  enterRule(_localctx, 64, RapidParser::RuleExitStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(RapidParser::EXIT);
    setState(515);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

RapidParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::GotoStatementContext::GOTO() {
  return getToken(RapidParser::GOTO, 0);
}

tree::TerminalNode* RapidParser::GotoStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}


size_t RapidParser::GotoStatementContext::getRuleIndex() const {
  return RapidParser::RuleGotoStatement;
}


std::any RapidParser::GotoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitGotoStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::GotoStatementContext* RapidParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, RapidParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
    match(RapidParser::GOTO);
    setState(518);
    match(RapidParser::IDENTIFIER);
    setState(519);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelStatementContext ------------------------------------------------------------------

RapidParser::LabelStatementContext::LabelStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::LabelStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}


size_t RapidParser::LabelStatementContext::getRuleIndex() const {
  return RapidParser::RuleLabelStatement;
}


std::any RapidParser::LabelStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitLabelStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::LabelStatementContext* RapidParser::labelStatement() {
  LabelStatementContext *_localctx = _tracker.createInstance<LabelStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, RapidParser::RuleLabelStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    match(RapidParser::IDENTIFIER);
    setState(522);
    match(RapidParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnectStatementContext ------------------------------------------------------------------

RapidParser::ConnectStatementContext::ConnectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::ConnectStatementContext::CONNECT() {
  return getToken(RapidParser::CONNECT, 0);
}

RapidParser::VariableReferenceContext* RapidParser::ConnectStatementContext::variableReference() {
  return getRuleContext<RapidParser::VariableReferenceContext>(0);
}

tree::TerminalNode* RapidParser::ConnectStatementContext::WITH() {
  return getToken(RapidParser::WITH, 0);
}

tree::TerminalNode* RapidParser::ConnectStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}


size_t RapidParser::ConnectStatementContext::getRuleIndex() const {
  return RapidParser::RuleConnectStatement;
}


std::any RapidParser::ConnectStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitConnectStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ConnectStatementContext* RapidParser::connectStatement() {
  ConnectStatementContext *_localctx = _tracker.createInstance<ConnectStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, RapidParser::RuleConnectStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(524);
    match(RapidParser::CONNECT);
    setState(525);
    variableReference();
    setState(526);
    match(RapidParser::WITH);
    setState(527);
    match(RapidParser::IDENTIFIER);
    setState(528);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RaiseStatementContext ------------------------------------------------------------------

RapidParser::RaiseStatementContext::RaiseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::RaiseStatementContext::RAISE() {
  return getToken(RapidParser::RAISE, 0);
}

tree::TerminalNode* RapidParser::RaiseStatementContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}


size_t RapidParser::RaiseStatementContext::getRuleIndex() const {
  return RapidParser::RuleRaiseStatement;
}


std::any RapidParser::RaiseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitRaiseStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::RaiseStatementContext* RapidParser::raiseStatement() {
  RaiseStatementContext *_localctx = _tracker.createInstance<RaiseStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, RapidParser::RuleRaiseStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    match(RapidParser::RAISE);
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RapidParser::IDENTIFIER) {
      setState(531);
      match(RapidParser::IDENTIFIER);
    }
    setState(534);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetryStatementContext ------------------------------------------------------------------

RapidParser::RetryStatementContext::RetryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::RetryStatementContext::RETRY() {
  return getToken(RapidParser::RETRY, 0);
}


size_t RapidParser::RetryStatementContext::getRuleIndex() const {
  return RapidParser::RuleRetryStatement;
}


std::any RapidParser::RetryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitRetryStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::RetryStatementContext* RapidParser::retryStatement() {
  RetryStatementContext *_localctx = _tracker.createInstance<RetryStatementContext>(_ctx, getState());
  enterRule(_localctx, 74, RapidParser::RuleRetryStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    match(RapidParser::RETRY);
    setState(537);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryNextStatementContext ------------------------------------------------------------------

RapidParser::TryNextStatementContext::TryNextStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::TryNextStatementContext::TRYNEXT() {
  return getToken(RapidParser::TRYNEXT, 0);
}


size_t RapidParser::TryNextStatementContext::getRuleIndex() const {
  return RapidParser::RuleTryNextStatement;
}


std::any RapidParser::TryNextStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitTryNextStatement(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::TryNextStatementContext* RapidParser::tryNextStatement() {
  TryNextStatementContext *_localctx = _tracker.createInstance<TryNextStatementContext>(_ctx, getState());
  enterRule(_localctx, 76, RapidParser::RuleTryNextStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    match(RapidParser::TRYNEXT);
    setState(540);
    match(RapidParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

RapidParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RapidParser::ExpressionContext::getRuleIndex() const {
  return RapidParser::RuleExpression;
}

void RapidParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- XorOrExprContext ------------------------------------------------------------------

std::vector<RapidParser::ExpressionContext *> RapidParser::XorOrExprContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::XorOrExprContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

tree::TerminalNode* RapidParser::XorOrExprContext::XOR() {
  return getToken(RapidParser::XOR, 0);
}

tree::TerminalNode* RapidParser::XorOrExprContext::OR() {
  return getToken(RapidParser::OR, 0);
}

RapidParser::XorOrExprContext::XorOrExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::XorOrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitXorOrExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryExprContext ------------------------------------------------------------------

RapidParser::ExpressionContext* RapidParser::UnaryExprContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}

RapidParser::UnaryExprContext::UnaryExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

tree::TerminalNode* RapidParser::NotExprContext::NOT() {
  return getToken(RapidParser::NOT, 0);
}

RapidParser::ExpressionContext* RapidParser::NotExprContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}

RapidParser::NotExprContext::NotExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarRefExprContext ------------------------------------------------------------------

RapidParser::VariableReferenceContext* RapidParser::VarRefExprContext::variableReference() {
  return getRuleContext<RapidParser::VariableReferenceContext>(0);
}

RapidParser::VarRefExprContext::VarRefExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::VarRefExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitVarRefExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

std::vector<RapidParser::ExpressionContext *> RapidParser::AddExprContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::AddExprContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

RapidParser::AddExprContext::AddExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralExprContext ------------------------------------------------------------------

RapidParser::LiteralContext* RapidParser::LiteralExprContext::literal() {
  return getRuleContext<RapidParser::LiteralContext>(0);
}

RapidParser::LiteralExprContext::LiteralExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::LiteralExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitLiteralExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulExprContext ------------------------------------------------------------------

std::vector<RapidParser::ExpressionContext *> RapidParser::MulExprContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::MulExprContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

tree::TerminalNode* RapidParser::MulExprContext::DIV() {
  return getToken(RapidParser::DIV, 0);
}

tree::TerminalNode* RapidParser::MulExprContext::MOD() {
  return getToken(RapidParser::MOD, 0);
}

RapidParser::MulExprContext::MulExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AggregateExprContext ------------------------------------------------------------------

RapidParser::AggregateContext* RapidParser::AggregateExprContext::aggregate() {
  return getRuleContext<RapidParser::AggregateContext>(0);
}

RapidParser::AggregateExprContext::AggregateExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::AggregateExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitAggregateExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallExprContext ------------------------------------------------------------------

RapidParser::FunctionCallContext* RapidParser::FuncCallExprContext::functionCall() {
  return getRuleContext<RapidParser::FunctionCallContext>(0);
}

RapidParser::FuncCallExprContext::FuncCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::FuncCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitFuncCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelExprContext ------------------------------------------------------------------

std::vector<RapidParser::ExpressionContext *> RapidParser::RelExprContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::RelExprContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

RapidParser::RelExprContext::RelExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::RelExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitRelExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

RapidParser::ExpressionContext* RapidParser::ParenExprContext::expression() {
  return getRuleContext<RapidParser::ExpressionContext>(0);
}

RapidParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndExprContext ------------------------------------------------------------------

std::vector<RapidParser::ExpressionContext *> RapidParser::AndExprContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::AndExprContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}

tree::TerminalNode* RapidParser::AndExprContext::AND() {
  return getToken(RapidParser::AND, 0);
}

RapidParser::AndExprContext::AndExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any RapidParser::AndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitAndExpr(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::ExpressionContext* RapidParser::expression() {
   return expression(0);
}

RapidParser::ExpressionContext* RapidParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RapidParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  RapidParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, RapidParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(543);
      match(RapidParser::T__0);
      setState(544);
      expression(0);
      setState(545);
      match(RapidParser::T__2);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<AggregateExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(547);
      aggregate();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FuncCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(548);
      functionCall();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<VarRefExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(549);
      variableReference();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LiteralExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(550);
      literal();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(551);
      _la = _input->LA(1);
      if (!(_la == RapidParser::T__10

      || _la == RapidParser::T__11)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(552);
      expression(7);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(553);
      match(RapidParser::NOT);
      setState(554);
      expression(3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(574);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(572);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(557);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(558);
          antlrcpp::downCast<MulExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2251800350564608) != 0))) {
            antlrcpp::downCast<MulExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(559);
          expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(560);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(561);
          antlrcpp::downCast<AddExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RapidParser::T__10

          || _la == RapidParser::T__11)) {
            antlrcpp::downCast<AddExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(562);
          expression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(563);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(564);
          antlrcpp::downCast<RelExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 1032192) != 0))) {
            antlrcpp::downCast<RelExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(565);
          expression(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AndExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(566);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(567);
          match(RapidParser::AND);
          setState(568);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<XorOrExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(569);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(570);
          antlrcpp::downCast<XorOrExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RapidParser::OR

          || _la == RapidParser::XOR)) {
            antlrcpp::downCast<XorOrExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(571);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(576);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

RapidParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::FunctionCallContext::IDENTIFIER() {
  return getToken(RapidParser::IDENTIFIER, 0);
}

RapidParser::ArgumentListContext* RapidParser::FunctionCallContext::argumentList() {
  return getRuleContext<RapidParser::ArgumentListContext>(0);
}


size_t RapidParser::FunctionCallContext::getRuleIndex() const {
  return RapidParser::RuleFunctionCall;
}


std::any RapidParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::FunctionCallContext* RapidParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 80, RapidParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(RapidParser::IDENTIFIER);
    setState(578);
    match(RapidParser::T__0);
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18023194604608002) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 8577) != 0)) {
      setState(579);
      argumentList();
    }
    setState(582);
    match(RapidParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableReferenceContext ------------------------------------------------------------------

RapidParser::VariableReferenceContext::VariableReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RapidParser::VariableReferenceContext::IDENTIFIER() {
  return getTokens(RapidParser::IDENTIFIER);
}

tree::TerminalNode* RapidParser::VariableReferenceContext::IDENTIFIER(size_t i) {
  return getToken(RapidParser::IDENTIFIER, i);
}

std::vector<RapidParser::ExpressionContext *> RapidParser::VariableReferenceContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::VariableReferenceContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}


size_t RapidParser::VariableReferenceContext::getRuleIndex() const {
  return RapidParser::RuleVariableReference;
}


std::any RapidParser::VariableReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitVariableReference(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::VariableReferenceContext* RapidParser::variableReference() {
  VariableReferenceContext *_localctx = _tracker.createInstance<VariableReferenceContext>(_ctx, getState());
  enterRule(_localctx, 82, RapidParser::RuleVariableReference);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(RapidParser::IDENTIFIER);
    setState(589);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(585);
        match(RapidParser::T__19);
        setState(586);
        match(RapidParser::IDENTIFIER); 
      }
      setState(591);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
    setState(603);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      setState(592);
      match(RapidParser::T__5);
      setState(593);
      expression(0);
      setState(598);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RapidParser::T__1) {
        setState(594);
        match(RapidParser::T__1);
        setState(595);
        expression(0);
        setState(600);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(601);
      match(RapidParser::T__6);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AggregateContext ------------------------------------------------------------------

RapidParser::AggregateContext::AggregateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RapidParser::ExpressionContext *> RapidParser::AggregateContext::expression() {
  return getRuleContexts<RapidParser::ExpressionContext>();
}

RapidParser::ExpressionContext* RapidParser::AggregateContext::expression(size_t i) {
  return getRuleContext<RapidParser::ExpressionContext>(i);
}


size_t RapidParser::AggregateContext::getRuleIndex() const {
  return RapidParser::RuleAggregate;
}


std::any RapidParser::AggregateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitAggregate(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::AggregateContext* RapidParser::aggregate() {
  AggregateContext *_localctx = _tracker.createInstance<AggregateContext>(_ctx, getState());
  enterRule(_localctx, 84, RapidParser::RuleAggregate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    match(RapidParser::T__20);
    setState(606);
    expression(0);
    setState(611);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RapidParser::T__1) {
      setState(607);
      match(RapidParser::T__1);
      setState(608);
      expression(0);
      setState(613);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(614);
    match(RapidParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

RapidParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RapidParser::LiteralContext::NUM() {
  return getToken(RapidParser::NUM, 0);
}

tree::TerminalNode* RapidParser::LiteralContext::STRING() {
  return getToken(RapidParser::STRING, 0);
}

tree::TerminalNode* RapidParser::LiteralContext::TRUE() {
  return getToken(RapidParser::TRUE, 0);
}

tree::TerminalNode* RapidParser::LiteralContext::FALSE() {
  return getToken(RapidParser::FALSE, 0);
}


size_t RapidParser::LiteralContext::getRuleIndex() const {
  return RapidParser::RuleLiteral;
}


std::any RapidParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RapidVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

RapidParser::LiteralContext* RapidParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 86, RapidParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    _la = _input->LA(1);
    if (!(((((_la - 43) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 43)) & 25836912641) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool RapidParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 39: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RapidParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void RapidParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rapidParserInitialize();
#else
  ::antlr4::internal::call_once(rapidParserOnceFlag, rapidParserInitialize);
#endif
}
