
// Generated from ./TLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"


	#ifndef _WIN32
	#pragma GCC diagnostic ignored "-Wunused-parameter"
	#endif


namespace verbum {


class  TLexer : public antlr4::Lexer {
public:
  enum {
    Use = 1, Var = 2, Bool = 3, End = 4, Attr = 5, TwoPoint = 6, Separator = 7, 
    OpenArIndex = 8, CloseArIndex = 9, OpenBlock = 10, CloseBlock = 11, 
    Identifier = 12, IDPrefix = 13, TypeSpec = 14, Integer = 15, Float = 16, 
    String = 17, Whitespace = 18, Newline = 19, Words = 20, BlockComment = 21, 
    LineComment = 22
  };

  explicit TLexer(antlr4::CharStream *input);
  ~TLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace verbum
