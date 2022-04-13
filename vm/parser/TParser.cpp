
// Generated from ./TParser.g4 by ANTLR 4.9.2


#include "TParserListener.h"
#include "TParserVisitor.h"

#include "TParser.h"


  #ifndef _WIN32
  #pragma GCC diagnostic ignored "-Wunused-parameter"
  #endif


using namespace antlrcpp;
using namespace verbum;
using namespace antlr4;

TParser::TParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TParser::~TParser() {
  delete _interpreter;
}

std::string TParser::getGrammarFileName() const {
  return "TParser.g4";
}

const std::vector<std::string>& TParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MainContext ------------------------------------------------------------------

TParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FileContentContext* TParser::MainContext::fileContent() {
  return getRuleContext<TParser::FileContentContext>(0);
}

tree::TerminalNode* TParser::MainContext::EOF() {
  return getToken(TParser::EOF, 0);
}


size_t TParser::MainContext::getRuleIndex() const {
  return TParser::RuleMain;
}

void TParser::MainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMain(this);
}

void TParser::MainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMain(this);
}


antlrcpp::Any TParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

TParser::MainContext* TParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, TParser::RuleMain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    fileContent();
    setState(227);
    match(TParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileContentContext ------------------------------------------------------------------

TParser::FileContentContext::FileContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SentenceContext* TParser::FileContentContext::sentence() {
  return getRuleContext<TParser::SentenceContext>(0);
}

TParser::FileContentContext* TParser::FileContentContext::fileContent() {
  return getRuleContext<TParser::FileContentContext>(0);
}


size_t TParser::FileContentContext::getRuleIndex() const {
  return TParser::RuleFileContent;
}

void TParser::FileContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileContent(this);
}

void TParser::FileContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileContent(this);
}


antlrcpp::Any TParser::FileContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFileContent(this);
  else
    return visitor->visitChildren(this);
}

TParser::FileContentContext* TParser::fileContent() {
  FileContentContext *_localctx = _tracker.createInstance<FileContentContext>(_ctx, getState());
  enterRule(_localctx, 2, TParser::RuleFileContent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(229);
      sentence();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(230);
      sentence();
      setState(231);
      fileContent();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

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

//----------------- SentenceContext ------------------------------------------------------------------

TParser::SentenceContext::SentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::LiveTokenContext* TParser::SentenceContext::liveToken() {
  return getRuleContext<TParser::LiveTokenContext>(0);
}

TParser::UseContext* TParser::SentenceContext::use() {
  return getRuleContext<TParser::UseContext>(0);
}

TParser::VariableContext* TParser::SentenceContext::variable() {
  return getRuleContext<TParser::VariableContext>(0);
}

TParser::CallingFunctionContext* TParser::SentenceContext::callingFunction() {
  return getRuleContext<TParser::CallingFunctionContext>(0);
}

TParser::ConditionalExpressionContext* TParser::SentenceContext::conditionalExpression() {
  return getRuleContext<TParser::ConditionalExpressionContext>(0);
}

TParser::LoopContext* TParser::SentenceContext::loop() {
  return getRuleContext<TParser::LoopContext>(0);
}

TParser::FunctionsContext* TParser::SentenceContext::functions() {
  return getRuleContext<TParser::FunctionsContext>(0);
}

TParser::RetContext* TParser::SentenceContext::ret() {
  return getRuleContext<TParser::RetContext>(0);
}

TParser::OopGeneralContext* TParser::SentenceContext::oopGeneral() {
  return getRuleContext<TParser::OopGeneralContext>(0);
}

TParser::AnonymousClassCallContext* TParser::SentenceContext::anonymousClassCall() {
  return getRuleContext<TParser::AnonymousClassCallContext>(0);
}


size_t TParser::SentenceContext::getRuleIndex() const {
  return TParser::RuleSentence;
}

void TParser::SentenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSentence(this);
}

void TParser::SentenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSentence(this);
}


antlrcpp::Any TParser::SentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitSentence(this);
  else
    return visitor->visitChildren(this);
}

TParser::SentenceContext* TParser::sentence() {
  SentenceContext *_localctx = _tracker.createInstance<SentenceContext>(_ctx, getState());
  enterRule(_localctx, 4, TParser::RuleSentence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(236);
      liveToken();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(237);
      use();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(238);
      variable();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(239);
      callingFunction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(240);
      conditionalExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(241);
      loop();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(242);
      functions();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(243);
      ret();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(244);
      oopGeneral();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(245);
      anonymousClassCall();
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

//----------------- LiveTokenContext ------------------------------------------------------------------

TParser::LiveTokenContext::LiveTokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LiveTokenContext::Newline() {
  return getToken(TParser::Newline, 0);
}

TParser::BreakForContext* TParser::LiveTokenContext::breakFor() {
  return getRuleContext<TParser::BreakForContext>(0);
}

TParser::NextForContext* TParser::LiveTokenContext::nextFor() {
  return getRuleContext<TParser::NextForContext>(0);
}


size_t TParser::LiveTokenContext::getRuleIndex() const {
  return TParser::RuleLiveToken;
}

void TParser::LiveTokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiveToken(this);
}

void TParser::LiveTokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiveToken(this);
}


antlrcpp::Any TParser::LiveTokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLiveToken(this);
  else
    return visitor->visitChildren(this);
}

TParser::LiveTokenContext* TParser::liveToken() {
  LiveTokenContext *_localctx = _tracker.createInstance<LiveTokenContext>(_ctx, getState());
  enterRule(_localctx, 6, TParser::RuleLiveToken);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::Newline: {
        enterOuterAlt(_localctx, 1);
        setState(248);
        match(TParser::Newline);
        break;
      }

      case TParser::Break: {
        enterOuterAlt(_localctx, 2);
        setState(249);
        breakFor();
        break;
      }

      case TParser::Next: {
        enterOuterAlt(_localctx, 3);
        setState(250);
        nextFor();
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

//----------------- BreakForContext ------------------------------------------------------------------

TParser::BreakForContext::BreakForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::BreakForContext::Break() {
  return getToken(TParser::Break, 0);
}

tree::TerminalNode* TParser::BreakForContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::BreakForContext::getRuleIndex() const {
  return TParser::RuleBreakFor;
}

void TParser::BreakForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakFor(this);
}

void TParser::BreakForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakFor(this);
}


antlrcpp::Any TParser::BreakForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitBreakFor(this);
  else
    return visitor->visitChildren(this);
}

TParser::BreakForContext* TParser::breakFor() {
  BreakForContext *_localctx = _tracker.createInstance<BreakForContext>(_ctx, getState());
  enterRule(_localctx, 8, TParser::RuleBreakFor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(TParser::Break);
    setState(254);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NextForContext ------------------------------------------------------------------

TParser::NextForContext::NextForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::NextForContext::Next() {
  return getToken(TParser::Next, 0);
}

tree::TerminalNode* TParser::NextForContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::NextForContext::getRuleIndex() const {
  return TParser::RuleNextFor;
}

void TParser::NextForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNextFor(this);
}

void TParser::NextForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNextFor(this);
}


antlrcpp::Any TParser::NextForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitNextFor(this);
  else
    return visitor->visitChildren(this);
}

TParser::NextForContext* TParser::nextFor() {
  NextForContext *_localctx = _tracker.createInstance<NextForContext>(_ctx, getState());
  enterRule(_localctx, 10, TParser::RuleNextFor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(TParser::Next);
    setState(257);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseContext ------------------------------------------------------------------

TParser::UseContext::UseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::UseContext::Use() {
  return getToken(TParser::Use, 0);
}

TParser::UseValueContext* TParser::UseContext::useValue() {
  return getRuleContext<TParser::UseValueContext>(0);
}

tree::TerminalNode* TParser::UseContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::UseContext::getRuleIndex() const {
  return TParser::RuleUse;
}

void TParser::UseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse(this);
}

void TParser::UseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse(this);
}


antlrcpp::Any TParser::UseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitUse(this);
  else
    return visitor->visitChildren(this);
}

TParser::UseContext* TParser::use() {
  UseContext *_localctx = _tracker.createInstance<UseContext>(_ctx, getState());
  enterRule(_localctx, 12, TParser::RuleUse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(TParser::Use);
    setState(260);
    useValue();
    setState(261);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseValueContext ------------------------------------------------------------------

TParser::UseValueContext::UseValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::UseStringContext* TParser::UseValueContext::useString() {
  return getRuleContext<TParser::UseStringContext>(0);
}

tree::TerminalNode* TParser::UseValueContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::UseValueContext* TParser::UseValueContext::useValue() {
  return getRuleContext<TParser::UseValueContext>(0);
}


size_t TParser::UseValueContext::getRuleIndex() const {
  return TParser::RuleUseValue;
}

void TParser::UseValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseValue(this);
}

void TParser::UseValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseValue(this);
}


antlrcpp::Any TParser::UseValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitUseValue(this);
  else
    return visitor->visitChildren(this);
}

TParser::UseValueContext* TParser::useValue() {
  UseValueContext *_localctx = _tracker.createInstance<UseValueContext>(_ctx, getState());
  enterRule(_localctx, 14, TParser::RuleUseValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(263);
      useString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(264);
      useString();
      setState(265);
      match(TParser::Separator);
      setState(266);
      useValue();
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

//----------------- UseStringContext ------------------------------------------------------------------

TParser::UseStringContext::UseStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::UseStringContext::String() {
  return getToken(TParser::String, 0);
}


size_t TParser::UseStringContext::getRuleIndex() const {
  return TParser::RuleUseString;
}

void TParser::UseStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseString(this);
}

void TParser::UseStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseString(this);
}


antlrcpp::Any TParser::UseStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitUseString(this);
  else
    return visitor->visitChildren(this);
}

TParser::UseStringContext* TParser::useString() {
  UseStringContext *_localctx = _tracker.createInstance<UseStringContext>(_ctx, getState());
  enterRule(_localctx, 16, TParser::RuleUseString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(TParser::String);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

TParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VariableModesContext* TParser::VariableContext::variableModes() {
  return getRuleContext<TParser::VariableModesContext>(0);
}


size_t TParser::VariableContext::getRuleIndex() const {
  return TParser::RuleVariable;
}

void TParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void TParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any TParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableContext* TParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 18, TParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    variableModes();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModesContext ------------------------------------------------------------------

TParser::VariableModesContext::VariableModesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::VariableModesContext::Var() {
  return getToken(TParser::Var, 0);
}

TParser::VariableMembersContext* TParser::VariableModesContext::variableMembers() {
  return getRuleContext<TParser::VariableMembersContext>(0);
}

tree::TerminalNode* TParser::VariableModesContext::End() {
  return getToken(TParser::End, 0);
}

TParser::MethodVisibilityContext* TParser::VariableModesContext::methodVisibility() {
  return getRuleContext<TParser::MethodVisibilityContext>(0);
}

TParser::VariableMultipleAssignmentsContext* TParser::VariableModesContext::variableMultipleAssignments() {
  return getRuleContext<TParser::VariableMultipleAssignmentsContext>(0);
}


size_t TParser::VariableModesContext::getRuleIndex() const {
  return TParser::RuleVariableModes;
}

void TParser::VariableModesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableModes(this);
}

void TParser::VariableModesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableModes(this);
}


antlrcpp::Any TParser::VariableModesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableModes(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableModesContext* TParser::variableModes() {
  VariableModesContext *_localctx = _tracker.createInstance<VariableModesContext>(_ctx, getState());
  enterRule(_localctx, 20, TParser::RuleVariableModes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(289);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(274);
      match(TParser::Var);
      setState(275);
      variableMembers();
      setState(276);
      match(TParser::End);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(278);
      methodVisibility();
      setState(279);
      match(TParser::Var);
      setState(280);
      variableMembers();
      setState(281);
      match(TParser::End);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(283);
      variableMembers();
      setState(284);
      match(TParser::End);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(286);
      variableMultipleAssignments();
      setState(287);
      match(TParser::End);
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

//----------------- VariableModesBkpContext ------------------------------------------------------------------

TParser::VariableModesBkpContext::VariableModesBkpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::VariableModesBkpContext::Var() {
  return getToken(TParser::Var, 0);
}

TParser::VariableMembersContext* TParser::VariableModesBkpContext::variableMembers() {
  return getRuleContext<TParser::VariableMembersContext>(0);
}

tree::TerminalNode* TParser::VariableModesBkpContext::End() {
  return getToken(TParser::End, 0);
}

TParser::MethodPermContext* TParser::VariableModesBkpContext::methodPerm() {
  return getRuleContext<TParser::MethodPermContext>(0);
}

tree::TerminalNode* TParser::VariableModesBkpContext::Static() {
  return getToken(TParser::Static, 0);
}

tree::TerminalNode* TParser::VariableModesBkpContext::Final() {
  return getToken(TParser::Final, 0);
}


size_t TParser::VariableModesBkpContext::getRuleIndex() const {
  return TParser::RuleVariableModesBkp;
}

void TParser::VariableModesBkpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableModesBkp(this);
}

void TParser::VariableModesBkpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableModesBkp(this);
}


antlrcpp::Any TParser::VariableModesBkpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableModesBkp(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableModesBkpContext* TParser::variableModesBkp() {
  VariableModesBkpContext *_localctx = _tracker.createInstance<VariableModesBkpContext>(_ctx, getState());
  enterRule(_localctx, 22, TParser::RuleVariableModesBkp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(338);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(291);
      match(TParser::Var);
      setState(292);
      variableMembers();
      setState(293);
      match(TParser::End);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(295);
      methodPerm();
      setState(296);
      match(TParser::Var);
      setState(297);
      variableMembers();
      setState(298);
      match(TParser::End);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(300);
      match(TParser::Static);
      setState(301);
      match(TParser::Var);
      setState(302);
      variableMembers();
      setState(303);
      match(TParser::End);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(305);
      methodPerm();
      setState(306);
      match(TParser::Static);
      setState(307);
      match(TParser::Var);
      setState(308);
      variableMembers();
      setState(309);
      match(TParser::End);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(311);
      match(TParser::Final);
      setState(312);
      methodPerm();
      setState(313);
      match(TParser::Static);
      setState(314);
      match(TParser::Var);
      setState(315);
      variableMembers();
      setState(316);
      match(TParser::End);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(318);
      match(TParser::Final);
      setState(319);
      methodPerm();
      setState(320);
      match(TParser::Var);
      setState(321);
      variableMembers();
      setState(322);
      match(TParser::End);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(324);
      match(TParser::Final);
      setState(325);
      match(TParser::Var);
      setState(326);
      variableMembers();
      setState(327);
      match(TParser::End);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(329);
      match(TParser::Final);
      setState(330);
      match(TParser::Static);
      setState(331);
      match(TParser::Var);
      setState(332);
      variableMembers();
      setState(333);
      match(TParser::End);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(335);
      variableMembers();
      setState(336);
      match(TParser::End);
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

//----------------- VariableMultipleAssignmentsContext ------------------------------------------------------------------

TParser::VariableMultipleAssignmentsContext::VariableMultipleAssignmentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VariableMultipleAssignmentsExprContext* TParser::VariableMultipleAssignmentsContext::variableMultipleAssignmentsExpr() {
  return getRuleContext<TParser::VariableMultipleAssignmentsExprContext>(0);
}


size_t TParser::VariableMultipleAssignmentsContext::getRuleIndex() const {
  return TParser::RuleVariableMultipleAssignments;
}

void TParser::VariableMultipleAssignmentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableMultipleAssignments(this);
}

void TParser::VariableMultipleAssignmentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableMultipleAssignments(this);
}


antlrcpp::Any TParser::VariableMultipleAssignmentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableMultipleAssignments(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableMultipleAssignmentsContext* TParser::variableMultipleAssignments() {
  VariableMultipleAssignmentsContext *_localctx = _tracker.createInstance<VariableMultipleAssignmentsContext>(_ctx, getState());
  enterRule(_localctx, 24, TParser::RuleVariableMultipleAssignments);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    variableMultipleAssignmentsExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableMultipleAssignmentsExprContext ------------------------------------------------------------------

TParser::VariableMultipleAssignmentsExprContext::VariableMultipleAssignmentsExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VariableDefinitionMAContext* TParser::VariableMultipleAssignmentsExprContext::variableDefinitionMA() {
  return getRuleContext<TParser::VariableDefinitionMAContext>(0);
}

tree::TerminalNode* TParser::VariableMultipleAssignmentsExprContext::Attr() {
  return getToken(TParser::Attr, 0);
}

TParser::VariableMultipleAssignmentsExprContext* TParser::VariableMultipleAssignmentsExprContext::variableMultipleAssignmentsExpr() {
  return getRuleContext<TParser::VariableMultipleAssignmentsExprContext>(0);
}


size_t TParser::VariableMultipleAssignmentsExprContext::getRuleIndex() const {
  return TParser::RuleVariableMultipleAssignmentsExpr;
}

void TParser::VariableMultipleAssignmentsExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableMultipleAssignmentsExpr(this);
}

void TParser::VariableMultipleAssignmentsExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableMultipleAssignmentsExpr(this);
}


antlrcpp::Any TParser::VariableMultipleAssignmentsExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableMultipleAssignmentsExpr(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableMultipleAssignmentsExprContext* TParser::variableMultipleAssignmentsExpr() {
  VariableMultipleAssignmentsExprContext *_localctx = _tracker.createInstance<VariableMultipleAssignmentsExprContext>(_ctx, getState());
  enterRule(_localctx, 26, TParser::RuleVariableMultipleAssignmentsExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(347);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(342);
      variableDefinitionMA();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(343);
      variableDefinitionMA();
      setState(344);
      match(TParser::Attr);
      setState(345);
      variableMultipleAssignmentsExpr();
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

//----------------- VariableDefinitionMAContext ------------------------------------------------------------------

TParser::VariableDefinitionMAContext::VariableDefinitionMAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VariableDefinitionContext* TParser::VariableDefinitionMAContext::variableDefinition() {
  return getRuleContext<TParser::VariableDefinitionContext>(0);
}


size_t TParser::VariableDefinitionMAContext::getRuleIndex() const {
  return TParser::RuleVariableDefinitionMA;
}

void TParser::VariableDefinitionMAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDefinitionMA(this);
}

void TParser::VariableDefinitionMAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDefinitionMA(this);
}


antlrcpp::Any TParser::VariableDefinitionMAContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableDefinitionMA(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableDefinitionMAContext* TParser::variableDefinitionMA() {
  VariableDefinitionMAContext *_localctx = _tracker.createInstance<VariableDefinitionMAContext>(_ctx, getState());
  enterRule(_localctx, 28, TParser::RuleVariableDefinitionMA);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    variableDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableMembersContext ------------------------------------------------------------------

TParser::VariableMembersContext::VariableMembersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VariableDefinitionContext* TParser::VariableMembersContext::variableDefinition() {
  return getRuleContext<TParser::VariableDefinitionContext>(0);
}

tree::TerminalNode* TParser::VariableMembersContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::VariableMembersContext* TParser::VariableMembersContext::variableMembers() {
  return getRuleContext<TParser::VariableMembersContext>(0);
}


size_t TParser::VariableMembersContext::getRuleIndex() const {
  return TParser::RuleVariableMembers;
}

void TParser::VariableMembersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableMembers(this);
}

void TParser::VariableMembersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableMembers(this);
}


antlrcpp::Any TParser::VariableMembersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableMembers(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableMembersContext* TParser::variableMembers() {
  VariableMembersContext *_localctx = _tracker.createInstance<VariableMembersContext>(_ctx, getState());
  enterRule(_localctx, 30, TParser::RuleVariableMembers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(351);
      variableDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(352);
      variableDefinition();
      setState(353);
      match(TParser::Separator);
      setState(354);
      variableMembers();
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

//----------------- VariableDefinitionContext ------------------------------------------------------------------

TParser::VariableDefinitionContext::VariableDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::VariableDefinitionContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

TParser::VariableDefinitionGeneralContext* TParser::VariableDefinitionContext::variableDefinitionGeneral() {
  return getRuleContext<TParser::VariableDefinitionGeneralContext>(0);
}

TParser::ObjIdentifierAContext* TParser::VariableDefinitionContext::objIdentifierA() {
  return getRuleContext<TParser::ObjIdentifierAContext>(0);
}

tree::TerminalNode* TParser::VariableDefinitionContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::ObjIdentifierBContext* TParser::VariableDefinitionContext::objIdentifierB() {
  return getRuleContext<TParser::ObjIdentifierBContext>(0);
}

tree::TerminalNode* TParser::VariableDefinitionContext::TwoTwoPoint() {
  return getToken(TParser::TwoTwoPoint, 0);
}

TParser::ArrayAccessElementsContext* TParser::VariableDefinitionContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}


size_t TParser::VariableDefinitionContext::getRuleIndex() const {
  return TParser::RuleVariableDefinition;
}

void TParser::VariableDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDefinition(this);
}

void TParser::VariableDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDefinition(this);
}


antlrcpp::Any TParser::VariableDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableDefinition(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableDefinitionContext* TParser::variableDefinition() {
  VariableDefinitionContext *_localctx = _tracker.createInstance<VariableDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 32, TParser::RuleVariableDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(373);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(358);
      match(TParser::Identifier);
      setState(359);
      variableDefinitionGeneral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(360);
      objIdentifierA();
      setState(361);
      match(TParser::Point);
      setState(362);
      objIdentifierB();
      setState(363);
      variableDefinitionGeneral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(365);
      objIdentifierA();
      setState(366);
      match(TParser::TwoTwoPoint);
      setState(367);
      objIdentifierB();
      setState(368);
      variableDefinitionGeneral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(370);
      arrayAccessElements();
      setState(371);
      variableDefinitionGeneral();
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

//----------------- VariableDefinitionGeneralContext ------------------------------------------------------------------

TParser::VariableDefinitionGeneralContext::VariableDefinitionGeneralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::GeneralValueContext* TParser::VariableDefinitionGeneralContext::generalValue() {
  return getRuleContext<TParser::GeneralValueContext>(0);
}

tree::TerminalNode* TParser::VariableDefinitionGeneralContext::Attr() {
  return getToken(TParser::Attr, 0);
}

tree::TerminalNode* TParser::VariableDefinitionGeneralContext::AssignmentOperator() {
  return getToken(TParser::AssignmentOperator, 0);
}

tree::TerminalNode* TParser::VariableDefinitionGeneralContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}

tree::TerminalNode* TParser::VariableDefinitionGeneralContext::New() {
  return getToken(TParser::New, 0);
}


size_t TParser::VariableDefinitionGeneralContext::getRuleIndex() const {
  return TParser::RuleVariableDefinitionGeneral;
}

void TParser::VariableDefinitionGeneralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDefinitionGeneral(this);
}

void TParser::VariableDefinitionGeneralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDefinitionGeneral(this);
}


antlrcpp::Any TParser::VariableDefinitionGeneralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVariableDefinitionGeneral(this);
  else
    return visitor->visitChildren(this);
}

TParser::VariableDefinitionGeneralContext* TParser::variableDefinitionGeneral() {
  VariableDefinitionGeneralContext *_localctx = _tracker.createInstance<VariableDefinitionGeneralContext>(_ctx, getState());
  enterRule(_localctx, 34, TParser::RuleVariableDefinitionGeneral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(387);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(375);
      _la = _input->LA(1);
      if (!(_la == TParser::Attr

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(376);
      generalValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(377);
      match(TParser::TypeSpec);
      setState(378);
      _la = _input->LA(1);
      if (!(_la == TParser::Attr

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(379);
      generalValue();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(380);
      _la = _input->LA(1);
      if (!(_la == TParser::Attr

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(381);
      match(TParser::New);
      setState(382);
      generalValue();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(383);
      match(TParser::TypeSpec);
      setState(384);
      _la = _input->LA(1);
      if (!(_la == TParser::Attr

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(385);
      match(TParser::New);
      setState(386);
      generalValue();
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

//----------------- IndexArrayContext ------------------------------------------------------------------

TParser::IndexArrayContext::IndexArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::IndexArrayContext::OpenArIndex() {
  return getToken(TParser::OpenArIndex, 0);
}

tree::TerminalNode* TParser::IndexArrayContext::CloseArIndex() {
  return getToken(TParser::CloseArIndex, 0);
}

TParser::IndexArrayElementsContext* TParser::IndexArrayContext::indexArrayElements() {
  return getRuleContext<TParser::IndexArrayElementsContext>(0);
}


size_t TParser::IndexArrayContext::getRuleIndex() const {
  return TParser::RuleIndexArray;
}

void TParser::IndexArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexArray(this);
}

void TParser::IndexArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexArray(this);
}


antlrcpp::Any TParser::IndexArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIndexArray(this);
  else
    return visitor->visitChildren(this);
}

TParser::IndexArrayContext* TParser::indexArray() {
  IndexArrayContext *_localctx = _tracker.createInstance<IndexArrayContext>(_ctx, getState());
  enterRule(_localctx, 36, TParser::RuleIndexArray);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(395);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(389);
      match(TParser::OpenArIndex);
      setState(390);
      match(TParser::CloseArIndex);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(391);
      match(TParser::OpenArIndex);
      setState(392);
      indexArrayElements();
      setState(393);
      match(TParser::CloseArIndex);
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

//----------------- IndexArrayElementsContext ------------------------------------------------------------------

TParser::IndexArrayElementsContext::IndexArrayElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::GeneralValueContext* TParser::IndexArrayElementsContext::generalValue() {
  return getRuleContext<TParser::GeneralValueContext>(0);
}

tree::TerminalNode* TParser::IndexArrayElementsContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::IndexArrayElementsContext* TParser::IndexArrayElementsContext::indexArrayElements() {
  return getRuleContext<TParser::IndexArrayElementsContext>(0);
}


size_t TParser::IndexArrayElementsContext::getRuleIndex() const {
  return TParser::RuleIndexArrayElements;
}

void TParser::IndexArrayElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexArrayElements(this);
}

void TParser::IndexArrayElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexArrayElements(this);
}


antlrcpp::Any TParser::IndexArrayElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIndexArrayElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::IndexArrayElementsContext* TParser::indexArrayElements() {
  IndexArrayElementsContext *_localctx = _tracker.createInstance<IndexArrayElementsContext>(_ctx, getState());
  enterRule(_localctx, 38, TParser::RuleIndexArrayElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(397);
      generalValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(398);
      generalValue();
      setState(399);
      match(TParser::Separator);
      setState(400);
      indexArrayElements();
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

//----------------- AssociativeArrayContext ------------------------------------------------------------------

TParser::AssociativeArrayContext::AssociativeArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::AssociativeArrayContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::AssociativeArrayContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::AssociativeArrayElementsContext* TParser::AssociativeArrayContext::associativeArrayElements() {
  return getRuleContext<TParser::AssociativeArrayElementsContext>(0);
}


size_t TParser::AssociativeArrayContext::getRuleIndex() const {
  return TParser::RuleAssociativeArray;
}

void TParser::AssociativeArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociativeArray(this);
}

void TParser::AssociativeArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociativeArray(this);
}


antlrcpp::Any TParser::AssociativeArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAssociativeArray(this);
  else
    return visitor->visitChildren(this);
}

TParser::AssociativeArrayContext* TParser::associativeArray() {
  AssociativeArrayContext *_localctx = _tracker.createInstance<AssociativeArrayContext>(_ctx, getState());
  enterRule(_localctx, 40, TParser::RuleAssociativeArray);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(404);
      match(TParser::OpenBlock);
      setState(405);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(406);
      match(TParser::OpenBlock);
      setState(407);
      associativeArrayElements();
      setState(408);
      match(TParser::CloseBlock);
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

//----------------- AssociativeArrayElementsContext ------------------------------------------------------------------

TParser::AssociativeArrayElementsContext::AssociativeArrayElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::AssociativeArrayElementsContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::AssociativeArrayElementsContext::TwoPoint() {
  return getToken(TParser::TwoPoint, 0);
}

TParser::GeneralValueContext* TParser::AssociativeArrayElementsContext::generalValue() {
  return getRuleContext<TParser::GeneralValueContext>(0);
}

tree::TerminalNode* TParser::AssociativeArrayElementsContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::AssociativeArrayElementsContext* TParser::AssociativeArrayElementsContext::associativeArrayElements() {
  return getRuleContext<TParser::AssociativeArrayElementsContext>(0);
}


size_t TParser::AssociativeArrayElementsContext::getRuleIndex() const {
  return TParser::RuleAssociativeArrayElements;
}

void TParser::AssociativeArrayElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociativeArrayElements(this);
}

void TParser::AssociativeArrayElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociativeArrayElements(this);
}


antlrcpp::Any TParser::AssociativeArrayElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAssociativeArrayElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::AssociativeArrayElementsContext* TParser::associativeArrayElements() {
  AssociativeArrayElementsContext *_localctx = _tracker.createInstance<AssociativeArrayElementsContext>(_ctx, getState());
  enterRule(_localctx, 42, TParser::RuleAssociativeArrayElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(412);
      match(TParser::Identifier);
      setState(413);
      match(TParser::TwoPoint);
      setState(414);
      generalValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(415);
      match(TParser::Identifier);
      setState(416);
      match(TParser::TwoPoint);
      setState(417);
      generalValue();
      setState(418);
      match(TParser::Separator);
      setState(419);
      associativeArrayElements();
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

//----------------- OperationBlockContext ------------------------------------------------------------------

TParser::OperationBlockContext::OperationBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::OperationBlockContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

TParser::OperationElementsContext* TParser::OperationBlockContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}

tree::TerminalNode* TParser::OperationBlockContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}


size_t TParser::OperationBlockContext::getRuleIndex() const {
  return TParser::RuleOperationBlock;
}

void TParser::OperationBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationBlock(this);
}

void TParser::OperationBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationBlock(this);
}


antlrcpp::Any TParser::OperationBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitOperationBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::OperationBlockContext* TParser::operationBlock() {
  OperationBlockContext *_localctx = _tracker.createInstance<OperationBlockContext>(_ctx, getState());
  enterRule(_localctx, 44, TParser::RuleOperationBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(TParser::OpenOp);
    setState(424);
    operationElements();
    setState(425);
    match(TParser::CloseOp);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationElementsContext ------------------------------------------------------------------

TParser::OperationElementsContext::OperationElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::OperationValueContext* TParser::OperationElementsContext::operationValue() {
  return getRuleContext<TParser::OperationValueContext>(0);
}

TParser::OperationElementsContext* TParser::OperationElementsContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}


size_t TParser::OperationElementsContext::getRuleIndex() const {
  return TParser::RuleOperationElements;
}

void TParser::OperationElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationElements(this);
}

void TParser::OperationElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationElements(this);
}


antlrcpp::Any TParser::OperationElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitOperationElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::OperationElementsContext* TParser::operationElements() {
  OperationElementsContext *_localctx = _tracker.createInstance<OperationElementsContext>(_ctx, getState());
  enterRule(_localctx, 46, TParser::RuleOperationElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(431);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      operationValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(428);
      operationValue();
      setState(429);
      operationElements();
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

//----------------- OperationValueContext ------------------------------------------------------------------

TParser::OperationValueContext::OperationValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCallContext* TParser::OperationValueContext::functionCall() {
  return getRuleContext<TParser::FunctionCallContext>(0);
}

tree::TerminalNode* TParser::OperationValueContext::ArithmeticOperator() {
  return getToken(TParser::ArithmeticOperator, 0);
}

tree::TerminalNode* TParser::OperationValueContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}

tree::TerminalNode* TParser::OperationValueContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

TParser::FirstIncDecContext* TParser::OperationValueContext::firstIncDec() {
  return getRuleContext<TParser::FirstIncDecContext>(0);
}

TParser::LastIncDecContext* TParser::OperationValueContext::lastIncDec() {
  return getRuleContext<TParser::LastIncDecContext>(0);
}

tree::TerminalNode* TParser::OperationValueContext::Integer() {
  return getToken(TParser::Integer, 0);
}

tree::TerminalNode* TParser::OperationValueContext::Float() {
  return getToken(TParser::Float, 0);
}

TParser::OperationBlockContext* TParser::OperationValueContext::operationBlock() {
  return getRuleContext<TParser::OperationBlockContext>(0);
}

TParser::ArrayAccessElementsContext* TParser::OperationValueContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}


size_t TParser::OperationValueContext::getRuleIndex() const {
  return TParser::RuleOperationValue;
}

void TParser::OperationValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationValue(this);
}

void TParser::OperationValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationValue(this);
}


antlrcpp::Any TParser::OperationValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitOperationValue(this);
  else
    return visitor->visitChildren(this);
}

TParser::OperationValueContext* TParser::operationValue() {
  OperationValueContext *_localctx = _tracker.createInstance<OperationValueContext>(_ctx, getState());
  enterRule(_localctx, 48, TParser::RuleOperationValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(521);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(433);
      functionCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(434);
      functionCall();
      setState(435);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(437);
      functionCall();
      setState(438);
      match(TParser::TypeSpec);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(440);
      functionCall();
      setState(441);
      match(TParser::TypeSpec);
      setState(442);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(444);
      match(TParser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(445);
      match(TParser::Identifier);
      setState(446);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(447);
      match(TParser::Identifier);
      setState(448);
      match(TParser::TypeSpec);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(449);
      match(TParser::Identifier);
      setState(450);
      match(TParser::TypeSpec);
      setState(451);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(452);
      firstIncDec();
      setState(453);
      match(TParser::Identifier);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(455);
      firstIncDec();
      setState(456);
      match(TParser::Identifier);
      setState(457);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(459);
      firstIncDec();
      setState(460);
      match(TParser::Identifier);
      setState(461);
      match(TParser::TypeSpec);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(463);
      firstIncDec();
      setState(464);
      match(TParser::Identifier);
      setState(465);
      match(TParser::TypeSpec);
      setState(466);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(468);
      match(TParser::Identifier);
      setState(469);
      lastIncDec();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(470);
      match(TParser::Identifier);
      setState(471);
      lastIncDec();
      setState(472);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(474);
      match(TParser::Identifier);
      setState(475);
      lastIncDec();
      setState(476);
      match(TParser::TypeSpec);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(478);
      match(TParser::Identifier);
      setState(479);
      lastIncDec();
      setState(480);
      match(TParser::TypeSpec);
      setState(481);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(483);
      match(TParser::Integer);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(484);
      match(TParser::Integer);
      setState(485);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(486);
      match(TParser::Integer);
      setState(487);
      match(TParser::TypeSpec);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(488);
      match(TParser::Integer);
      setState(489);
      match(TParser::TypeSpec);
      setState(490);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(491);
      match(TParser::Float);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(492);
      match(TParser::Float);
      setState(493);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(494);
      match(TParser::Float);
      setState(495);
      match(TParser::TypeSpec);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(496);
      match(TParser::Float);
      setState(497);
      match(TParser::TypeSpec);
      setState(498);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(499);
      operationBlock();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(500);
      operationBlock();
      setState(501);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(503);
      operationBlock();
      setState(504);
      match(TParser::TypeSpec);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(506);
      operationBlock();
      setState(507);
      match(TParser::TypeSpec);
      setState(508);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(510);
      arrayAccessElements();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(511);
      arrayAccessElements();
      setState(512);
      match(TParser::ArithmeticOperator);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(514);
      arrayAccessElements();
      setState(515);
      match(TParser::TypeSpec);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(517);
      arrayAccessElements();
      setState(518);
      match(TParser::TypeSpec);
      setState(519);
      match(TParser::ArithmeticOperator);
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

//----------------- FirstIncDecContext ------------------------------------------------------------------

TParser::FirstIncDecContext::FirstIncDecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FirstIncDecContext::IncDecOperators() {
  return getToken(TParser::IncDecOperators, 0);
}


size_t TParser::FirstIncDecContext::getRuleIndex() const {
  return TParser::RuleFirstIncDec;
}

void TParser::FirstIncDecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirstIncDec(this);
}

void TParser::FirstIncDecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirstIncDec(this);
}


antlrcpp::Any TParser::FirstIncDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFirstIncDec(this);
  else
    return visitor->visitChildren(this);
}

TParser::FirstIncDecContext* TParser::firstIncDec() {
  FirstIncDecContext *_localctx = _tracker.createInstance<FirstIncDecContext>(_ctx, getState());
  enterRule(_localctx, 50, TParser::RuleFirstIncDec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(TParser::IncDecOperators);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastIncDecContext ------------------------------------------------------------------

TParser::LastIncDecContext::LastIncDecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LastIncDecContext::IncDecOperators() {
  return getToken(TParser::IncDecOperators, 0);
}


size_t TParser::LastIncDecContext::getRuleIndex() const {
  return TParser::RuleLastIncDec;
}

void TParser::LastIncDecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastIncDec(this);
}

void TParser::LastIncDecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastIncDec(this);
}


antlrcpp::Any TParser::LastIncDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLastIncDec(this);
  else
    return visitor->visitChildren(this);
}

TParser::LastIncDecContext* TParser::lastIncDec() {
  LastIncDecContext *_localctx = _tracker.createInstance<LastIncDecContext>(_ctx, getState());
  enterRule(_localctx, 52, TParser::RuleLastIncDec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(TParser::IncDecOperators);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallingFunctionContext ------------------------------------------------------------------

TParser::CallingFunctionContext::CallingFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCallContext* TParser::CallingFunctionContext::functionCall() {
  return getRuleContext<TParser::FunctionCallContext>(0);
}

tree::TerminalNode* TParser::CallingFunctionContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::CallingFunctionContext::getRuleIndex() const {
  return TParser::RuleCallingFunction;
}

void TParser::CallingFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallingFunction(this);
}

void TParser::CallingFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallingFunction(this);
}


antlrcpp::Any TParser::CallingFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitCallingFunction(this);
  else
    return visitor->visitChildren(this);
}

TParser::CallingFunctionContext* TParser::callingFunction() {
  CallingFunctionContext *_localctx = _tracker.createInstance<CallingFunctionContext>(_ctx, getState());
  enterRule(_localctx, 54, TParser::RuleCallingFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(527);
    functionCall();
    setState(528);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

TParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FunctionCallContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

TParser::FunctionCallParamContext* TParser::FunctionCallContext::functionCallParam() {
  return getRuleContext<TParser::FunctionCallParamContext>(0);
}

tree::TerminalNode* TParser::FunctionCallContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::IdentifierBContext* TParser::FunctionCallContext::identifierB() {
  return getRuleContext<TParser::IdentifierBContext>(0);
}

tree::TerminalNode* TParser::FunctionCallContext::TwoTwoPoint() {
  return getToken(TParser::TwoTwoPoint, 0);
}

TParser::MethodCascadingModesContext* TParser::FunctionCallContext::methodCascadingModes() {
  return getRuleContext<TParser::MethodCascadingModesContext>(0);
}

TParser::ArrayAccessElementsContext* TParser::FunctionCallContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}

TParser::FunctionCallParamACContext* TParser::FunctionCallContext::functionCallParamAC() {
  return getRuleContext<TParser::FunctionCallParamACContext>(0);
}


size_t TParser::FunctionCallContext::getRuleIndex() const {
  return TParser::RuleFunctionCall;
}

void TParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void TParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any TParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallContext* TParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 56, TParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(546);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(530);
      match(TParser::Identifier);
      setState(531);
      functionCallParam();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(532);
      match(TParser::Identifier);
      setState(533);
      match(TParser::Point);
      setState(534);
      identifierB();
      setState(535);
      functionCallParam();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(537);
      match(TParser::Identifier);
      setState(538);
      match(TParser::TwoTwoPoint);
      setState(539);
      identifierB();
      setState(540);
      functionCallParam();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(542);
      methodCascadingModes();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(543);
      arrayAccessElements();
      setState(544);
      functionCallParamAC();
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

//----------------- FunctionCallParamACContext ------------------------------------------------------------------

TParser::FunctionCallParamACContext::FunctionCallParamACContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCallParamContext* TParser::FunctionCallParamACContext::functionCallParam() {
  return getRuleContext<TParser::FunctionCallParamContext>(0);
}


size_t TParser::FunctionCallParamACContext::getRuleIndex() const {
  return TParser::RuleFunctionCallParamAC;
}

void TParser::FunctionCallParamACContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallParamAC(this);
}

void TParser::FunctionCallParamACContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallParamAC(this);
}


antlrcpp::Any TParser::FunctionCallParamACContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallParamAC(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallParamACContext* TParser::functionCallParamAC() {
  FunctionCallParamACContext *_localctx = _tracker.createInstance<FunctionCallParamACContext>(_ctx, getState());
  enterRule(_localctx, 58, TParser::RuleFunctionCallParamAC);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    functionCallParam();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCascadingModesContext ------------------------------------------------------------------

TParser::MethodCascadingModesContext::MethodCascadingModesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::MethodCascadingModesContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::MethodCascadingModesContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::FunctionCallCascadingContext* TParser::MethodCascadingModesContext::functionCallCascading() {
  return getRuleContext<TParser::FunctionCallCascadingContext>(0);
}


size_t TParser::MethodCascadingModesContext::getRuleIndex() const {
  return TParser::RuleMethodCascadingModes;
}

void TParser::MethodCascadingModesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCascadingModes(this);
}

void TParser::MethodCascadingModesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCascadingModes(this);
}


antlrcpp::Any TParser::MethodCascadingModesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitMethodCascadingModes(this);
  else
    return visitor->visitChildren(this);
}

TParser::MethodCascadingModesContext* TParser::methodCascadingModes() {
  MethodCascadingModesContext *_localctx = _tracker.createInstance<MethodCascadingModesContext>(_ctx, getState());
  enterRule(_localctx, 60, TParser::RuleMethodCascadingModes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    match(TParser::Identifier);
    setState(551);
    match(TParser::Point);
    setState(552);
    functionCallCascading();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallCascadingContext ------------------------------------------------------------------

TParser::FunctionCallCascadingContext::FunctionCallCascadingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCallCascadingItemContext* TParser::FunctionCallCascadingContext::functionCallCascadingItem() {
  return getRuleContext<TParser::FunctionCallCascadingItemContext>(0);
}

tree::TerminalNode* TParser::FunctionCallCascadingContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::FunctionCallCascadingContext* TParser::FunctionCallCascadingContext::functionCallCascading() {
  return getRuleContext<TParser::FunctionCallCascadingContext>(0);
}


size_t TParser::FunctionCallCascadingContext::getRuleIndex() const {
  return TParser::RuleFunctionCallCascading;
}

void TParser::FunctionCallCascadingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallCascading(this);
}

void TParser::FunctionCallCascadingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallCascading(this);
}


antlrcpp::Any TParser::FunctionCallCascadingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallCascading(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallCascadingContext* TParser::functionCallCascading() {
  FunctionCallCascadingContext *_localctx = _tracker.createInstance<FunctionCallCascadingContext>(_ctx, getState());
  enterRule(_localctx, 62, TParser::RuleFunctionCallCascading);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(559);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(554);
      functionCallCascadingItem();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(555);
      functionCallCascadingItem();
      setState(556);
      match(TParser::Point);
      setState(557);
      functionCallCascading();
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

//----------------- FunctionCallCascadingItemContext ------------------------------------------------------------------

TParser::FunctionCallCascadingItemContext::FunctionCallCascadingItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FunctionCallCascadingItemContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

TParser::FunctionCallParamContext* TParser::FunctionCallCascadingItemContext::functionCallParam() {
  return getRuleContext<TParser::FunctionCallParamContext>(0);
}


size_t TParser::FunctionCallCascadingItemContext::getRuleIndex() const {
  return TParser::RuleFunctionCallCascadingItem;
}

void TParser::FunctionCallCascadingItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallCascadingItem(this);
}

void TParser::FunctionCallCascadingItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallCascadingItem(this);
}


antlrcpp::Any TParser::FunctionCallCascadingItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallCascadingItem(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallCascadingItemContext* TParser::functionCallCascadingItem() {
  FunctionCallCascadingItemContext *_localctx = _tracker.createInstance<FunctionCallCascadingItemContext>(_ctx, getState());
  enterRule(_localctx, 64, TParser::RuleFunctionCallCascadingItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(561);
    match(TParser::Identifier);
    setState(562);
    functionCallParam();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierBContext ------------------------------------------------------------------

TParser::IdentifierBContext::IdentifierBContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::IdentifierBContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}


size_t TParser::IdentifierBContext::getRuleIndex() const {
  return TParser::RuleIdentifierB;
}

void TParser::IdentifierBContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierB(this);
}

void TParser::IdentifierBContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierB(this);
}


antlrcpp::Any TParser::IdentifierBContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierB(this);
  else
    return visitor->visitChildren(this);
}

TParser::IdentifierBContext* TParser::identifierB() {
  IdentifierBContext *_localctx = _tracker.createInstance<IdentifierBContext>(_ctx, getState());
  enterRule(_localctx, 66, TParser::RuleIdentifierB);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(TParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointSeparatorContext ------------------------------------------------------------------

TParser::PointSeparatorContext::PointSeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::PointSeparatorContext::Point() {
  return getToken(TParser::Point, 0);
}


size_t TParser::PointSeparatorContext::getRuleIndex() const {
  return TParser::RulePointSeparator;
}

void TParser::PointSeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointSeparator(this);
}

void TParser::PointSeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointSeparator(this);
}


antlrcpp::Any TParser::PointSeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitPointSeparator(this);
  else
    return visitor->visitChildren(this);
}

TParser::PointSeparatorContext* TParser::pointSeparator() {
  PointSeparatorContext *_localctx = _tracker.createInstance<PointSeparatorContext>(_ctx, getState());
  enterRule(_localctx, 68, TParser::RulePointSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    match(TParser::Point);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallParamContext ------------------------------------------------------------------

TParser::FunctionCallParamContext::FunctionCallParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FunctionCallParamContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

tree::TerminalNode* TParser::FunctionCallParamContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}

TParser::FunctionCallParamElementsContext* TParser::FunctionCallParamContext::functionCallParamElements() {
  return getRuleContext<TParser::FunctionCallParamElementsContext>(0);
}


size_t TParser::FunctionCallParamContext::getRuleIndex() const {
  return TParser::RuleFunctionCallParam;
}

void TParser::FunctionCallParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallParam(this);
}

void TParser::FunctionCallParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallParam(this);
}


antlrcpp::Any TParser::FunctionCallParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallParam(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallParamContext* TParser::functionCallParam() {
  FunctionCallParamContext *_localctx = _tracker.createInstance<FunctionCallParamContext>(_ctx, getState());
  enterRule(_localctx, 70, TParser::RuleFunctionCallParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(574);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(568);
      match(TParser::OpenOp);
      setState(569);
      match(TParser::CloseOp);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(570);
      match(TParser::OpenOp);
      setState(571);
      functionCallParamElements();
      setState(572);
      match(TParser::CloseOp);
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

//----------------- FunctionCallParamElementsContext ------------------------------------------------------------------

TParser::FunctionCallParamElementsContext::FunctionCallParamElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::GeneralValueContext* TParser::FunctionCallParamElementsContext::generalValue() {
  return getRuleContext<TParser::GeneralValueContext>(0);
}

tree::TerminalNode* TParser::FunctionCallParamElementsContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::FunctionCallParamElementsContext* TParser::FunctionCallParamElementsContext::functionCallParamElements() {
  return getRuleContext<TParser::FunctionCallParamElementsContext>(0);
}

TParser::OperationElementsContext* TParser::FunctionCallParamElementsContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}


size_t TParser::FunctionCallParamElementsContext::getRuleIndex() const {
  return TParser::RuleFunctionCallParamElements;
}

void TParser::FunctionCallParamElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallParamElements(this);
}

void TParser::FunctionCallParamElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallParamElements(this);
}


antlrcpp::Any TParser::FunctionCallParamElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallParamElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallParamElementsContext* TParser::functionCallParamElements() {
  FunctionCallParamElementsContext *_localctx = _tracker.createInstance<FunctionCallParamElementsContext>(_ctx, getState());
  enterRule(_localctx, 72, TParser::RuleFunctionCallParamElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(576);
      generalValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(577);
      generalValue();
      setState(578);
      match(TParser::Separator);
      setState(579);
      functionCallParamElements();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(581);
      operationElements();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(582);
      operationElements();
      setState(583);
      match(TParser::Separator);
      setState(584);
      functionCallParamElements();
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

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

TParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ConditionalExpressionStructBlockContext* TParser::ConditionalExpressionContext::conditionalExpressionStructBlock() {
  return getRuleContext<TParser::ConditionalExpressionStructBlockContext>(0);
}

TParser::ConditionalExpressionContext* TParser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<TParser::ConditionalExpressionContext>(0);
}


size_t TParser::ConditionalExpressionContext::getRuleIndex() const {
  return TParser::RuleConditionalExpression;
}

void TParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void TParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any TParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalExpressionContext* TParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 74, TParser::RuleConditionalExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(592);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(588);
      conditionalExpressionStructBlock();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(589);
      conditionalExpressionStructBlock();
      setState(590);
      conditionalExpression();
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

//----------------- ConditionalExpressionStructBlockContext ------------------------------------------------------------------

TParser::ConditionalExpressionStructBlockContext::ConditionalExpressionStructBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::IfElementUniqueContext* TParser::ConditionalExpressionStructBlockContext::ifElementUnique() {
  return getRuleContext<TParser::IfElementUniqueContext>(0);
}

TParser::ElifElementsContext* TParser::ConditionalExpressionStructBlockContext::elifElements() {
  return getRuleContext<TParser::ElifElementsContext>(0);
}

TParser::ElseElementUniqueContext* TParser::ConditionalExpressionStructBlockContext::elseElementUnique() {
  return getRuleContext<TParser::ElseElementUniqueContext>(0);
}


size_t TParser::ConditionalExpressionStructBlockContext::getRuleIndex() const {
  return TParser::RuleConditionalExpressionStructBlock;
}

void TParser::ConditionalExpressionStructBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpressionStructBlock(this);
}

void TParser::ConditionalExpressionStructBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpressionStructBlock(this);
}


antlrcpp::Any TParser::ConditionalExpressionStructBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpressionStructBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalExpressionStructBlockContext* TParser::conditionalExpressionStructBlock() {
  ConditionalExpressionStructBlockContext *_localctx = _tracker.createInstance<ConditionalExpressionStructBlockContext>(_ctx, getState());
  enterRule(_localctx, 76, TParser::RuleConditionalExpressionStructBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(605);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(594);
      ifElementUnique();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(595);
      ifElementUnique();
      setState(596);
      elifElements();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(598);
      ifElementUnique();
      setState(599);
      elseElementUnique();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(601);
      ifElementUnique();
      setState(602);
      elifElements();
      setState(603);
      elseElementUnique();
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

//----------------- IfElementUniqueContext ------------------------------------------------------------------

TParser::IfElementUniqueContext::IfElementUniqueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::IfElementUniqueContext::If() {
  return getToken(TParser::If, 0);
}

TParser::ConditionalExpressionItemsContext* TParser::IfElementUniqueContext::conditionalExpressionItems() {
  return getRuleContext<TParser::ConditionalExpressionItemsContext>(0);
}

TParser::ConditionalBlockElementsContext* TParser::IfElementUniqueContext::conditionalBlockElements() {
  return getRuleContext<TParser::ConditionalBlockElementsContext>(0);
}


size_t TParser::IfElementUniqueContext::getRuleIndex() const {
  return TParser::RuleIfElementUnique;
}

void TParser::IfElementUniqueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElementUnique(this);
}

void TParser::IfElementUniqueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElementUnique(this);
}


antlrcpp::Any TParser::IfElementUniqueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIfElementUnique(this);
  else
    return visitor->visitChildren(this);
}

TParser::IfElementUniqueContext* TParser::ifElementUnique() {
  IfElementUniqueContext *_localctx = _tracker.createInstance<IfElementUniqueContext>(_ctx, getState());
  enterRule(_localctx, 78, TParser::RuleIfElementUnique);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(TParser::If);
    setState(608);
    conditionalExpressionItems();
    setState(609);
    conditionalBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElifElementsContext ------------------------------------------------------------------

TParser::ElifElementsContext::ElifElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ElifElementUniqueContext* TParser::ElifElementsContext::elifElementUnique() {
  return getRuleContext<TParser::ElifElementUniqueContext>(0);
}

TParser::ElifElementsContext* TParser::ElifElementsContext::elifElements() {
  return getRuleContext<TParser::ElifElementsContext>(0);
}


size_t TParser::ElifElementsContext::getRuleIndex() const {
  return TParser::RuleElifElements;
}

void TParser::ElifElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElifElements(this);
}

void TParser::ElifElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElifElements(this);
}


antlrcpp::Any TParser::ElifElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitElifElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::ElifElementsContext* TParser::elifElements() {
  ElifElementsContext *_localctx = _tracker.createInstance<ElifElementsContext>(_ctx, getState());
  enterRule(_localctx, 80, TParser::RuleElifElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(615);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(611);
      elifElementUnique();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(612);
      elifElementUnique();
      setState(613);
      elifElements();
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

//----------------- ElifElementUniqueContext ------------------------------------------------------------------

TParser::ElifElementUniqueContext::ElifElementUniqueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ElifElementUniqueContext::Elif() {
  return getToken(TParser::Elif, 0);
}

TParser::ConditionalExpressionItemsContext* TParser::ElifElementUniqueContext::conditionalExpressionItems() {
  return getRuleContext<TParser::ConditionalExpressionItemsContext>(0);
}

TParser::ConditionalBlockElementsContext* TParser::ElifElementUniqueContext::conditionalBlockElements() {
  return getRuleContext<TParser::ConditionalBlockElementsContext>(0);
}


size_t TParser::ElifElementUniqueContext::getRuleIndex() const {
  return TParser::RuleElifElementUnique;
}

void TParser::ElifElementUniqueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElifElementUnique(this);
}

void TParser::ElifElementUniqueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElifElementUnique(this);
}


antlrcpp::Any TParser::ElifElementUniqueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitElifElementUnique(this);
  else
    return visitor->visitChildren(this);
}

TParser::ElifElementUniqueContext* TParser::elifElementUnique() {
  ElifElementUniqueContext *_localctx = _tracker.createInstance<ElifElementUniqueContext>(_ctx, getState());
  enterRule(_localctx, 82, TParser::RuleElifElementUnique);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    match(TParser::Elif);
    setState(618);
    conditionalExpressionItems();
    setState(619);
    conditionalBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseElementUniqueContext ------------------------------------------------------------------

TParser::ElseElementUniqueContext::ElseElementUniqueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ElseElementUniqueContext::Else() {
  return getToken(TParser::Else, 0);
}

TParser::ConditionalBlockElementsContext* TParser::ElseElementUniqueContext::conditionalBlockElements() {
  return getRuleContext<TParser::ConditionalBlockElementsContext>(0);
}


size_t TParser::ElseElementUniqueContext::getRuleIndex() const {
  return TParser::RuleElseElementUnique;
}

void TParser::ElseElementUniqueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseElementUnique(this);
}

void TParser::ElseElementUniqueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseElementUnique(this);
}


antlrcpp::Any TParser::ElseElementUniqueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitElseElementUnique(this);
  else
    return visitor->visitChildren(this);
}

TParser::ElseElementUniqueContext* TParser::elseElementUnique() {
  ElseElementUniqueContext *_localctx = _tracker.createInstance<ElseElementUniqueContext>(_ctx, getState());
  enterRule(_localctx, 84, TParser::RuleElseElementUnique);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(TParser::Else);
    setState(622);
    conditionalBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionItemsContext ------------------------------------------------------------------

TParser::ConditionalExpressionItemsContext::ConditionalExpressionItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ConditionalExpressionElementsContext* TParser::ConditionalExpressionItemsContext::conditionalExpressionElements() {
  return getRuleContext<TParser::ConditionalExpressionElementsContext>(0);
}


size_t TParser::ConditionalExpressionItemsContext::getRuleIndex() const {
  return TParser::RuleConditionalExpressionItems;
}

void TParser::ConditionalExpressionItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpressionItems(this);
}

void TParser::ConditionalExpressionItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpressionItems(this);
}


antlrcpp::Any TParser::ConditionalExpressionItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpressionItems(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalExpressionItemsContext* TParser::conditionalExpressionItems() {
  ConditionalExpressionItemsContext *_localctx = _tracker.createInstance<ConditionalExpressionItemsContext>(_ctx, getState());
  enterRule(_localctx, 86, TParser::RuleConditionalExpressionItems);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    conditionalExpressionElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalBlockElementsContext ------------------------------------------------------------------

TParser::ConditionalBlockElementsContext::ConditionalBlockElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ConditionalBlockElementsContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::ConditionalBlockElementsContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::ConditionalBlockElsItemsContext* TParser::ConditionalBlockElementsContext::conditionalBlockElsItems() {
  return getRuleContext<TParser::ConditionalBlockElsItemsContext>(0);
}

TParser::ConditionalExpressionContext* TParser::ConditionalBlockElementsContext::conditionalExpression() {
  return getRuleContext<TParser::ConditionalExpressionContext>(0);
}

TParser::CallingFunctionContext* TParser::ConditionalBlockElementsContext::callingFunction() {
  return getRuleContext<TParser::CallingFunctionContext>(0);
}

TParser::LoopContext* TParser::ConditionalBlockElementsContext::loop() {
  return getRuleContext<TParser::LoopContext>(0);
}

TParser::RetContext* TParser::ConditionalBlockElementsContext::ret() {
  return getRuleContext<TParser::RetContext>(0);
}


size_t TParser::ConditionalBlockElementsContext::getRuleIndex() const {
  return TParser::RuleConditionalBlockElements;
}

void TParser::ConditionalBlockElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalBlockElements(this);
}

void TParser::ConditionalBlockElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalBlockElements(this);
}


antlrcpp::Any TParser::ConditionalBlockElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalBlockElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalBlockElementsContext* TParser::conditionalBlockElements() {
  ConditionalBlockElementsContext *_localctx = _tracker.createInstance<ConditionalBlockElementsContext>(_ctx, getState());
  enterRule(_localctx, 88, TParser::RuleConditionalBlockElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(636);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(626);
      match(TParser::OpenBlock);
      setState(627);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(628);
      match(TParser::OpenBlock);
      setState(629);
      conditionalBlockElsItems();
      setState(630);
      match(TParser::CloseBlock);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(632);
      conditionalExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(633);
      callingFunction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(634);
      loop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(635);
      ret();
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

//----------------- ConditionalBlockElsItemsContext ------------------------------------------------------------------

TParser::ConditionalBlockElsItemsContext::ConditionalBlockElsItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SentenceContext* TParser::ConditionalBlockElsItemsContext::sentence() {
  return getRuleContext<TParser::SentenceContext>(0);
}

TParser::ConditionalBlockElsItemsContext* TParser::ConditionalBlockElsItemsContext::conditionalBlockElsItems() {
  return getRuleContext<TParser::ConditionalBlockElsItemsContext>(0);
}


size_t TParser::ConditionalBlockElsItemsContext::getRuleIndex() const {
  return TParser::RuleConditionalBlockElsItems;
}

void TParser::ConditionalBlockElsItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalBlockElsItems(this);
}

void TParser::ConditionalBlockElsItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalBlockElsItems(this);
}


antlrcpp::Any TParser::ConditionalBlockElsItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalBlockElsItems(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalBlockElsItemsContext* TParser::conditionalBlockElsItems() {
  ConditionalBlockElsItemsContext *_localctx = _tracker.createInstance<ConditionalBlockElsItemsContext>(_ctx, getState());
  enterRule(_localctx, 90, TParser::RuleConditionalBlockElsItems);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(642);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(638);
      sentence();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(639);
      sentence();
      setState(640);
      conditionalBlockElsItems();
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

//----------------- ConditionalExpressionElementsContext ------------------------------------------------------------------

TParser::ConditionalExpressionElementsContext::ConditionalExpressionElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ConditionExpValueContext* TParser::ConditionalExpressionElementsContext::conditionExpValue() {
  return getRuleContext<TParser::ConditionExpValueContext>(0);
}

TParser::ConditionalExpressionElementsContext* TParser::ConditionalExpressionElementsContext::conditionalExpressionElements() {
  return getRuleContext<TParser::ConditionalExpressionElementsContext>(0);
}

TParser::ConditionExpBlockContext* TParser::ConditionalExpressionElementsContext::conditionExpBlock() {
  return getRuleContext<TParser::ConditionExpBlockContext>(0);
}


size_t TParser::ConditionalExpressionElementsContext::getRuleIndex() const {
  return TParser::RuleConditionalExpressionElements;
}

void TParser::ConditionalExpressionElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpressionElements(this);
}

void TParser::ConditionalExpressionElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpressionElements(this);
}


antlrcpp::Any TParser::ConditionalExpressionElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpressionElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalExpressionElementsContext* TParser::conditionalExpressionElements() {
  ConditionalExpressionElementsContext *_localctx = _tracker.createInstance<ConditionalExpressionElementsContext>(_ctx, getState());
  enterRule(_localctx, 92, TParser::RuleConditionalExpressionElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(652);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(644);
      conditionExpValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(645);
      conditionExpValue();
      setState(646);
      conditionalExpressionElements();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(648);
      conditionExpBlock();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(649);
      conditionExpBlock();
      setState(650);
      conditionalExpressionElements();
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

//----------------- ConditionExpValueContext ------------------------------------------------------------------

TParser::ConditionExpValueContext::ConditionExpValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ConditionExpValueContext::Not() {
  return getToken(TParser::Not, 0);
}

TParser::ConditionalExpValueContext* TParser::ConditionExpValueContext::conditionalExpValue() {
  return getRuleContext<TParser::ConditionalExpValueContext>(0);
}


size_t TParser::ConditionExpValueContext::getRuleIndex() const {
  return TParser::RuleConditionExpValue;
}

void TParser::ConditionExpValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionExpValue(this);
}

void TParser::ConditionExpValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionExpValue(this);
}


antlrcpp::Any TParser::ConditionExpValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionExpValue(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionExpValueContext* TParser::conditionExpValue() {
  ConditionExpValueContext *_localctx = _tracker.createInstance<ConditionExpValueContext>(_ctx, getState());
  enterRule(_localctx, 94, TParser::RuleConditionExpValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(657);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::Not: {
        enterOuterAlt(_localctx, 1);
        setState(654);
        match(TParser::Not);
        setState(655);
        conditionalExpValue();
        break;
      }

      case TParser::OpenOp:
      case TParser::IncDecOperators:
      case TParser::Identifier:
      case TParser::Integer:
      case TParser::Float: {
        enterOuterAlt(_localctx, 2);
        setState(656);
        conditionalExpValue();
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

//----------------- ConditionExpBlockContext ------------------------------------------------------------------

TParser::ConditionExpBlockContext::ConditionExpBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ConditionExpBlockItemValueContext* TParser::ConditionExpBlockContext::conditionExpBlockItemValue() {
  return getRuleContext<TParser::ConditionExpBlockItemValueContext>(0);
}

tree::TerminalNode* TParser::ConditionExpBlockContext::Not() {
  return getToken(TParser::Not, 0);
}


size_t TParser::ConditionExpBlockContext::getRuleIndex() const {
  return TParser::RuleConditionExpBlock;
}

void TParser::ConditionExpBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionExpBlock(this);
}

void TParser::ConditionExpBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionExpBlock(this);
}


antlrcpp::Any TParser::ConditionExpBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionExpBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionExpBlockContext* TParser::conditionExpBlock() {
  ConditionExpBlockContext *_localctx = _tracker.createInstance<ConditionExpBlockContext>(_ctx, getState());
  enterRule(_localctx, 96, TParser::RuleConditionExpBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(662);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::OpenOp: {
        enterOuterAlt(_localctx, 1);
        setState(659);
        conditionExpBlockItemValue();
        break;
      }

      case TParser::Not: {
        enterOuterAlt(_localctx, 2);
        setState(660);
        match(TParser::Not);
        setState(661);
        conditionExpBlockItemValue();
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

//----------------- ConditionExpBlockItemValueContext ------------------------------------------------------------------

TParser::ConditionExpBlockItemValueContext::ConditionExpBlockItemValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ConditionExpBlockItemContext* TParser::ConditionExpBlockItemValueContext::conditionExpBlockItem() {
  return getRuleContext<TParser::ConditionExpBlockItemContext>(0);
}

tree::TerminalNode* TParser::ConditionExpBlockItemValueContext::ArithmeticOperator() {
  return getToken(TParser::ArithmeticOperator, 0);
}

tree::TerminalNode* TParser::ConditionExpBlockItemValueContext::AssignmentOperator() {
  return getToken(TParser::AssignmentOperator, 0);
}

tree::TerminalNode* TParser::ConditionExpBlockItemValueContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}


size_t TParser::ConditionExpBlockItemValueContext::getRuleIndex() const {
  return TParser::RuleConditionExpBlockItemValue;
}

void TParser::ConditionExpBlockItemValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionExpBlockItemValue(this);
}

void TParser::ConditionExpBlockItemValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionExpBlockItemValue(this);
}


antlrcpp::Any TParser::ConditionExpBlockItemValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionExpBlockItemValue(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionExpBlockItemValueContext* TParser::conditionExpBlockItemValue() {
  ConditionExpBlockItemValueContext *_localctx = _tracker.createInstance<ConditionExpBlockItemValueContext>(_ctx, getState());
  enterRule(_localctx, 98, TParser::RuleConditionExpBlockItemValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(672);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(664);
      conditionExpBlockItem();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(665);
      conditionExpBlockItem();
      setState(666);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(668);
      conditionExpBlockItem();
      setState(669);
      match(TParser::TypeSpec);
      setState(670);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

//----------------- ConditionExpBlockItemContext ------------------------------------------------------------------

TParser::ConditionExpBlockItemContext::ConditionExpBlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ConditionExpBlockItemContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

TParser::ConditionalExpressionElementsContext* TParser::ConditionExpBlockItemContext::conditionalExpressionElements() {
  return getRuleContext<TParser::ConditionalExpressionElementsContext>(0);
}

tree::TerminalNode* TParser::ConditionExpBlockItemContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}


size_t TParser::ConditionExpBlockItemContext::getRuleIndex() const {
  return TParser::RuleConditionExpBlockItem;
}

void TParser::ConditionExpBlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionExpBlockItem(this);
}

void TParser::ConditionExpBlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionExpBlockItem(this);
}


antlrcpp::Any TParser::ConditionExpBlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionExpBlockItem(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionExpBlockItemContext* TParser::conditionExpBlockItem() {
  ConditionExpBlockItemContext *_localctx = _tracker.createInstance<ConditionExpBlockItemContext>(_ctx, getState());
  enterRule(_localctx, 100, TParser::RuleConditionExpBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
    match(TParser::OpenOp);
    setState(675);
    conditionalExpressionElements();
    setState(676);
    match(TParser::CloseOp);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpValueContext ------------------------------------------------------------------

TParser::ConditionalExpValueContext::ConditionalExpValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FirstIncDecContext* TParser::ConditionalExpValueContext::firstIncDec() {
  return getRuleContext<TParser::FirstIncDecContext>(0);
}

tree::TerminalNode* TParser::ConditionalExpValueContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::ConditionalExpValueContext::ArithmeticOperator() {
  return getToken(TParser::ArithmeticOperator, 0);
}

tree::TerminalNode* TParser::ConditionalExpValueContext::AssignmentOperator() {
  return getToken(TParser::AssignmentOperator, 0);
}

tree::TerminalNode* TParser::ConditionalExpValueContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}

TParser::LastIncDecContext* TParser::ConditionalExpValueContext::lastIncDec() {
  return getRuleContext<TParser::LastIncDecContext>(0);
}

tree::TerminalNode* TParser::ConditionalExpValueContext::Integer() {
  return getToken(TParser::Integer, 0);
}

tree::TerminalNode* TParser::ConditionalExpValueContext::Float() {
  return getToken(TParser::Float, 0);
}

TParser::FunctionCallAndAttrContext* TParser::ConditionalExpValueContext::functionCallAndAttr() {
  return getRuleContext<TParser::FunctionCallAndAttrContext>(0);
}

TParser::FunctionCallContext* TParser::ConditionalExpValueContext::functionCall() {
  return getRuleContext<TParser::FunctionCallContext>(0);
}

TParser::OperationBlockContext* TParser::ConditionalExpValueContext::operationBlock() {
  return getRuleContext<TParser::OperationBlockContext>(0);
}

TParser::ArrayAccessElementsContext* TParser::ConditionalExpValueContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}


size_t TParser::ConditionalExpValueContext::getRuleIndex() const {
  return TParser::RuleConditionalExpValue;
}

void TParser::ConditionalExpValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpValue(this);
}

void TParser::ConditionalExpValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpValue(this);
}


antlrcpp::Any TParser::ConditionalExpValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpValue(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConditionalExpValueContext* TParser::conditionalExpValue() {
  ConditionalExpValueContext *_localctx = _tracker.createInstance<ConditionalExpValueContext>(_ctx, getState());
  enterRule(_localctx, 102, TParser::RuleConditionalExpValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(767);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(678);
      firstIncDec();
      setState(679);
      match(TParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(681);
      firstIncDec();
      setState(682);
      match(TParser::Identifier);
      setState(683);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(685);
      firstIncDec();
      setState(686);
      match(TParser::Identifier);
      setState(687);
      match(TParser::TypeSpec);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(689);
      firstIncDec();
      setState(690);
      match(TParser::Identifier);
      setState(691);
      match(TParser::TypeSpec);
      setState(692);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(694);
      match(TParser::Identifier);
      setState(695);
      lastIncDec();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(696);
      match(TParser::Identifier);
      setState(697);
      lastIncDec();
      setState(698);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(700);
      match(TParser::Identifier);
      setState(701);
      lastIncDec();
      setState(702);
      match(TParser::TypeSpec);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(704);
      match(TParser::Identifier);
      setState(705);
      lastIncDec();
      setState(706);
      match(TParser::TypeSpec);
      setState(707);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(709);
      match(TParser::Integer);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(710);
      match(TParser::Integer);
      setState(711);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(712);
      match(TParser::Integer);
      setState(713);
      match(TParser::TypeSpec);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(714);
      match(TParser::Integer);
      setState(715);
      match(TParser::TypeSpec);
      setState(716);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(717);
      match(TParser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(718);
      match(TParser::Float);
      setState(719);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(720);
      match(TParser::Float);
      setState(721);
      match(TParser::TypeSpec);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(722);
      match(TParser::Float);
      setState(723);
      match(TParser::TypeSpec);
      setState(724);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(725);
      functionCallAndAttr();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(726);
      functionCall();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(727);
      functionCall();
      setState(728);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(730);
      functionCall();
      setState(731);
      match(TParser::TypeSpec);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(733);
      functionCall();
      setState(734);
      match(TParser::TypeSpec);
      setState(735);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(737);
      operationBlock();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(738);
      operationBlock();
      setState(739);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(741);
      operationBlock();
      setState(742);
      match(TParser::TypeSpec);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(744);
      operationBlock();
      setState(745);
      match(TParser::TypeSpec);
      setState(746);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(748);
      match(TParser::Identifier);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(749);
      match(TParser::Identifier);
      setState(750);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(751);
      match(TParser::Identifier);
      setState(752);
      match(TParser::TypeSpec);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(753);
      match(TParser::Identifier);
      setState(754);
      match(TParser::TypeSpec);
      setState(755);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(756);
      arrayAccessElements();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(757);
      arrayAccessElements();
      setState(758);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(760);
      arrayAccessElements();
      setState(761);
      match(TParser::TypeSpec);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(763);
      arrayAccessElements();
      setState(764);
      match(TParser::TypeSpec);
      setState(765);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

//----------------- FunctionCallAndAttrContext ------------------------------------------------------------------

TParser::FunctionCallAndAttrContext::FunctionCallAndAttrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::IdentifierAttrFnContext* TParser::FunctionCallAndAttrContext::identifierAttrFn() {
  return getRuleContext<TParser::IdentifierAttrFnContext>(0);
}

tree::TerminalNode* TParser::FunctionCallAndAttrContext::Attr() {
  return getToken(TParser::Attr, 0);
}

TParser::FunctionCallAttrFnContext* TParser::FunctionCallAndAttrContext::functionCallAttrFn() {
  return getRuleContext<TParser::FunctionCallAttrFnContext>(0);
}


size_t TParser::FunctionCallAndAttrContext::getRuleIndex() const {
  return TParser::RuleFunctionCallAndAttr;
}

void TParser::FunctionCallAndAttrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallAndAttr(this);
}

void TParser::FunctionCallAndAttrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallAndAttr(this);
}


antlrcpp::Any TParser::FunctionCallAndAttrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallAndAttr(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallAndAttrContext* TParser::functionCallAndAttr() {
  FunctionCallAndAttrContext *_localctx = _tracker.createInstance<FunctionCallAndAttrContext>(_ctx, getState());
  enterRule(_localctx, 104, TParser::RuleFunctionCallAndAttr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(769);
    identifierAttrFn();
    setState(770);
    match(TParser::Attr);
    setState(771);
    functionCallAttrFn();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierAttrFnContext ------------------------------------------------------------------

TParser::IdentifierAttrFnContext::IdentifierAttrFnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ArrayAccessElementsContext* TParser::IdentifierAttrFnContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}

tree::TerminalNode* TParser::IdentifierAttrFnContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}


size_t TParser::IdentifierAttrFnContext::getRuleIndex() const {
  return TParser::RuleIdentifierAttrFn;
}

void TParser::IdentifierAttrFnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierAttrFn(this);
}

void TParser::IdentifierAttrFnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierAttrFn(this);
}


antlrcpp::Any TParser::IdentifierAttrFnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierAttrFn(this);
  else
    return visitor->visitChildren(this);
}

TParser::IdentifierAttrFnContext* TParser::identifierAttrFn() {
  IdentifierAttrFnContext *_localctx = _tracker.createInstance<IdentifierAttrFnContext>(_ctx, getState());
  enterRule(_localctx, 106, TParser::RuleIdentifierAttrFn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(775);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(773);
      arrayAccessElements();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(774);
      match(TParser::Identifier);
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

//----------------- FunctionCallAttrFnContext ------------------------------------------------------------------

TParser::FunctionCallAttrFnContext::FunctionCallAttrFnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCallAttrFnItemContext* TParser::FunctionCallAttrFnContext::functionCallAttrFnItem() {
  return getRuleContext<TParser::FunctionCallAttrFnItemContext>(0);
}


size_t TParser::FunctionCallAttrFnContext::getRuleIndex() const {
  return TParser::RuleFunctionCallAttrFn;
}

void TParser::FunctionCallAttrFnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallAttrFn(this);
}

void TParser::FunctionCallAttrFnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallAttrFn(this);
}


antlrcpp::Any TParser::FunctionCallAttrFnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallAttrFn(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallAttrFnContext* TParser::functionCallAttrFn() {
  FunctionCallAttrFnContext *_localctx = _tracker.createInstance<FunctionCallAttrFnContext>(_ctx, getState());
  enterRule(_localctx, 108, TParser::RuleFunctionCallAttrFn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(777);
    functionCallAttrFnItem();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallAttrFnItemContext ------------------------------------------------------------------

TParser::FunctionCallAttrFnItemContext::FunctionCallAttrFnItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCallContext* TParser::FunctionCallAttrFnItemContext::functionCall() {
  return getRuleContext<TParser::FunctionCallContext>(0);
}

tree::TerminalNode* TParser::FunctionCallAttrFnItemContext::ArithmeticOperator() {
  return getToken(TParser::ArithmeticOperator, 0);
}

tree::TerminalNode* TParser::FunctionCallAttrFnItemContext::AssignmentOperator() {
  return getToken(TParser::AssignmentOperator, 0);
}

tree::TerminalNode* TParser::FunctionCallAttrFnItemContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}


size_t TParser::FunctionCallAttrFnItemContext::getRuleIndex() const {
  return TParser::RuleFunctionCallAttrFnItem;
}

void TParser::FunctionCallAttrFnItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallAttrFnItem(this);
}

void TParser::FunctionCallAttrFnItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallAttrFnItem(this);
}


antlrcpp::Any TParser::FunctionCallAttrFnItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallAttrFnItem(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCallAttrFnItemContext* TParser::functionCallAttrFnItem() {
  FunctionCallAttrFnItemContext *_localctx = _tracker.createInstance<FunctionCallAttrFnItemContext>(_ctx, getState());
  enterRule(_localctx, 110, TParser::RuleFunctionCallAttrFnItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(790);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(779);
      functionCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(780);
      functionCall();
      setState(781);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(783);
      functionCall();
      setState(784);
      match(TParser::TypeSpec);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(786);
      functionCall();
      setState(787);
      match(TParser::TypeSpec);
      setState(788);
      _la = _input->LA(1);
      if (!(_la == TParser::ArithmeticOperator

      || _la == TParser::AssignmentOperator)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

//----------------- LoopContext ------------------------------------------------------------------

TParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::LoopExpressionItemsContext* TParser::LoopContext::loopExpressionItems() {
  return getRuleContext<TParser::LoopExpressionItemsContext>(0);
}

TParser::LoopContext* TParser::LoopContext::loop() {
  return getRuleContext<TParser::LoopContext>(0);
}


size_t TParser::LoopContext::getRuleIndex() const {
  return TParser::RuleLoop;
}

void TParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void TParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}


antlrcpp::Any TParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopContext* TParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 112, TParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(796);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(792);
      loopExpressionItems();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(793);
      loopExpressionItems();
      setState(794);
      loop();
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

//----------------- LoopExpressionItemsContext ------------------------------------------------------------------

TParser::LoopExpressionItemsContext::LoopExpressionItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LoopExpressionItemsContext::For() {
  return getToken(TParser::For, 0);
}

TParser::LoopExpressionContext* TParser::LoopExpressionItemsContext::loopExpression() {
  return getRuleContext<TParser::LoopExpressionContext>(0);
}

TParser::LoopBlockElementsLimitedContext* TParser::LoopExpressionItemsContext::loopBlockElementsLimited() {
  return getRuleContext<TParser::LoopBlockElementsLimitedContext>(0);
}


size_t TParser::LoopExpressionItemsContext::getRuleIndex() const {
  return TParser::RuleLoopExpressionItems;
}

void TParser::LoopExpressionItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopExpressionItems(this);
}

void TParser::LoopExpressionItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopExpressionItems(this);
}


antlrcpp::Any TParser::LoopExpressionItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopExpressionItems(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopExpressionItemsContext* TParser::loopExpressionItems() {
  LoopExpressionItemsContext *_localctx = _tracker.createInstance<LoopExpressionItemsContext>(_ctx, getState());
  enterRule(_localctx, 114, TParser::RuleLoopExpressionItems);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    match(TParser::For);
    setState(799);
    loopExpression();
    setState(800);
    loopBlockElementsLimited();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopExpressionContext ------------------------------------------------------------------

TParser::LoopExpressionContext::LoopExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::LoopInfiniteContext* TParser::LoopExpressionContext::loopInfinite() {
  return getRuleContext<TParser::LoopInfiniteContext>(0);
}

TParser::LoopCompleteContext* TParser::LoopExpressionContext::loopComplete() {
  return getRuleContext<TParser::LoopCompleteContext>(0);
}

TParser::LoopConditionalContext* TParser::LoopExpressionContext::loopConditional() {
  return getRuleContext<TParser::LoopConditionalContext>(0);
}


size_t TParser::LoopExpressionContext::getRuleIndex() const {
  return TParser::RuleLoopExpression;
}

void TParser::LoopExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopExpression(this);
}

void TParser::LoopExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopExpression(this);
}


antlrcpp::Any TParser::LoopExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopExpression(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopExpressionContext* TParser::loopExpression() {
  LoopExpressionContext *_localctx = _tracker.createInstance<LoopExpressionContext>(_ctx, getState());
  enterRule(_localctx, 116, TParser::RuleLoopExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(805);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(802);
      loopInfinite();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(803);
      loopComplete();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(804);
      loopConditional();
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

//----------------- LoopInfiniteContext ------------------------------------------------------------------

TParser::LoopInfiniteContext::LoopInfiniteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LoopInfiniteContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

tree::TerminalNode* TParser::LoopInfiniteContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}


size_t TParser::LoopInfiniteContext::getRuleIndex() const {
  return TParser::RuleLoopInfinite;
}

void TParser::LoopInfiniteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopInfinite(this);
}

void TParser::LoopInfiniteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopInfinite(this);
}


antlrcpp::Any TParser::LoopInfiniteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopInfinite(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopInfiniteContext* TParser::loopInfinite() {
  LoopInfiniteContext *_localctx = _tracker.createInstance<LoopInfiniteContext>(_ctx, getState());
  enterRule(_localctx, 118, TParser::RuleLoopInfinite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(810);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::OpenOp: {
        enterOuterAlt(_localctx, 1);
        setState(807);
        match(TParser::OpenOp);
        setState(808);
        match(TParser::CloseOp);
        break;
      }

      case TParser::If:
      case TParser::For:
      case TParser::Ret:
      case TParser::OpenBlock:
      case TParser::IncDecOperators:
      case TParser::Identifier: {
        enterOuterAlt(_localctx, 2);

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

//----------------- LoopCompleteContext ------------------------------------------------------------------

TParser::LoopCompleteContext::LoopCompleteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LoopCompleteContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

TParser::LoopOneMembersContext* TParser::LoopCompleteContext::loopOneMembers() {
  return getRuleContext<TParser::LoopOneMembersContext>(0);
}

TParser::EndOneContext* TParser::LoopCompleteContext::endOne() {
  return getRuleContext<TParser::EndOneContext>(0);
}

TParser::LoopTwoMembersContext* TParser::LoopCompleteContext::loopTwoMembers() {
  return getRuleContext<TParser::LoopTwoMembersContext>(0);
}

TParser::EndTwoContext* TParser::LoopCompleteContext::endTwo() {
  return getRuleContext<TParser::EndTwoContext>(0);
}

TParser::LoopThreeMembersContext* TParser::LoopCompleteContext::loopThreeMembers() {
  return getRuleContext<TParser::LoopThreeMembersContext>(0);
}

tree::TerminalNode* TParser::LoopCompleteContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}


size_t TParser::LoopCompleteContext::getRuleIndex() const {
  return TParser::RuleLoopComplete;
}

void TParser::LoopCompleteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopComplete(this);
}

void TParser::LoopCompleteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopComplete(this);
}


antlrcpp::Any TParser::LoopCompleteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopComplete(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopCompleteContext* TParser::loopComplete() {
  LoopCompleteContext *_localctx = _tracker.createInstance<LoopCompleteContext>(_ctx, getState());
  enterRule(_localctx, 120, TParser::RuleLoopComplete);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(826);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::OpenOp: {
        enterOuterAlt(_localctx, 1);
        setState(812);
        match(TParser::OpenOp);
        setState(813);
        loopOneMembers();
        setState(814);
        endOne();
        setState(815);
        loopTwoMembers();
        setState(816);
        endTwo();
        setState(817);
        loopThreeMembers();
        setState(818);
        match(TParser::CloseOp);
        break;
      }

      case TParser::Var:
      case TParser::End:
      case TParser::IncDecOperators:
      case TParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(820);
        loopOneMembers();
        setState(821);
        endOne();
        setState(822);
        loopTwoMembers();
        setState(823);
        endTwo();
        setState(824);
        loopThreeMembers();
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

//----------------- LoopConditionalContext ------------------------------------------------------------------

TParser::LoopConditionalContext::LoopConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::LoopTwoMembersContext* TParser::LoopConditionalContext::loopTwoMembers() {
  return getRuleContext<TParser::LoopTwoMembersContext>(0);
}


size_t TParser::LoopConditionalContext::getRuleIndex() const {
  return TParser::RuleLoopConditional;
}

void TParser::LoopConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopConditional(this);
}

void TParser::LoopConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopConditional(this);
}


antlrcpp::Any TParser::LoopConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopConditional(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopConditionalContext* TParser::loopConditional() {
  LoopConditionalContext *_localctx = _tracker.createInstance<LoopConditionalContext>(_ctx, getState());
  enterRule(_localctx, 122, TParser::RuleLoopConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    loopTwoMembers();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndOneContext ------------------------------------------------------------------

TParser::EndOneContext::EndOneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::EndOneContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::EndOneContext::getRuleIndex() const {
  return TParser::RuleEndOne;
}

void TParser::EndOneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndOne(this);
}

void TParser::EndOneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndOne(this);
}


antlrcpp::Any TParser::EndOneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitEndOne(this);
  else
    return visitor->visitChildren(this);
}

TParser::EndOneContext* TParser::endOne() {
  EndOneContext *_localctx = _tracker.createInstance<EndOneContext>(_ctx, getState());
  enterRule(_localctx, 124, TParser::RuleEndOne);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(830);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndTwoContext ------------------------------------------------------------------

TParser::EndTwoContext::EndTwoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::EndTwoContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::EndTwoContext::getRuleIndex() const {
  return TParser::RuleEndTwo;
}

void TParser::EndTwoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndTwo(this);
}

void TParser::EndTwoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndTwo(this);
}


antlrcpp::Any TParser::EndTwoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitEndTwo(this);
  else
    return visitor->visitChildren(this);
}

TParser::EndTwoContext* TParser::endTwo() {
  EndTwoContext *_localctx = _tracker.createInstance<EndTwoContext>(_ctx, getState());
  enterRule(_localctx, 126, TParser::RuleEndTwo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopOneMembersContext ------------------------------------------------------------------

TParser::LoopOneMembersContext::LoopOneMembersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VariableMembersContext* TParser::LoopOneMembersContext::variableMembers() {
  return getRuleContext<TParser::VariableMembersContext>(0);
}

tree::TerminalNode* TParser::LoopOneMembersContext::Var() {
  return getToken(TParser::Var, 0);
}


size_t TParser::LoopOneMembersContext::getRuleIndex() const {
  return TParser::RuleLoopOneMembers;
}

void TParser::LoopOneMembersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopOneMembers(this);
}

void TParser::LoopOneMembersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopOneMembers(this);
}


antlrcpp::Any TParser::LoopOneMembersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopOneMembers(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopOneMembersContext* TParser::loopOneMembers() {
  LoopOneMembersContext *_localctx = _tracker.createInstance<LoopOneMembersContext>(_ctx, getState());
  enterRule(_localctx, 128, TParser::RuleLoopOneMembers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(838);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::IncDecOperators:
      case TParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(834);
        variableMembers();
        break;
      }

      case TParser::Var: {
        enterOuterAlt(_localctx, 2);
        setState(835);
        match(TParser::Var);
        setState(836);
        variableMembers();
        break;
      }

      case TParser::End: {
        enterOuterAlt(_localctx, 3);

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

//----------------- LoopTwoMembersContext ------------------------------------------------------------------

TParser::LoopTwoMembersContext::LoopTwoMembersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ConditionalExpressionElementsContext* TParser::LoopTwoMembersContext::conditionalExpressionElements() {
  return getRuleContext<TParser::ConditionalExpressionElementsContext>(0);
}


size_t TParser::LoopTwoMembersContext::getRuleIndex() const {
  return TParser::RuleLoopTwoMembers;
}

void TParser::LoopTwoMembersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopTwoMembers(this);
}

void TParser::LoopTwoMembersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopTwoMembers(this);
}


antlrcpp::Any TParser::LoopTwoMembersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopTwoMembers(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopTwoMembersContext* TParser::loopTwoMembers() {
  LoopTwoMembersContext *_localctx = _tracker.createInstance<LoopTwoMembersContext>(_ctx, getState());
  enterRule(_localctx, 130, TParser::RuleLoopTwoMembers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(842);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(840);
      conditionalExpressionElements();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- LoopThreeMembersContext ------------------------------------------------------------------

TParser::LoopThreeMembersContext::LoopThreeMembersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::LoopThreeMembersValuesContext* TParser::LoopThreeMembersContext::loopThreeMembersValues() {
  return getRuleContext<TParser::LoopThreeMembersValuesContext>(0);
}


size_t TParser::LoopThreeMembersContext::getRuleIndex() const {
  return TParser::RuleLoopThreeMembers;
}

void TParser::LoopThreeMembersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopThreeMembers(this);
}

void TParser::LoopThreeMembersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopThreeMembers(this);
}


antlrcpp::Any TParser::LoopThreeMembersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopThreeMembers(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopThreeMembersContext* TParser::loopThreeMembers() {
  LoopThreeMembersContext *_localctx = _tracker.createInstance<LoopThreeMembersContext>(_ctx, getState());
  enterRule(_localctx, 132, TParser::RuleLoopThreeMembers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(846);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(844);
      loopThreeMembersValues();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- LoopThreeMembersValuesContext ------------------------------------------------------------------

TParser::LoopThreeMembersValuesContext::LoopThreeMembersValuesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::OperationElementsContext* TParser::LoopThreeMembersValuesContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}

tree::TerminalNode* TParser::LoopThreeMembersValuesContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::LoopThreeMembersValuesContext* TParser::LoopThreeMembersValuesContext::loopThreeMembersValues() {
  return getRuleContext<TParser::LoopThreeMembersValuesContext>(0);
}


size_t TParser::LoopThreeMembersValuesContext::getRuleIndex() const {
  return TParser::RuleLoopThreeMembersValues;
}

void TParser::LoopThreeMembersValuesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopThreeMembersValues(this);
}

void TParser::LoopThreeMembersValuesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopThreeMembersValues(this);
}


antlrcpp::Any TParser::LoopThreeMembersValuesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopThreeMembersValues(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopThreeMembersValuesContext* TParser::loopThreeMembersValues() {
  LoopThreeMembersValuesContext *_localctx = _tracker.createInstance<LoopThreeMembersValuesContext>(_ctx, getState());
  enterRule(_localctx, 134, TParser::RuleLoopThreeMembersValues);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(853);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(848);
      operationElements();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(849);
      operationElements();
      setState(850);
      match(TParser::Separator);
      setState(851);
      loopThreeMembersValues();
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

//----------------- LoopBlockElementsContext ------------------------------------------------------------------

TParser::LoopBlockElementsContext::LoopBlockElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SentenceContext* TParser::LoopBlockElementsContext::sentence() {
  return getRuleContext<TParser::SentenceContext>(0);
}

TParser::LoopBlockElementsContext* TParser::LoopBlockElementsContext::loopBlockElements() {
  return getRuleContext<TParser::LoopBlockElementsContext>(0);
}


size_t TParser::LoopBlockElementsContext::getRuleIndex() const {
  return TParser::RuleLoopBlockElements;
}

void TParser::LoopBlockElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopBlockElements(this);
}

void TParser::LoopBlockElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopBlockElements(this);
}


antlrcpp::Any TParser::LoopBlockElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopBlockElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopBlockElementsContext* TParser::loopBlockElements() {
  LoopBlockElementsContext *_localctx = _tracker.createInstance<LoopBlockElementsContext>(_ctx, getState());
  enterRule(_localctx, 136, TParser::RuleLoopBlockElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(859);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(855);
      sentence();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(856);
      sentence();
      setState(857);
      loopBlockElements();
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

//----------------- LoopBlockElementsLimitedContext ------------------------------------------------------------------

TParser::LoopBlockElementsLimitedContext::LoopBlockElementsLimitedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LoopBlockElementsLimitedContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::LoopBlockElementsLimitedContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::LoopBlockElementsContext* TParser::LoopBlockElementsLimitedContext::loopBlockElements() {
  return getRuleContext<TParser::LoopBlockElementsContext>(0);
}

TParser::ConditionalExpressionContext* TParser::LoopBlockElementsLimitedContext::conditionalExpression() {
  return getRuleContext<TParser::ConditionalExpressionContext>(0);
}

TParser::CallingFunctionContext* TParser::LoopBlockElementsLimitedContext::callingFunction() {
  return getRuleContext<TParser::CallingFunctionContext>(0);
}

TParser::LoopContext* TParser::LoopBlockElementsLimitedContext::loop() {
  return getRuleContext<TParser::LoopContext>(0);
}

TParser::RetContext* TParser::LoopBlockElementsLimitedContext::ret() {
  return getRuleContext<TParser::RetContext>(0);
}


size_t TParser::LoopBlockElementsLimitedContext::getRuleIndex() const {
  return TParser::RuleLoopBlockElementsLimited;
}

void TParser::LoopBlockElementsLimitedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopBlockElementsLimited(this);
}

void TParser::LoopBlockElementsLimitedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopBlockElementsLimited(this);
}


antlrcpp::Any TParser::LoopBlockElementsLimitedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLoopBlockElementsLimited(this);
  else
    return visitor->visitChildren(this);
}

TParser::LoopBlockElementsLimitedContext* TParser::loopBlockElementsLimited() {
  LoopBlockElementsLimitedContext *_localctx = _tracker.createInstance<LoopBlockElementsLimitedContext>(_ctx, getState());
  enterRule(_localctx, 138, TParser::RuleLoopBlockElementsLimited);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(871);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(861);
      match(TParser::OpenBlock);
      setState(862);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(863);
      match(TParser::OpenBlock);
      setState(864);
      loopBlockElements();
      setState(865);
      match(TParser::CloseBlock);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(867);
      conditionalExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(868);
      callingFunction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(869);
      loop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(870);
      ret();
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

//----------------- RetContext ------------------------------------------------------------------

TParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::RetContext::Ret() {
  return getToken(TParser::Ret, 0);
}

TParser::RetValuesContext* TParser::RetContext::retValues() {
  return getRuleContext<TParser::RetValuesContext>(0);
}

tree::TerminalNode* TParser::RetContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::RetContext::getRuleIndex() const {
  return TParser::RuleRet;
}

void TParser::RetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRet(this);
}

void TParser::RetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRet(this);
}


antlrcpp::Any TParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

TParser::RetContext* TParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 140, TParser::RuleRet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(873);
    match(TParser::Ret);
    setState(874);
    retValues();
    setState(875);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetValuesContext ------------------------------------------------------------------

TParser::RetValuesContext::RetValuesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::GeneralValueContext* TParser::RetValuesContext::generalValue() {
  return getRuleContext<TParser::GeneralValueContext>(0);
}

TParser::OperationElementsContext* TParser::RetValuesContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}


size_t TParser::RetValuesContext::getRuleIndex() const {
  return TParser::RuleRetValues;
}

void TParser::RetValuesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetValues(this);
}

void TParser::RetValuesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetValues(this);
}


antlrcpp::Any TParser::RetValuesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitRetValues(this);
  else
    return visitor->visitChildren(this);
}

TParser::RetValuesContext* TParser::retValues() {
  RetValuesContext *_localctx = _tracker.createInstance<RetValuesContext>(_ctx, getState());
  enterRule(_localctx, 142, TParser::RuleRetValues);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(879);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(877);
      generalValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(878);
      operationElements();
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

//----------------- FunctionsContext ------------------------------------------------------------------

TParser::FunctionsContext::FunctionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionsModesContext* TParser::FunctionsContext::functionsModes() {
  return getRuleContext<TParser::FunctionsModesContext>(0);
}

tree::TerminalNode* TParser::FunctionsContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::FunctionsContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::FunctionCodeBlockContext* TParser::FunctionsContext::functionCodeBlock() {
  return getRuleContext<TParser::FunctionCodeBlockContext>(0);
}

TParser::FunctionMethodsModesContext* TParser::FunctionsContext::functionMethodsModes() {
  return getRuleContext<TParser::FunctionMethodsModesContext>(0);
}

TParser::ConstructClassMethodContext* TParser::FunctionsContext::constructClassMethod() {
  return getRuleContext<TParser::ConstructClassMethodContext>(0);
}

TParser::InterfaceMethodContext* TParser::FunctionsContext::interfaceMethod() {
  return getRuleContext<TParser::InterfaceMethodContext>(0);
}

tree::TerminalNode* TParser::FunctionsContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::FunctionsContext::getRuleIndex() const {
  return TParser::RuleFunctions;
}

void TParser::FunctionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctions(this);
}

void TParser::FunctionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctions(this);
}


antlrcpp::Any TParser::FunctionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctions(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionsContext* TParser::functions() {
  FunctionsContext *_localctx = _tracker.createInstance<FunctionsContext>(_ctx, getState());
  enterRule(_localctx, 144, TParser::RuleFunctions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(911);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(881);
      functionsModes();
      setState(882);
      match(TParser::OpenBlock);
      setState(883);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(885);
      functionsModes();
      setState(886);
      match(TParser::OpenBlock);
      setState(887);
      functionCodeBlock();
      setState(888);
      match(TParser::CloseBlock);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(890);
      functionMethodsModes();
      setState(891);
      match(TParser::OpenBlock);
      setState(892);
      match(TParser::CloseBlock);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(894);
      functionMethodsModes();
      setState(895);
      match(TParser::OpenBlock);
      setState(896);
      functionCodeBlock();
      setState(897);
      match(TParser::CloseBlock);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(899);
      constructClassMethod();
      setState(900);
      match(TParser::OpenBlock);
      setState(901);
      match(TParser::CloseBlock);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(903);
      constructClassMethod();
      setState(904);
      match(TParser::OpenBlock);
      setState(905);
      functionCodeBlock();
      setState(906);
      match(TParser::CloseBlock);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(908);
      interfaceMethod();
      setState(909);
      match(TParser::End);
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

//----------------- FunctionsModesContext ------------------------------------------------------------------

TParser::FunctionsModesContext::FunctionsModesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionGeneralModesContext* TParser::FunctionsModesContext::functionGeneralModes() {
  return getRuleContext<TParser::FunctionGeneralModesContext>(0);
}


size_t TParser::FunctionsModesContext::getRuleIndex() const {
  return TParser::RuleFunctionsModes;
}

void TParser::FunctionsModesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionsModes(this);
}

void TParser::FunctionsModesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionsModes(this);
}


antlrcpp::Any TParser::FunctionsModesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionsModes(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionsModesContext* TParser::functionsModes() {
  FunctionsModesContext *_localctx = _tracker.createInstance<FunctionsModesContext>(_ctx, getState());
  enterRule(_localctx, 146, TParser::RuleFunctionsModes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(913);
    functionGeneralModes();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionGeneralModesContext ------------------------------------------------------------------

TParser::FunctionGeneralModesContext::FunctionGeneralModesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FunctionGeneralModesContext::Function() {
  return getToken(TParser::Function, 0);
}

tree::TerminalNode* TParser::FunctionGeneralModesContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::FunctionGeneralModesContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

tree::TerminalNode* TParser::FunctionGeneralModesContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}

tree::TerminalNode* TParser::FunctionGeneralModesContext::ArrowRight() {
  return getToken(TParser::ArrowRight, 0);
}

TParser::IdentifierRetContext* TParser::FunctionGeneralModesContext::identifierRet() {
  return getRuleContext<TParser::IdentifierRetContext>(0);
}

tree::TerminalNode* TParser::FunctionGeneralModesContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}

TParser::FunctionParamsContext* TParser::FunctionGeneralModesContext::functionParams() {
  return getRuleContext<TParser::FunctionParamsContext>(0);
}


size_t TParser::FunctionGeneralModesContext::getRuleIndex() const {
  return TParser::RuleFunctionGeneralModes;
}

void TParser::FunctionGeneralModesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionGeneralModes(this);
}

void TParser::FunctionGeneralModesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionGeneralModes(this);
}


antlrcpp::Any TParser::FunctionGeneralModesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionGeneralModes(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionGeneralModesContext* TParser::functionGeneralModes() {
  FunctionGeneralModesContext *_localctx = _tracker.createInstance<FunctionGeneralModesContext>(_ctx, getState());
  enterRule(_localctx, 148, TParser::RuleFunctionGeneralModes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(944);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(915);
      match(TParser::Function);
      setState(916);
      match(TParser::Identifier);
      setState(917);
      match(TParser::OpenOp);
      setState(918);
      match(TParser::CloseOp);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(919);
      match(TParser::Function);
      setState(920);
      match(TParser::Identifier);
      setState(921);
      match(TParser::OpenOp);
      setState(922);
      match(TParser::CloseOp);
      setState(923);
      match(TParser::ArrowRight);
      setState(926);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TParser::Identifier: {
          setState(924);
          identifierRet();
          break;
        }

        case TParser::TypeSpec: {
          setState(925);
          match(TParser::TypeSpec);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(928);
      match(TParser::Function);
      setState(929);
      match(TParser::Identifier);
      setState(930);
      match(TParser::OpenOp);
      setState(931);
      functionParams();
      setState(932);
      match(TParser::CloseOp);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(934);
      match(TParser::Function);
      setState(935);
      match(TParser::Identifier);
      setState(936);
      match(TParser::OpenOp);
      setState(937);
      functionParams();
      setState(938);
      match(TParser::CloseOp);
      setState(939);
      match(TParser::ArrowRight);
      setState(942);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TParser::Identifier: {
          setState(940);
          identifierRet();
          break;
        }

        case TParser::TypeSpec: {
          setState(941);
          match(TParser::TypeSpec);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
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

//----------------- IdentifierRetContext ------------------------------------------------------------------

TParser::IdentifierRetContext::IdentifierRetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::IdentifierRetContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}


size_t TParser::IdentifierRetContext::getRuleIndex() const {
  return TParser::RuleIdentifierRet;
}

void TParser::IdentifierRetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierRet(this);
}

void TParser::IdentifierRetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierRet(this);
}


antlrcpp::Any TParser::IdentifierRetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierRet(this);
  else
    return visitor->visitChildren(this);
}

TParser::IdentifierRetContext* TParser::identifierRet() {
  IdentifierRetContext *_localctx = _tracker.createInstance<IdentifierRetContext>(_ctx, getState());
  enterRule(_localctx, 150, TParser::RuleIdentifierRet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(946);
    match(TParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionMethodsModesContext ------------------------------------------------------------------

TParser::FunctionMethodsModesContext::FunctionMethodsModesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::MethodVisibilityContext* TParser::FunctionMethodsModesContext::methodVisibility() {
  return getRuleContext<TParser::MethodVisibilityContext>(0);
}

TParser::FunctionGeneralModesContext* TParser::FunctionMethodsModesContext::functionGeneralModes() {
  return getRuleContext<TParser::FunctionGeneralModesContext>(0);
}


size_t TParser::FunctionMethodsModesContext::getRuleIndex() const {
  return TParser::RuleFunctionMethodsModes;
}

void TParser::FunctionMethodsModesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionMethodsModes(this);
}

void TParser::FunctionMethodsModesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionMethodsModes(this);
}


antlrcpp::Any TParser::FunctionMethodsModesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionMethodsModes(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionMethodsModesContext* TParser::functionMethodsModes() {
  FunctionMethodsModesContext *_localctx = _tracker.createInstance<FunctionMethodsModesContext>(_ctx, getState());
  enterRule(_localctx, 152, TParser::RuleFunctionMethodsModes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(948);
    methodVisibility();
    setState(949);
    functionGeneralModes();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionMethodsModesBkpContext ------------------------------------------------------------------

TParser::FunctionMethodsModesBkpContext::FunctionMethodsModesBkpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::MethodPermContext* TParser::FunctionMethodsModesBkpContext::methodPerm() {
  return getRuleContext<TParser::MethodPermContext>(0);
}

TParser::FunctionGeneralModesContext* TParser::FunctionMethodsModesBkpContext::functionGeneralModes() {
  return getRuleContext<TParser::FunctionGeneralModesContext>(0);
}

tree::TerminalNode* TParser::FunctionMethodsModesBkpContext::Static() {
  return getToken(TParser::Static, 0);
}

tree::TerminalNode* TParser::FunctionMethodsModesBkpContext::Final() {
  return getToken(TParser::Final, 0);
}


size_t TParser::FunctionMethodsModesBkpContext::getRuleIndex() const {
  return TParser::RuleFunctionMethodsModesBkp;
}

void TParser::FunctionMethodsModesBkpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionMethodsModesBkp(this);
}

void TParser::FunctionMethodsModesBkpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionMethodsModesBkp(this);
}


antlrcpp::Any TParser::FunctionMethodsModesBkpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionMethodsModesBkp(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionMethodsModesBkpContext* TParser::functionMethodsModesBkp() {
  FunctionMethodsModesBkpContext *_localctx = _tracker.createInstance<FunctionMethodsModesBkpContext>(_ctx, getState());
  enterRule(_localctx, 154, TParser::RuleFunctionMethodsModesBkp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(974);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(951);
      methodPerm();
      setState(952);
      functionGeneralModes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(954);
      match(TParser::Static);
      setState(955);
      functionGeneralModes();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(956);
      methodPerm();
      setState(957);
      match(TParser::Static);
      setState(958);
      functionGeneralModes();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(960);
      match(TParser::Final);
      setState(961);
      methodPerm();
      setState(962);
      match(TParser::Static);
      setState(963);
      functionGeneralModes();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(965);
      match(TParser::Final);
      setState(966);
      methodPerm();
      setState(967);
      functionGeneralModes();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(969);
      match(TParser::Final);
      setState(970);
      functionGeneralModes();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(971);
      match(TParser::Final);
      setState(972);
      match(TParser::Static);
      setState(973);
      functionGeneralModes();
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

//----------------- MethodPermContext ------------------------------------------------------------------

TParser::MethodPermContext::MethodPermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::MethodPermContext::Pub() {
  return getToken(TParser::Pub, 0);
}

tree::TerminalNode* TParser::MethodPermContext::Pro() {
  return getToken(TParser::Pro, 0);
}

tree::TerminalNode* TParser::MethodPermContext::Priv() {
  return getToken(TParser::Priv, 0);
}


size_t TParser::MethodPermContext::getRuleIndex() const {
  return TParser::RuleMethodPerm;
}

void TParser::MethodPermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodPerm(this);
}

void TParser::MethodPermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodPerm(this);
}


antlrcpp::Any TParser::MethodPermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitMethodPerm(this);
  else
    return visitor->visitChildren(this);
}

TParser::MethodPermContext* TParser::methodPerm() {
  MethodPermContext *_localctx = _tracker.createInstance<MethodPermContext>(_ctx, getState());
  enterRule(_localctx, 156, TParser::RuleMethodPerm);
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
    setState(976);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::Pub)
      | (1ULL << TParser::Pro)
      | (1ULL << TParser::Priv))) != 0))) {
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

//----------------- VisibilityItemsContext ------------------------------------------------------------------

TParser::VisibilityItemsContext::VisibilityItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::VisibilityItemsContext::Pub() {
  return getToken(TParser::Pub, 0);
}

tree::TerminalNode* TParser::VisibilityItemsContext::Pro() {
  return getToken(TParser::Pro, 0);
}

tree::TerminalNode* TParser::VisibilityItemsContext::Priv() {
  return getToken(TParser::Priv, 0);
}

tree::TerminalNode* TParser::VisibilityItemsContext::Final() {
  return getToken(TParser::Final, 0);
}

tree::TerminalNode* TParser::VisibilityItemsContext::Static() {
  return getToken(TParser::Static, 0);
}


size_t TParser::VisibilityItemsContext::getRuleIndex() const {
  return TParser::RuleVisibilityItems;
}

void TParser::VisibilityItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVisibilityItems(this);
}

void TParser::VisibilityItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVisibilityItems(this);
}


antlrcpp::Any TParser::VisibilityItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVisibilityItems(this);
  else
    return visitor->visitChildren(this);
}

TParser::VisibilityItemsContext* TParser::visibilityItems() {
  VisibilityItemsContext *_localctx = _tracker.createInstance<VisibilityItemsContext>(_ctx, getState());
  enterRule(_localctx, 158, TParser::RuleVisibilityItems);
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
    setState(978);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::Pub)
      | (1ULL << TParser::Pro)
      | (1ULL << TParser::Priv)
      | (1ULL << TParser::Static)
      | (1ULL << TParser::Final))) != 0))) {
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

//----------------- MethodVisibilityContext ------------------------------------------------------------------

TParser::MethodVisibilityContext::MethodVisibilityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::VisibilityItemsContext* TParser::MethodVisibilityContext::visibilityItems() {
  return getRuleContext<TParser::VisibilityItemsContext>(0);
}

TParser::MethodVisibilityContext* TParser::MethodVisibilityContext::methodVisibility() {
  return getRuleContext<TParser::MethodVisibilityContext>(0);
}


size_t TParser::MethodVisibilityContext::getRuleIndex() const {
  return TParser::RuleMethodVisibility;
}

void TParser::MethodVisibilityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodVisibility(this);
}

void TParser::MethodVisibilityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodVisibility(this);
}


antlrcpp::Any TParser::MethodVisibilityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitMethodVisibility(this);
  else
    return visitor->visitChildren(this);
}

TParser::MethodVisibilityContext* TParser::methodVisibility() {
  MethodVisibilityContext *_localctx = _tracker.createInstance<MethodVisibilityContext>(_ctx, getState());
  enterRule(_localctx, 160, TParser::RuleMethodVisibility);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(984);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(980);
      visibilityItems();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(981);
      visibilityItems();
      setState(982);
      methodVisibility();
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

//----------------- ConstructClassMethodContext ------------------------------------------------------------------

TParser::ConstructClassMethodContext::ConstructClassMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ConstructClassMethodContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::ConstructClassMethodContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

tree::TerminalNode* TParser::ConstructClassMethodContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}

TParser::FunctionParamsContext* TParser::ConstructClassMethodContext::functionParams() {
  return getRuleContext<TParser::FunctionParamsContext>(0);
}


size_t TParser::ConstructClassMethodContext::getRuleIndex() const {
  return TParser::RuleConstructClassMethod;
}

void TParser::ConstructClassMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructClassMethod(this);
}

void TParser::ConstructClassMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructClassMethod(this);
}


antlrcpp::Any TParser::ConstructClassMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitConstructClassMethod(this);
  else
    return visitor->visitChildren(this);
}

TParser::ConstructClassMethodContext* TParser::constructClassMethod() {
  ConstructClassMethodContext *_localctx = _tracker.createInstance<ConstructClassMethodContext>(_ctx, getState());
  enterRule(_localctx, 162, TParser::RuleConstructClassMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(994);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(986);
      match(TParser::Identifier);
      setState(987);
      match(TParser::OpenOp);
      setState(988);
      match(TParser::CloseOp);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(989);
      match(TParser::Identifier);
      setState(990);
      match(TParser::OpenOp);
      setState(991);
      functionParams();
      setState(992);
      match(TParser::CloseOp);
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

//----------------- InterfaceMethodContext ------------------------------------------------------------------

TParser::InterfaceMethodContext::InterfaceMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionsModesContext* TParser::InterfaceMethodContext::functionsModes() {
  return getRuleContext<TParser::FunctionsModesContext>(0);
}

TParser::FunctionMethodsModesContext* TParser::InterfaceMethodContext::functionMethodsModes() {
  return getRuleContext<TParser::FunctionMethodsModesContext>(0);
}


size_t TParser::InterfaceMethodContext::getRuleIndex() const {
  return TParser::RuleInterfaceMethod;
}

void TParser::InterfaceMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethod(this);
}

void TParser::InterfaceMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethod(this);
}


antlrcpp::Any TParser::InterfaceMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMethod(this);
  else
    return visitor->visitChildren(this);
}

TParser::InterfaceMethodContext* TParser::interfaceMethod() {
  InterfaceMethodContext *_localctx = _tracker.createInstance<InterfaceMethodContext>(_ctx, getState());
  enterRule(_localctx, 164, TParser::RuleInterfaceMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(998);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::Function: {
        enterOuterAlt(_localctx, 1);
        setState(996);
        functionsModes();
        break;
      }

      case TParser::Pub:
      case TParser::Pro:
      case TParser::Priv:
      case TParser::Static:
      case TParser::Final: {
        enterOuterAlt(_localctx, 2);
        setState(997);
        functionMethodsModes();
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

//----------------- FunctionCodeBlockContext ------------------------------------------------------------------

TParser::FunctionCodeBlockContext::FunctionCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCodeBlockElementsContext* TParser::FunctionCodeBlockContext::functionCodeBlockElements() {
  return getRuleContext<TParser::FunctionCodeBlockElementsContext>(0);
}


size_t TParser::FunctionCodeBlockContext::getRuleIndex() const {
  return TParser::RuleFunctionCodeBlock;
}

void TParser::FunctionCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCodeBlock(this);
}

void TParser::FunctionCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCodeBlock(this);
}


antlrcpp::Any TParser::FunctionCodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCodeBlockContext* TParser::functionCodeBlock() {
  FunctionCodeBlockContext *_localctx = _tracker.createInstance<FunctionCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 166, TParser::RuleFunctionCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1000);
    functionCodeBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCodeBlockElementsContext ------------------------------------------------------------------

TParser::FunctionCodeBlockElementsContext::FunctionCodeBlockElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SentenceContext* TParser::FunctionCodeBlockElementsContext::sentence() {
  return getRuleContext<TParser::SentenceContext>(0);
}

TParser::FunctionCodeBlockElementsContext* TParser::FunctionCodeBlockElementsContext::functionCodeBlockElements() {
  return getRuleContext<TParser::FunctionCodeBlockElementsContext>(0);
}


size_t TParser::FunctionCodeBlockElementsContext::getRuleIndex() const {
  return TParser::RuleFunctionCodeBlockElements;
}

void TParser::FunctionCodeBlockElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCodeBlockElements(this);
}

void TParser::FunctionCodeBlockElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCodeBlockElements(this);
}


antlrcpp::Any TParser::FunctionCodeBlockElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCodeBlockElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionCodeBlockElementsContext* TParser::functionCodeBlockElements() {
  FunctionCodeBlockElementsContext *_localctx = _tracker.createInstance<FunctionCodeBlockElementsContext>(_ctx, getState());
  enterRule(_localctx, 168, TParser::RuleFunctionCodeBlockElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1006);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1002);
      sentence();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1003);
      sentence();
      setState(1004);
      functionCodeBlockElements();
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

//----------------- FunctionParamsContext ------------------------------------------------------------------

TParser::FunctionParamsContext::FunctionParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionParamsControlContext* TParser::FunctionParamsContext::functionParamsControl() {
  return getRuleContext<TParser::FunctionParamsControlContext>(0);
}


size_t TParser::FunctionParamsContext::getRuleIndex() const {
  return TParser::RuleFunctionParams;
}

void TParser::FunctionParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParams(this);
}

void TParser::FunctionParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParams(this);
}


antlrcpp::Any TParser::FunctionParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParams(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionParamsContext* TParser::functionParams() {
  FunctionParamsContext *_localctx = _tracker.createInstance<FunctionParamsContext>(_ctx, getState());
  enterRule(_localctx, 170, TParser::RuleFunctionParams);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1008);
    functionParamsControl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParamsControlContext ------------------------------------------------------------------

TParser::FunctionParamsControlContext::FunctionParamsControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionParamElementsContext* TParser::FunctionParamsControlContext::functionParamElements() {
  return getRuleContext<TParser::FunctionParamElementsContext>(0);
}

tree::TerminalNode* TParser::FunctionParamsControlContext::Separator() {
  return getToken(TParser::Separator, 0);
}

TParser::FunctionParamsControlContext* TParser::FunctionParamsControlContext::functionParamsControl() {
  return getRuleContext<TParser::FunctionParamsControlContext>(0);
}


size_t TParser::FunctionParamsControlContext::getRuleIndex() const {
  return TParser::RuleFunctionParamsControl;
}

void TParser::FunctionParamsControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParamsControl(this);
}

void TParser::FunctionParamsControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParamsControl(this);
}


antlrcpp::Any TParser::FunctionParamsControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParamsControl(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionParamsControlContext* TParser::functionParamsControl() {
  FunctionParamsControlContext *_localctx = _tracker.createInstance<FunctionParamsControlContext>(_ctx, getState());
  enterRule(_localctx, 172, TParser::RuleFunctionParamsControl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1015);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1010);
      functionParamElements();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1011);
      functionParamElements();
      setState(1012);
      match(TParser::Separator);
      setState(1013);
      functionParamsControl();
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

//----------------- FunctionParamElementsContext ------------------------------------------------------------------

TParser::FunctionParamElementsContext::FunctionParamElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FunctionParamElementsContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::FunctionParamElementsContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}


size_t TParser::FunctionParamElementsContext::getRuleIndex() const {
  return TParser::RuleFunctionParamElements;
}

void TParser::FunctionParamElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParamElements(this);
}

void TParser::FunctionParamElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParamElements(this);
}


antlrcpp::Any TParser::FunctionParamElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParamElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionParamElementsContext* TParser::functionParamElements() {
  FunctionParamElementsContext *_localctx = _tracker.createInstance<FunctionParamElementsContext>(_ctx, getState());
  enterRule(_localctx, 174, TParser::RuleFunctionParamElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1017);
    match(TParser::Identifier);
    setState(1018);
    match(TParser::TypeSpec);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OopGeneralContext ------------------------------------------------------------------

TParser::OopGeneralContext::OopGeneralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::InterfaceClassContext* TParser::OopGeneralContext::interfaceClass() {
  return getRuleContext<TParser::InterfaceClassContext>(0);
}

TParser::AbstractClassContext* TParser::OopGeneralContext::abstractClass() {
  return getRuleContext<TParser::AbstractClassContext>(0);
}

TParser::ClassDefinationContext* TParser::OopGeneralContext::classDefination() {
  return getRuleContext<TParser::ClassDefinationContext>(0);
}

TParser::AnonymousClassContext* TParser::OopGeneralContext::anonymousClass() {
  return getRuleContext<TParser::AnonymousClassContext>(0);
}


size_t TParser::OopGeneralContext::getRuleIndex() const {
  return TParser::RuleOopGeneral;
}

void TParser::OopGeneralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOopGeneral(this);
}

void TParser::OopGeneralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOopGeneral(this);
}


antlrcpp::Any TParser::OopGeneralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitOopGeneral(this);
  else
    return visitor->visitChildren(this);
}

TParser::OopGeneralContext* TParser::oopGeneral() {
  OopGeneralContext *_localctx = _tracker.createInstance<OopGeneralContext>(_ctx, getState());
  enterRule(_localctx, 176, TParser::RuleOopGeneral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1024);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::Interface: {
        enterOuterAlt(_localctx, 1);
        setState(1020);
        interfaceClass();
        break;
      }

      case TParser::Abstract: {
        enterOuterAlt(_localctx, 2);
        setState(1021);
        abstractClass();
        break;
      }

      case TParser::Final:
      case TParser::Class: {
        enterOuterAlt(_localctx, 3);
        setState(1022);
        classDefination();
        break;
      }

      case TParser::New: {
        enterOuterAlt(_localctx, 4);
        setState(1023);
        anonymousClass();
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

//----------------- InterfaceClassContext ------------------------------------------------------------------

TParser::InterfaceClassContext::InterfaceClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::InterfaceClassDefinitionContext* TParser::InterfaceClassContext::interfaceClassDefinition() {
  return getRuleContext<TParser::InterfaceClassDefinitionContext>(0);
}


size_t TParser::InterfaceClassContext::getRuleIndex() const {
  return TParser::RuleInterfaceClass;
}

void TParser::InterfaceClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceClass(this);
}

void TParser::InterfaceClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceClass(this);
}


antlrcpp::Any TParser::InterfaceClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceClass(this);
  else
    return visitor->visitChildren(this);
}

TParser::InterfaceClassContext* TParser::interfaceClass() {
  InterfaceClassContext *_localctx = _tracker.createInstance<InterfaceClassContext>(_ctx, getState());
  enterRule(_localctx, 178, TParser::RuleInterfaceClass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1026);
    interfaceClassDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceClassDefinitionContext ------------------------------------------------------------------

TParser::InterfaceClassDefinitionContext::InterfaceClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::InterfaceClassDefinitionContext::Interface() {
  return getToken(TParser::Interface, 0);
}

tree::TerminalNode* TParser::InterfaceClassDefinitionContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::InterfaceClassDefinitionContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::InterfaceClassDefinitionContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::InterfaceCodeBlockContext* TParser::InterfaceClassDefinitionContext::interfaceCodeBlock() {
  return getRuleContext<TParser::InterfaceCodeBlockContext>(0);
}

tree::TerminalNode* TParser::InterfaceClassDefinitionContext::Extends() {
  return getToken(TParser::Extends, 0);
}

TParser::IdentifierBContext* TParser::InterfaceClassDefinitionContext::identifierB() {
  return getRuleContext<TParser::IdentifierBContext>(0);
}


size_t TParser::InterfaceClassDefinitionContext::getRuleIndex() const {
  return TParser::RuleInterfaceClassDefinition;
}

void TParser::InterfaceClassDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceClassDefinition(this);
}

void TParser::InterfaceClassDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceClassDefinition(this);
}


antlrcpp::Any TParser::InterfaceClassDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceClassDefinition(this);
  else
    return visitor->visitChildren(this);
}

TParser::InterfaceClassDefinitionContext* TParser::interfaceClassDefinition() {
  InterfaceClassDefinitionContext *_localctx = _tracker.createInstance<InterfaceClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 180, TParser::RuleInterfaceClassDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1053);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1028);
      match(TParser::Interface);
      setState(1029);
      match(TParser::Identifier);
      setState(1030);
      match(TParser::OpenBlock);
      setState(1031);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1032);
      match(TParser::Interface);
      setState(1033);
      match(TParser::Identifier);
      setState(1034);
      match(TParser::OpenBlock);
      setState(1035);
      interfaceCodeBlock();
      setState(1036);
      match(TParser::CloseBlock);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1038);
      match(TParser::Interface);
      setState(1039);
      match(TParser::Identifier);
      setState(1040);
      match(TParser::Extends);
      setState(1041);
      identifierB();
      setState(1042);
      match(TParser::OpenBlock);
      setState(1043);
      match(TParser::CloseBlock);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1045);
      match(TParser::Interface);
      setState(1046);
      match(TParser::Identifier);
      setState(1047);
      match(TParser::Extends);
      setState(1048);
      identifierB();
      setState(1049);
      match(TParser::OpenBlock);
      setState(1050);
      interfaceCodeBlock();
      setState(1051);
      match(TParser::CloseBlock);
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

//----------------- InterfaceCodeBlockContext ------------------------------------------------------------------

TParser::InterfaceCodeBlockContext::InterfaceCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCodeBlockElementsContext* TParser::InterfaceCodeBlockContext::functionCodeBlockElements() {
  return getRuleContext<TParser::FunctionCodeBlockElementsContext>(0);
}


size_t TParser::InterfaceCodeBlockContext::getRuleIndex() const {
  return TParser::RuleInterfaceCodeBlock;
}

void TParser::InterfaceCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceCodeBlock(this);
}

void TParser::InterfaceCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceCodeBlock(this);
}


antlrcpp::Any TParser::InterfaceCodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::InterfaceCodeBlockContext* TParser::interfaceCodeBlock() {
  InterfaceCodeBlockContext *_localctx = _tracker.createInstance<InterfaceCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 182, TParser::RuleInterfaceCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1055);
    functionCodeBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractClassContext ------------------------------------------------------------------

TParser::AbstractClassContext::AbstractClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::AbstractClassDefinitionContext* TParser::AbstractClassContext::abstractClassDefinition() {
  return getRuleContext<TParser::AbstractClassDefinitionContext>(0);
}


size_t TParser::AbstractClassContext::getRuleIndex() const {
  return TParser::RuleAbstractClass;
}

void TParser::AbstractClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractClass(this);
}

void TParser::AbstractClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractClass(this);
}


antlrcpp::Any TParser::AbstractClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAbstractClass(this);
  else
    return visitor->visitChildren(this);
}

TParser::AbstractClassContext* TParser::abstractClass() {
  AbstractClassContext *_localctx = _tracker.createInstance<AbstractClassContext>(_ctx, getState());
  enterRule(_localctx, 184, TParser::RuleAbstractClass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1057);
    abstractClassDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractClassDefinitionContext ------------------------------------------------------------------

TParser::AbstractClassDefinitionContext::AbstractClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::AbstractClassDefinitionContext::Abstract() {
  return getToken(TParser::Abstract, 0);
}

tree::TerminalNode* TParser::AbstractClassDefinitionContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::AbstractClassDefinitionContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::AbstractClassDefinitionContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::AbstractCodeBlockContext* TParser::AbstractClassDefinitionContext::abstractCodeBlock() {
  return getRuleContext<TParser::AbstractCodeBlockContext>(0);
}

tree::TerminalNode* TParser::AbstractClassDefinitionContext::Extends() {
  return getToken(TParser::Extends, 0);
}

TParser::IdentifierBContext* TParser::AbstractClassDefinitionContext::identifierB() {
  return getRuleContext<TParser::IdentifierBContext>(0);
}


size_t TParser::AbstractClassDefinitionContext::getRuleIndex() const {
  return TParser::RuleAbstractClassDefinition;
}

void TParser::AbstractClassDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractClassDefinition(this);
}

void TParser::AbstractClassDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractClassDefinition(this);
}


antlrcpp::Any TParser::AbstractClassDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAbstractClassDefinition(this);
  else
    return visitor->visitChildren(this);
}

TParser::AbstractClassDefinitionContext* TParser::abstractClassDefinition() {
  AbstractClassDefinitionContext *_localctx = _tracker.createInstance<AbstractClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, TParser::RuleAbstractClassDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1084);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1059);
      match(TParser::Abstract);
      setState(1060);
      match(TParser::Identifier);
      setState(1061);
      match(TParser::OpenBlock);
      setState(1062);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1063);
      match(TParser::Abstract);
      setState(1064);
      match(TParser::Identifier);
      setState(1065);
      match(TParser::OpenBlock);
      setState(1066);
      abstractCodeBlock();
      setState(1067);
      match(TParser::CloseBlock);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1069);
      match(TParser::Abstract);
      setState(1070);
      match(TParser::Identifier);
      setState(1071);
      match(TParser::Extends);
      setState(1072);
      identifierB();
      setState(1073);
      match(TParser::OpenBlock);
      setState(1074);
      match(TParser::CloseBlock);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1076);
      match(TParser::Abstract);
      setState(1077);
      match(TParser::Identifier);
      setState(1078);
      match(TParser::Extends);
      setState(1079);
      identifierB();
      setState(1080);
      match(TParser::OpenBlock);
      setState(1081);
      abstractCodeBlock();
      setState(1082);
      match(TParser::CloseBlock);
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

//----------------- AbstractCodeBlockContext ------------------------------------------------------------------

TParser::AbstractCodeBlockContext::AbstractCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCodeBlockElementsContext* TParser::AbstractCodeBlockContext::functionCodeBlockElements() {
  return getRuleContext<TParser::FunctionCodeBlockElementsContext>(0);
}


size_t TParser::AbstractCodeBlockContext::getRuleIndex() const {
  return TParser::RuleAbstractCodeBlock;
}

void TParser::AbstractCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractCodeBlock(this);
}

void TParser::AbstractCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractCodeBlock(this);
}


antlrcpp::Any TParser::AbstractCodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAbstractCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::AbstractCodeBlockContext* TParser::abstractCodeBlock() {
  AbstractCodeBlockContext *_localctx = _tracker.createInstance<AbstractCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 188, TParser::RuleAbstractCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1086);
    functionCodeBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefinationContext ------------------------------------------------------------------

TParser::ClassDefinationContext::ClassDefinationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ClassModesContext* TParser::ClassDefinationContext::classModes() {
  return getRuleContext<TParser::ClassModesContext>(0);
}

tree::TerminalNode* TParser::ClassDefinationContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::ClassDefinationContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::ClassCodeBlockContext* TParser::ClassDefinationContext::classCodeBlock() {
  return getRuleContext<TParser::ClassCodeBlockContext>(0);
}


size_t TParser::ClassDefinationContext::getRuleIndex() const {
  return TParser::RuleClassDefination;
}

void TParser::ClassDefinationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDefination(this);
}

void TParser::ClassDefinationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDefination(this);
}


antlrcpp::Any TParser::ClassDefinationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitClassDefination(this);
  else
    return visitor->visitChildren(this);
}

TParser::ClassDefinationContext* TParser::classDefination() {
  ClassDefinationContext *_localctx = _tracker.createInstance<ClassDefinationContext>(_ctx, getState());
  enterRule(_localctx, 190, TParser::RuleClassDefination);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1097);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1088);
      classModes();
      setState(1089);
      match(TParser::OpenBlock);
      setState(1090);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1092);
      classModes();
      setState(1093);
      match(TParser::OpenBlock);
      setState(1094);
      classCodeBlock();
      setState(1095);
      match(TParser::CloseBlock);
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

//----------------- ClassCodeBlockContext ------------------------------------------------------------------

TParser::ClassCodeBlockContext::ClassCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionCodeBlockElementsContext* TParser::ClassCodeBlockContext::functionCodeBlockElements() {
  return getRuleContext<TParser::FunctionCodeBlockElementsContext>(0);
}


size_t TParser::ClassCodeBlockContext::getRuleIndex() const {
  return TParser::RuleClassCodeBlock;
}

void TParser::ClassCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassCodeBlock(this);
}

void TParser::ClassCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassCodeBlock(this);
}


antlrcpp::Any TParser::ClassCodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitClassCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

TParser::ClassCodeBlockContext* TParser::classCodeBlock() {
  ClassCodeBlockContext *_localctx = _tracker.createInstance<ClassCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 192, TParser::RuleClassCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1099);
    functionCodeBlockElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassModesContext ------------------------------------------------------------------

TParser::ClassModesContext::ClassModesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ClassModesContext::Class() {
  return getToken(TParser::Class, 0);
}

tree::TerminalNode* TParser::ClassModesContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::ClassModesContext::Extends() {
  return getToken(TParser::Extends, 0);
}

TParser::IdentifierBContext* TParser::ClassModesContext::identifierB() {
  return getRuleContext<TParser::IdentifierBContext>(0);
}

tree::TerminalNode* TParser::ClassModesContext::Implements() {
  return getToken(TParser::Implements, 0);
}

TParser::IdentifierCContext* TParser::ClassModesContext::identifierC() {
  return getRuleContext<TParser::IdentifierCContext>(0);
}

tree::TerminalNode* TParser::ClassModesContext::Final() {
  return getToken(TParser::Final, 0);
}


size_t TParser::ClassModesContext::getRuleIndex() const {
  return TParser::RuleClassModes;
}

void TParser::ClassModesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassModes(this);
}

void TParser::ClassModesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassModes(this);
}


antlrcpp::Any TParser::ClassModesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitClassModes(this);
  else
    return visitor->visitChildren(this);
}

TParser::ClassModesContext* TParser::classModes() {
  ClassModesContext *_localctx = _tracker.createInstance<ClassModesContext>(_ctx, getState());
  enterRule(_localctx, 194, TParser::RuleClassModes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1139);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1101);
      match(TParser::Class);
      setState(1102);
      match(TParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1103);
      match(TParser::Class);
      setState(1104);
      match(TParser::Identifier);
      setState(1105);
      match(TParser::Extends);
      setState(1106);
      identifierB();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1107);
      match(TParser::Class);
      setState(1108);
      match(TParser::Identifier);
      setState(1109);
      match(TParser::Implements);
      setState(1110);
      identifierB();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1111);
      match(TParser::Class);
      setState(1112);
      match(TParser::Identifier);
      setState(1113);
      match(TParser::Extends);
      setState(1114);
      identifierB();
      setState(1115);
      match(TParser::Implements);
      setState(1116);
      identifierC();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1118);
      match(TParser::Final);
      setState(1119);
      match(TParser::Class);
      setState(1120);
      match(TParser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1121);
      match(TParser::Final);
      setState(1122);
      match(TParser::Class);
      setState(1123);
      match(TParser::Identifier);
      setState(1124);
      match(TParser::Extends);
      setState(1125);
      identifierB();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1126);
      match(TParser::Final);
      setState(1127);
      match(TParser::Class);
      setState(1128);
      match(TParser::Identifier);
      setState(1129);
      match(TParser::Implements);
      setState(1130);
      identifierB();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1131);
      match(TParser::Final);
      setState(1132);
      match(TParser::Class);
      setState(1133);
      match(TParser::Identifier);
      setState(1134);
      match(TParser::Extends);
      setState(1135);
      identifierB();
      setState(1136);
      match(TParser::Implements);
      setState(1137);
      identifierC();
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

//----------------- IdentifierCContext ------------------------------------------------------------------

TParser::IdentifierCContext::IdentifierCContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::IdentifierCContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}


size_t TParser::IdentifierCContext::getRuleIndex() const {
  return TParser::RuleIdentifierC;
}

void TParser::IdentifierCContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierC(this);
}

void TParser::IdentifierCContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierC(this);
}


antlrcpp::Any TParser::IdentifierCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierC(this);
  else
    return visitor->visitChildren(this);
}

TParser::IdentifierCContext* TParser::identifierC() {
  IdentifierCContext *_localctx = _tracker.createInstance<IdentifierCContext>(_ctx, getState());
  enterRule(_localctx, 196, TParser::RuleIdentifierC);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1141);
    match(TParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousClassCallContext ------------------------------------------------------------------

TParser::AnonymousClassCallContext::AnonymousClassCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::AnonymousClassCallExprContext* TParser::AnonymousClassCallContext::anonymousClassCallExpr() {
  return getRuleContext<TParser::AnonymousClassCallExprContext>(0);
}

tree::TerminalNode* TParser::AnonymousClassCallContext::End() {
  return getToken(TParser::End, 0);
}


size_t TParser::AnonymousClassCallContext::getRuleIndex() const {
  return TParser::RuleAnonymousClassCall;
}

void TParser::AnonymousClassCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousClassCall(this);
}

void TParser::AnonymousClassCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousClassCall(this);
}


antlrcpp::Any TParser::AnonymousClassCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAnonymousClassCall(this);
  else
    return visitor->visitChildren(this);
}

TParser::AnonymousClassCallContext* TParser::anonymousClassCall() {
  AnonymousClassCallContext *_localctx = _tracker.createInstance<AnonymousClassCallContext>(_ctx, getState());
  enterRule(_localctx, 198, TParser::RuleAnonymousClassCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1143);
    anonymousClassCallExpr();
    setState(1144);
    match(TParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousClassCallExprContext ------------------------------------------------------------------

TParser::AnonymousClassCallExprContext::AnonymousClassCallExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::AnonymousClassCallExprContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

TParser::AnonymousClassContext* TParser::AnonymousClassCallExprContext::anonymousClass() {
  return getRuleContext<TParser::AnonymousClassContext>(0);
}

tree::TerminalNode* TParser::AnonymousClassCallExprContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}

tree::TerminalNode* TParser::AnonymousClassCallExprContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::FunctionCallCascadingContext* TParser::AnonymousClassCallExprContext::functionCallCascading() {
  return getRuleContext<TParser::FunctionCallCascadingContext>(0);
}


size_t TParser::AnonymousClassCallExprContext::getRuleIndex() const {
  return TParser::RuleAnonymousClassCallExpr;
}

void TParser::AnonymousClassCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousClassCallExpr(this);
}

void TParser::AnonymousClassCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousClassCallExpr(this);
}


antlrcpp::Any TParser::AnonymousClassCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAnonymousClassCallExpr(this);
  else
    return visitor->visitChildren(this);
}

TParser::AnonymousClassCallExprContext* TParser::anonymousClassCallExpr() {
  AnonymousClassCallExprContext *_localctx = _tracker.createInstance<AnonymousClassCallExprContext>(_ctx, getState());
  enterRule(_localctx, 200, TParser::RuleAnonymousClassCallExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1146);
    match(TParser::OpenOp);
    setState(1147);
    anonymousClass();
    setState(1148);
    match(TParser::CloseOp);
    setState(1149);
    match(TParser::Point);
    setState(1150);
    functionCallCascading();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousClassContext ------------------------------------------------------------------

TParser::AnonymousClassContext::AnonymousClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::AnonymousClassContext::New() {
  return getToken(TParser::New, 0);
}

tree::TerminalNode* TParser::AnonymousClassContext::Class() {
  return getToken(TParser::Class, 0);
}

tree::TerminalNode* TParser::AnonymousClassContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::AnonymousClassContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::AnonymousClassElementsContext* TParser::AnonymousClassContext::anonymousClassElements() {
  return getRuleContext<TParser::AnonymousClassElementsContext>(0);
}


size_t TParser::AnonymousClassContext::getRuleIndex() const {
  return TParser::RuleAnonymousClass;
}

void TParser::AnonymousClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousClass(this);
}

void TParser::AnonymousClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousClass(this);
}


antlrcpp::Any TParser::AnonymousClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAnonymousClass(this);
  else
    return visitor->visitChildren(this);
}

TParser::AnonymousClassContext* TParser::anonymousClass() {
  AnonymousClassContext *_localctx = _tracker.createInstance<AnonymousClassContext>(_ctx, getState());
  enterRule(_localctx, 202, TParser::RuleAnonymousClass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1152);
      match(TParser::New);
      setState(1153);
      match(TParser::Class);
      setState(1154);
      match(TParser::OpenBlock);
      setState(1155);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1156);
      match(TParser::New);
      setState(1157);
      match(TParser::Class);
      setState(1158);
      match(TParser::OpenBlock);
      setState(1159);
      anonymousClassElements();
      setState(1160);
      match(TParser::CloseBlock);
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

//----------------- AnonymousClassElementsContext ------------------------------------------------------------------

TParser::AnonymousClassElementsContext::AnonymousClassElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SentenceContext* TParser::AnonymousClassElementsContext::sentence() {
  return getRuleContext<TParser::SentenceContext>(0);
}

TParser::AnonymousClassElementsContext* TParser::AnonymousClassElementsContext::anonymousClassElements() {
  return getRuleContext<TParser::AnonymousClassElementsContext>(0);
}


size_t TParser::AnonymousClassElementsContext::getRuleIndex() const {
  return TParser::RuleAnonymousClassElements;
}

void TParser::AnonymousClassElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousClassElements(this);
}

void TParser::AnonymousClassElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousClassElements(this);
}


antlrcpp::Any TParser::AnonymousClassElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAnonymousClassElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::AnonymousClassElementsContext* TParser::anonymousClassElements() {
  AnonymousClassElementsContext *_localctx = _tracker.createInstance<AnonymousClassElementsContext>(_ctx, getState());
  enterRule(_localctx, 204, TParser::RuleAnonymousClassElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1164);
      sentence();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1165);
      sentence();
      setState(1166);
      anonymousClassElements();
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

//----------------- ArrayAccessElementsContext ------------------------------------------------------------------

TParser::ArrayAccessElementsContext::ArrayAccessElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ArrayAccessElementsItemsContext* TParser::ArrayAccessElementsContext::arrayAccessElementsItems() {
  return getRuleContext<TParser::ArrayAccessElementsItemsContext>(0);
}

TParser::ArrayAccessElementsContext* TParser::ArrayAccessElementsContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}


size_t TParser::ArrayAccessElementsContext::getRuleIndex() const {
  return TParser::RuleArrayAccessElements;
}

void TParser::ArrayAccessElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessElements(this);
}

void TParser::ArrayAccessElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessElements(this);
}


antlrcpp::Any TParser::ArrayAccessElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitArrayAccessElements(this);
  else
    return visitor->visitChildren(this);
}

TParser::ArrayAccessElementsContext* TParser::arrayAccessElements() {
  ArrayAccessElementsContext *_localctx = _tracker.createInstance<ArrayAccessElementsContext>(_ctx, getState());
  enterRule(_localctx, 206, TParser::RuleArrayAccessElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1170);
      arrayAccessElementsItems();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1171);
      arrayAccessElementsItems();
      setState(1172);
      arrayAccessElements();
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

//----------------- ArrayAccessElementsItemsContext ------------------------------------------------------------------

TParser::ArrayAccessElementsItemsContext::ArrayAccessElementsItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ArrayAccessElementsItemsContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::ArrayAccessElementsItemsContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::AccessBlockArContext* TParser::ArrayAccessElementsItemsContext::accessBlockAr() {
  return getRuleContext<TParser::AccessBlockArContext>(0);
}

TParser::FirstIncDecContext* TParser::ArrayAccessElementsItemsContext::firstIncDec() {
  return getRuleContext<TParser::FirstIncDecContext>(0);
}

TParser::LastIncDecContext* TParser::ArrayAccessElementsItemsContext::lastIncDec() {
  return getRuleContext<TParser::LastIncDecContext>(0);
}


size_t TParser::ArrayAccessElementsItemsContext::getRuleIndex() const {
  return TParser::RuleArrayAccessElementsItems;
}

void TParser::ArrayAccessElementsItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessElementsItems(this);
}

void TParser::ArrayAccessElementsItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessElementsItems(this);
}


antlrcpp::Any TParser::ArrayAccessElementsItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitArrayAccessElementsItems(this);
  else
    return visitor->visitChildren(this);
}

TParser::ArrayAccessElementsItemsContext* TParser::arrayAccessElementsItems() {
  ArrayAccessElementsItemsContext *_localctx = _tracker.createInstance<ArrayAccessElementsItemsContext>(_ctx, getState());
  enterRule(_localctx, 208, TParser::RuleArrayAccessElementsItems);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1176);
      match(TParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1177);
      match(TParser::Identifier);
      setState(1178);
      match(TParser::Point);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1179);
      match(TParser::Identifier);
      setState(1180);
      accessBlockAr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1181);
      match(TParser::Identifier);
      setState(1182);
      accessBlockAr();
      setState(1183);
      match(TParser::Point);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1185);
      firstIncDec();
      setState(1186);
      match(TParser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1188);
      match(TParser::Identifier);
      setState(1189);
      match(TParser::Point);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1190);
      firstIncDec();
      setState(1191);
      match(TParser::Identifier);
      setState(1192);
      accessBlockAr();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1194);
      match(TParser::Identifier);
      setState(1195);
      accessBlockAr();
      setState(1196);
      match(TParser::Point);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1198);
      match(TParser::Identifier);
      setState(1199);
      lastIncDec();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1200);
      match(TParser::Identifier);
      setState(1201);
      match(TParser::Point);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1202);
      match(TParser::Identifier);
      setState(1203);
      accessBlockAr();
      setState(1204);
      lastIncDec();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1206);
      match(TParser::Identifier);
      setState(1207);
      accessBlockAr();
      setState(1208);
      match(TParser::Point);
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

//----------------- AccessBlockArContext ------------------------------------------------------------------

TParser::AccessBlockArContext::AccessBlockArContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::AccessBlockArContext::OpenArIndex() {
  return getToken(TParser::OpenArIndex, 0);
}

TParser::ArrayIndexAccessContext* TParser::AccessBlockArContext::arrayIndexAccess() {
  return getRuleContext<TParser::ArrayIndexAccessContext>(0);
}

tree::TerminalNode* TParser::AccessBlockArContext::CloseArIndex() {
  return getToken(TParser::CloseArIndex, 0);
}

TParser::AccessBlockArContext* TParser::AccessBlockArContext::accessBlockAr() {
  return getRuleContext<TParser::AccessBlockArContext>(0);
}


size_t TParser::AccessBlockArContext::getRuleIndex() const {
  return TParser::RuleAccessBlockAr;
}

void TParser::AccessBlockArContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessBlockAr(this);
}

void TParser::AccessBlockArContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessBlockAr(this);
}


antlrcpp::Any TParser::AccessBlockArContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAccessBlockAr(this);
  else
    return visitor->visitChildren(this);
}

TParser::AccessBlockArContext* TParser::accessBlockAr() {
  AccessBlockArContext *_localctx = _tracker.createInstance<AccessBlockArContext>(_ctx, getState());
  enterRule(_localctx, 210, TParser::RuleAccessBlockAr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1221);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1212);
      match(TParser::OpenArIndex);
      setState(1213);
      arrayIndexAccess();
      setState(1214);
      match(TParser::CloseArIndex);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1216);
      match(TParser::OpenArIndex);
      setState(1217);
      arrayIndexAccess();
      setState(1218);
      match(TParser::CloseArIndex);
      setState(1219);
      accessBlockAr();
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

//----------------- ArrayIndexAccessContext ------------------------------------------------------------------

TParser::ArrayIndexAccessContext::ArrayIndexAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::OperationElementsContext* TParser::ArrayIndexAccessContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}


size_t TParser::ArrayIndexAccessContext::getRuleIndex() const {
  return TParser::RuleArrayIndexAccess;
}

void TParser::ArrayIndexAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayIndexAccess(this);
}

void TParser::ArrayIndexAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayIndexAccess(this);
}


antlrcpp::Any TParser::ArrayIndexAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitArrayIndexAccess(this);
  else
    return visitor->visitChildren(this);
}

TParser::ArrayIndexAccessContext* TParser::arrayIndexAccess() {
  ArrayIndexAccessContext *_localctx = _tracker.createInstance<ArrayIndexAccessContext>(_ctx, getState());
  enterRule(_localctx, 212, TParser::RuleArrayIndexAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1223);
    operationElements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousFunctionContext ------------------------------------------------------------------

TParser::AnonymousFunctionContext::AnonymousFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TParser::AnonymousFunctionContext::OpenOp() {
  return getTokens(TParser::OpenOp);
}

tree::TerminalNode* TParser::AnonymousFunctionContext::OpenOp(size_t i) {
  return getToken(TParser::OpenOp, i);
}

TParser::AnFnItemsContext* TParser::AnonymousFunctionContext::anFnItems() {
  return getRuleContext<TParser::AnFnItemsContext>(0);
}

std::vector<tree::TerminalNode *> TParser::AnonymousFunctionContext::CloseOp() {
  return getTokens(TParser::CloseOp);
}

tree::TerminalNode* TParser::AnonymousFunctionContext::CloseOp(size_t i) {
  return getToken(TParser::CloseOp, i);
}

TParser::OperationElementsContext* TParser::AnonymousFunctionContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}


size_t TParser::AnonymousFunctionContext::getRuleIndex() const {
  return TParser::RuleAnonymousFunction;
}

void TParser::AnonymousFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousFunction(this);
}

void TParser::AnonymousFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousFunction(this);
}


antlrcpp::Any TParser::AnonymousFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAnonymousFunction(this);
  else
    return visitor->visitChildren(this);
}

TParser::AnonymousFunctionContext* TParser::anonymousFunction() {
  AnonymousFunctionContext *_localctx = _tracker.createInstance<AnonymousFunctionContext>(_ctx, getState());
  enterRule(_localctx, 214, TParser::RuleAnonymousFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1225);
      match(TParser::OpenOp);
      setState(1226);
      anFnItems();
      setState(1227);
      match(TParser::CloseOp);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1229);
      match(TParser::OpenOp);
      setState(1230);
      anFnItems();
      setState(1231);
      match(TParser::CloseOp);
      setState(1232);
      match(TParser::OpenOp);
      setState(1233);
      match(TParser::CloseOp);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1235);
      match(TParser::OpenOp);
      setState(1236);
      anFnItems();
      setState(1237);
      match(TParser::CloseOp);
      setState(1238);
      match(TParser::OpenOp);
      setState(1239);
      operationElements();
      setState(1240);
      match(TParser::CloseOp);
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

//----------------- AnFnItemsContext ------------------------------------------------------------------

TParser::AnFnItemsContext::AnFnItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::FunctionsModesFnContext* TParser::AnFnItemsContext::functionsModesFn() {
  return getRuleContext<TParser::FunctionsModesFnContext>(0);
}

tree::TerminalNode* TParser::AnFnItemsContext::OpenBlock() {
  return getToken(TParser::OpenBlock, 0);
}

tree::TerminalNode* TParser::AnFnItemsContext::CloseBlock() {
  return getToken(TParser::CloseBlock, 0);
}

TParser::FunctionCodeBlockContext* TParser::AnFnItemsContext::functionCodeBlock() {
  return getRuleContext<TParser::FunctionCodeBlockContext>(0);
}


size_t TParser::AnFnItemsContext::getRuleIndex() const {
  return TParser::RuleAnFnItems;
}

void TParser::AnFnItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnFnItems(this);
}

void TParser::AnFnItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnFnItems(this);
}


antlrcpp::Any TParser::AnFnItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAnFnItems(this);
  else
    return visitor->visitChildren(this);
}

TParser::AnFnItemsContext* TParser::anFnItems() {
  AnFnItemsContext *_localctx = _tracker.createInstance<AnFnItemsContext>(_ctx, getState());
  enterRule(_localctx, 216, TParser::RuleAnFnItems);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1244);
      functionsModesFn();
      setState(1245);
      match(TParser::OpenBlock);
      setState(1246);
      match(TParser::CloseBlock);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1248);
      functionsModesFn();
      setState(1249);
      match(TParser::OpenBlock);
      setState(1250);
      functionCodeBlock();
      setState(1251);
      match(TParser::CloseBlock);
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

//----------------- FunctionsModesFnContext ------------------------------------------------------------------

TParser::FunctionsModesFnContext::FunctionsModesFnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::FunctionsModesFnContext::Function() {
  return getToken(TParser::Function, 0);
}

tree::TerminalNode* TParser::FunctionsModesFnContext::OpenOp() {
  return getToken(TParser::OpenOp, 0);
}

tree::TerminalNode* TParser::FunctionsModesFnContext::CloseOp() {
  return getToken(TParser::CloseOp, 0);
}

tree::TerminalNode* TParser::FunctionsModesFnContext::ArrowRight() {
  return getToken(TParser::ArrowRight, 0);
}

TParser::IdentifierRetContext* TParser::FunctionsModesFnContext::identifierRet() {
  return getRuleContext<TParser::IdentifierRetContext>(0);
}

tree::TerminalNode* TParser::FunctionsModesFnContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}

TParser::FunctionParamsContext* TParser::FunctionsModesFnContext::functionParams() {
  return getRuleContext<TParser::FunctionParamsContext>(0);
}


size_t TParser::FunctionsModesFnContext::getRuleIndex() const {
  return TParser::RuleFunctionsModesFn;
}

void TParser::FunctionsModesFnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionsModesFn(this);
}

void TParser::FunctionsModesFnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionsModesFn(this);
}


antlrcpp::Any TParser::FunctionsModesFnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFunctionsModesFn(this);
  else
    return visitor->visitChildren(this);
}

TParser::FunctionsModesFnContext* TParser::functionsModesFn() {
  FunctionsModesFnContext *_localctx = _tracker.createInstance<FunctionsModesFnContext>(_ctx, getState());
  enterRule(_localctx, 218, TParser::RuleFunctionsModesFn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1255);
      match(TParser::Function);
      setState(1256);
      match(TParser::OpenOp);
      setState(1257);
      match(TParser::CloseOp);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1258);
      match(TParser::Function);
      setState(1259);
      match(TParser::OpenOp);
      setState(1260);
      match(TParser::CloseOp);
      setState(1261);
      match(TParser::ArrowRight);
      setState(1264);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TParser::Identifier: {
          setState(1262);
          identifierRet();
          break;
        }

        case TParser::TypeSpec: {
          setState(1263);
          match(TParser::TypeSpec);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1266);
      match(TParser::Function);
      setState(1267);
      match(TParser::OpenOp);
      setState(1268);
      functionParams();
      setState(1269);
      match(TParser::CloseOp);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1271);
      match(TParser::Function);
      setState(1272);
      match(TParser::OpenOp);
      setState(1273);
      functionParams();
      setState(1274);
      match(TParser::CloseOp);
      setState(1275);
      match(TParser::ArrowRight);
      setState(1278);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TParser::Identifier: {
          setState(1276);
          identifierRet();
          break;
        }

        case TParser::TypeSpec: {
          setState(1277);
          match(TParser::TypeSpec);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
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

//----------------- GeneralValueContext ------------------------------------------------------------------

TParser::GeneralValueContext::GeneralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::GeneralValueContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}

tree::TerminalNode* TParser::GeneralValueContext::TypeSpec() {
  return getToken(TParser::TypeSpec, 0);
}

tree::TerminalNode* TParser::GeneralValueContext::Integer() {
  return getToken(TParser::Integer, 0);
}

tree::TerminalNode* TParser::GeneralValueContext::Float() {
  return getToken(TParser::Float, 0);
}

tree::TerminalNode* TParser::GeneralValueContext::String() {
  return getToken(TParser::String, 0);
}

TParser::IndexArrayContext* TParser::GeneralValueContext::indexArray() {
  return getRuleContext<TParser::IndexArrayContext>(0);
}

TParser::AssociativeArrayContext* TParser::GeneralValueContext::associativeArray() {
  return getRuleContext<TParser::AssociativeArrayContext>(0);
}

TParser::OperationElementsContext* TParser::GeneralValueContext::operationElements() {
  return getRuleContext<TParser::OperationElementsContext>(0);
}

TParser::FunctionCallContext* TParser::GeneralValueContext::functionCall() {
  return getRuleContext<TParser::FunctionCallContext>(0);
}

TParser::ObjIdentifierAContext* TParser::GeneralValueContext::objIdentifierA() {
  return getRuleContext<TParser::ObjIdentifierAContext>(0);
}

tree::TerminalNode* TParser::GeneralValueContext::Point() {
  return getToken(TParser::Point, 0);
}

TParser::ObjIdentifierBContext* TParser::GeneralValueContext::objIdentifierB() {
  return getRuleContext<TParser::ObjIdentifierBContext>(0);
}

tree::TerminalNode* TParser::GeneralValueContext::TwoTwoPoint() {
  return getToken(TParser::TwoTwoPoint, 0);
}

TParser::ArrayAccessElementsContext* TParser::GeneralValueContext::arrayAccessElements() {
  return getRuleContext<TParser::ArrayAccessElementsContext>(0);
}

TParser::AnonymousFunctionContext* TParser::GeneralValueContext::anonymousFunction() {
  return getRuleContext<TParser::AnonymousFunctionContext>(0);
}

TParser::AnonymousClassCallExprContext* TParser::GeneralValueContext::anonymousClassCallExpr() {
  return getRuleContext<TParser::AnonymousClassCallExprContext>(0);
}

TParser::AnonymousClassContext* TParser::GeneralValueContext::anonymousClass() {
  return getRuleContext<TParser::AnonymousClassContext>(0);
}


size_t TParser::GeneralValueContext::getRuleIndex() const {
  return TParser::RuleGeneralValue;
}

void TParser::GeneralValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneralValue(this);
}

void TParser::GeneralValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneralValue(this);
}


antlrcpp::Any TParser::GeneralValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGeneralValue(this);
  else
    return visitor->visitChildren(this);
}

TParser::GeneralValueContext* TParser::generalValue() {
  GeneralValueContext *_localctx = _tracker.createInstance<GeneralValueContext>(_ctx, getState());
  enterRule(_localctx, 220, TParser::RuleGeneralValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1282);
      match(TParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1283);
      match(TParser::Identifier);
      setState(1284);
      match(TParser::TypeSpec);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1285);
      match(TParser::Integer);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1286);
      match(TParser::Integer);
      setState(1287);
      match(TParser::TypeSpec);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1288);
      match(TParser::Float);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1289);
      match(TParser::Float);
      setState(1290);
      match(TParser::TypeSpec);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1291);
      match(TParser::String);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1292);
      indexArray();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1293);
      associativeArray();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1294);
      operationElements();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1295);
      functionCall();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1296);
      objIdentifierA();
      setState(1297);
      match(TParser::Point);
      setState(1298);
      objIdentifierB();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1300);
      objIdentifierA();
      setState(1301);
      match(TParser::TwoTwoPoint);
      setState(1302);
      objIdentifierB();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1304);
      arrayAccessElements();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1305);
      anonymousFunction();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1306);
      anonymousClassCallExpr();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1307);
      anonymousClass();
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

//----------------- ObjIdentifierAContext ------------------------------------------------------------------

TParser::ObjIdentifierAContext::ObjIdentifierAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ObjIdentifierAContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}


size_t TParser::ObjIdentifierAContext::getRuleIndex() const {
  return TParser::RuleObjIdentifierA;
}

void TParser::ObjIdentifierAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjIdentifierA(this);
}

void TParser::ObjIdentifierAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjIdentifierA(this);
}


antlrcpp::Any TParser::ObjIdentifierAContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitObjIdentifierA(this);
  else
    return visitor->visitChildren(this);
}

TParser::ObjIdentifierAContext* TParser::objIdentifierA() {
  ObjIdentifierAContext *_localctx = _tracker.createInstance<ObjIdentifierAContext>(_ctx, getState());
  enterRule(_localctx, 222, TParser::RuleObjIdentifierA);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1310);
    match(TParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjIdentifierBContext ------------------------------------------------------------------

TParser::ObjIdentifierBContext::ObjIdentifierBContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ObjIdentifierBContext::Identifier() {
  return getToken(TParser::Identifier, 0);
}


size_t TParser::ObjIdentifierBContext::getRuleIndex() const {
  return TParser::RuleObjIdentifierB;
}

void TParser::ObjIdentifierBContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjIdentifierB(this);
}

void TParser::ObjIdentifierBContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjIdentifierB(this);
}


antlrcpp::Any TParser::ObjIdentifierBContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitObjIdentifierB(this);
  else
    return visitor->visitChildren(this);
}

TParser::ObjIdentifierBContext* TParser::objIdentifierB() {
  ObjIdentifierBContext *_localctx = _tracker.createInstance<ObjIdentifierBContext>(_ctx, getState());
  enterRule(_localctx, 224, TParser::RuleObjIdentifierB);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1312);
    match(TParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> TParser::_decisionToDFA;
atn::PredictionContextCache TParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TParser::_atn;
std::vector<uint16_t> TParser::_serializedATN;

std::vector<std::string> TParser::_ruleNames = {
  "main", "fileContent", "sentence", "liveToken", "breakFor", "nextFor", 
  "use", "useValue", "useString", "variable", "variableModes", "variableModesBkp", 
  "variableMultipleAssignments", "variableMultipleAssignmentsExpr", "variableDefinitionMA", 
  "variableMembers", "variableDefinition", "variableDefinitionGeneral", 
  "indexArray", "indexArrayElements", "associativeArray", "associativeArrayElements", 
  "operationBlock", "operationElements", "operationValue", "firstIncDec", 
  "lastIncDec", "callingFunction", "functionCall", "functionCallParamAC", 
  "methodCascadingModes", "functionCallCascading", "functionCallCascadingItem", 
  "identifierB", "pointSeparator", "functionCallParam", "functionCallParamElements", 
  "conditionalExpression", "conditionalExpressionStructBlock", "ifElementUnique", 
  "elifElements", "elifElementUnique", "elseElementUnique", "conditionalExpressionItems", 
  "conditionalBlockElements", "conditionalBlockElsItems", "conditionalExpressionElements", 
  "conditionExpValue", "conditionExpBlock", "conditionExpBlockItemValue", 
  "conditionExpBlockItem", "conditionalExpValue", "functionCallAndAttr", 
  "identifierAttrFn", "functionCallAttrFn", "functionCallAttrFnItem", "loop", 
  "loopExpressionItems", "loopExpression", "loopInfinite", "loopComplete", 
  "loopConditional", "endOne", "endTwo", "loopOneMembers", "loopTwoMembers", 
  "loopThreeMembers", "loopThreeMembersValues", "loopBlockElements", "loopBlockElementsLimited", 
  "ret", "retValues", "functions", "functionsModes", "functionGeneralModes", 
  "identifierRet", "functionMethodsModes", "functionMethodsModesBkp", "methodPerm", 
  "visibilityItems", "methodVisibility", "constructClassMethod", "interfaceMethod", 
  "functionCodeBlock", "functionCodeBlockElements", "functionParams", "functionParamsControl", 
  "functionParamElements", "oopGeneral", "interfaceClass", "interfaceClassDefinition", 
  "interfaceCodeBlock", "abstractClass", "abstractClassDefinition", "abstractCodeBlock", 
  "classDefination", "classCodeBlock", "classModes", "identifierC", "anonymousClassCall", 
  "anonymousClassCallExpr", "anonymousClass", "anonymousClassElements", 
  "arrayAccessElements", "arrayAccessElementsItems", "accessBlockAr", "arrayIndexAccess", 
  "anonymousFunction", "anFnItems", "functionsModesFn", "generalValue", 
  "objIdentifierA", "objIdentifierB"
};

std::vector<std::string> TParser::_literalNames = {
  "", "'use'", "'var'", "'if'", "'elif'", "'else'", "'for'", "'ret'", "'fn'", 
  "'pub'", "'pro'", "'priv'", "'static'", "'final'", "'interface'", "'abstract'", 
  "'extends'", "'class'", "'implements'", "'new'", "'break'", "'next'", 
  "'->'", "';'", "'='", "'.'", "':'", "'::'", "','", "'['", "']'", "'{'", 
  "'}'", "'('", "')'", "", "", "'!'"
};

std::vector<std::string> TParser::_symbolicNames = {
  "", "Use", "Var", "If", "Elif", "Else", "For", "Ret", "Function", "Pub", 
  "Pro", "Priv", "Static", "Final", "Interface", "Abstract", "Extends", 
  "Class", "Implements", "New", "Break", "Next", "ArrowRight", "End", "Attr", 
  "Point", "TwoPoint", "TwoTwoPoint", "Separator", "OpenArIndex", "CloseArIndex", 
  "OpenBlock", "CloseBlock", "OpenOp", "CloseOp", "ArithmeticOperator", 
  "AssignmentOperator", "Not", "IncDecOperators", "Identifier", "IDPrefix", 
  "TypeSpec", "String", "Integer", "Float", "Whitespace", "Newline", "Words", 
  "BlockComment", "LineComment"
};

dfa::Vocabulary TParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TParser::_tokenNames;

TParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x33, 0x525, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xed, 0xa, 
       0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xf9, 0xa, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xfe, 0xa, 0x5, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x5, 0x9, 0x10f, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x124, 0xa, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x5, 0xd, 0x155, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x15e, 0xa, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x5, 0x11, 0x167, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x5, 0x12, 0x178, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x186, 0xa, 0x13, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
       0x18e, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x5, 0x15, 0x195, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x19d, 0xa, 0x16, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x1a8, 0xa, 0x17, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x1b2, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x20c, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x225, 0xa, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x232, 
       0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x241, 0xa, 0x25, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x24d, 0xa, 0x26, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x253, 0xa, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x260, 
       0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x26a, 0xa, 0x2a, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x5, 0x2e, 0x27f, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x5, 0x2f, 0x285, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 
       0x30, 0x28f, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 
       0x294, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x299, 
       0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2a3, 0xa, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x302, 0xa, 0x35, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 
       0x30a, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x319, 0xa, 0x39, 0x3, 0x3a, 
       0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x31f, 0xa, 0x3a, 0x3, 
       0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
       0x3c, 0x5, 0x3c, 0x328, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x5, 0x3d, 0x32d, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x33d, 
       0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 
       0x349, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x34d, 0xa, 0x43, 
       0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x351, 0xa, 0x44, 0x3, 0x45, 0x3, 
       0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x358, 0xa, 0x45, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x35e, 0xa, 
       0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x36a, 
       0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 
       0x3, 0x49, 0x5, 0x49, 0x372, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x392, 0xa, 0x4a, 
       0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x5, 0x4c, 0x3a1, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 
       0x4c, 0x3b1, 0xa, 0x4c, 0x5, 0x4c, 0x3b3, 0xa, 0x4c, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3d1, 0xa, 0x4f, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x5, 0x52, 0x3db, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 
       0x53, 0x3e5, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x3e9, 0xa, 
       0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x5, 0x56, 0x3f1, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x3fa, 0xa, 
       0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x403, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x5, 0x5c, 0x420, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x43f, 0xa, 0x5f, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x44c, 0xa, 
       0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x476, 
       0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
       0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x48d, 0xa, 
       0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x493, 
       0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 
       0x499, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 
       0x6a, 0x4bd, 0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 
       0x4c8, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x4dd, 0xa, 0x6d, 0x3, 0x6e, 
       0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x4e8, 0xa, 0x6e, 0x3, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x4f3, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x501, 0xa, 
       0x6f, 0x5, 0x6f, 0x503, 0xa, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
       0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
       0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
       0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
       0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 
       0x51f, 0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x2, 0x2, 0x73, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
       0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
       0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
       0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
       0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
       0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 
       0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 
       0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
       0xda, 0xdc, 0xde, 0xe0, 0xe2, 0x2, 0x6, 0x4, 0x2, 0x1a, 0x1a, 0x26, 
       0x26, 0x3, 0x2, 0x25, 0x26, 0x3, 0x2, 0xb, 0xd, 0x3, 0x2, 0xb, 0xf, 
       0x2, 0x596, 0x2, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x4, 0xec, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x8, 0xfd, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0xff, 0x3, 0x2, 0x2, 0x2, 0xc, 0x102, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x105, 0x3, 0x2, 0x2, 0x2, 0x10, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x12, 
       0x110, 0x3, 0x2, 0x2, 0x2, 0x14, 0x112, 0x3, 0x2, 0x2, 0x2, 0x16, 
       0x123, 0x3, 0x2, 0x2, 0x2, 0x18, 0x154, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0x156, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x1e, 
       0x15f, 0x3, 0x2, 0x2, 0x2, 0x20, 0x166, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x24, 0x185, 0x3, 0x2, 0x2, 0x2, 0x26, 
       0x18d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x194, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0x19c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x1a9, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x32, 
       0x20b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x20f, 0x3, 0x2, 0x2, 0x2, 0x38, 0x211, 0x3, 0x2, 0x2, 0x2, 0x3a, 
       0x224, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x226, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0x228, 0x3, 0x2, 0x2, 0x2, 0x40, 0x231, 0x3, 0x2, 0x2, 0x2, 0x42, 
       0x233, 0x3, 0x2, 0x2, 0x2, 0x44, 0x236, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x238, 0x3, 0x2, 0x2, 0x2, 0x48, 0x240, 0x3, 0x2, 0x2, 0x2, 0x4a, 
       0x24c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x252, 0x3, 0x2, 0x2, 0x2, 0x4e, 
       0x25f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x261, 0x3, 0x2, 0x2, 0x2, 0x52, 
       0x269, 0x3, 0x2, 0x2, 0x2, 0x54, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x56, 
       0x26f, 0x3, 0x2, 0x2, 0x2, 0x58, 0x272, 0x3, 0x2, 0x2, 0x2, 0x5a, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x284, 0x3, 0x2, 0x2, 0x2, 0x5e, 
       0x28e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x293, 0x3, 0x2, 0x2, 0x2, 0x62, 
       0x298, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x66, 
       0x2a4, 0x3, 0x2, 0x2, 0x2, 0x68, 0x301, 0x3, 0x2, 0x2, 0x2, 0x6a, 
       0x303, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x309, 0x3, 0x2, 0x2, 0x2, 0x6e, 
       0x30b, 0x3, 0x2, 0x2, 0x2, 0x70, 0x318, 0x3, 0x2, 0x2, 0x2, 0x72, 
       0x31e, 0x3, 0x2, 0x2, 0x2, 0x74, 0x320, 0x3, 0x2, 0x2, 0x2, 0x76, 
       0x327, 0x3, 0x2, 0x2, 0x2, 0x78, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x7a, 
       0x33c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x7e, 
       0x340, 0x3, 0x2, 0x2, 0x2, 0x80, 0x342, 0x3, 0x2, 0x2, 0x2, 0x82, 
       0x348, 0x3, 0x2, 0x2, 0x2, 0x84, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x86, 
       0x350, 0x3, 0x2, 0x2, 0x2, 0x88, 0x357, 0x3, 0x2, 0x2, 0x2, 0x8a, 
       0x35d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x369, 0x3, 0x2, 0x2, 0x2, 0x8e, 
       0x36b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x371, 0x3, 0x2, 0x2, 0x2, 0x92, 
       0x391, 0x3, 0x2, 0x2, 0x2, 0x94, 0x393, 0x3, 0x2, 0x2, 0x2, 0x96, 
       0x3b2, 0x3, 0x2, 0x2, 0x2, 0x98, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x9a, 
       0x3b6, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x9e, 
       0x3d2, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0xa2, 
       0x3da, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0xa6, 
       0x3e8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0xaa, 
       0x3f0, 0x3, 0x2, 0x2, 0x2, 0xac, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0xae, 
       0x3f9, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0xb2, 
       0x402, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x404, 0x3, 0x2, 0x2, 0x2, 0xb6, 
       0x41f, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x421, 0x3, 0x2, 0x2, 0x2, 0xba, 
       0x423, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x43e, 0x3, 0x2, 0x2, 0x2, 0xbe, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x44b, 0x3, 0x2, 0x2, 0x2, 0xc2, 
       0x44d, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x475, 0x3, 0x2, 0x2, 0x2, 0xc6, 
       0x477, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x479, 0x3, 0x2, 0x2, 0x2, 0xca, 
       0x47c, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x48c, 0x3, 0x2, 0x2, 0x2, 0xce, 
       0x492, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x498, 0x3, 0x2, 0x2, 0x2, 0xd2, 
       0x4bc, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0xd6, 
       0x4c9, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0xda, 
       0x4e7, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x502, 0x3, 0x2, 0x2, 0x2, 0xde, 
       0x51e, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x520, 0x3, 0x2, 0x2, 0x2, 0xe2, 
       0x522, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x4, 0x3, 0x2, 0xe5, 
       0xe6, 0x7, 0x2, 0x2, 0x3, 0xe6, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xed, 
       0x5, 0x6, 0x4, 0x2, 0xe8, 0xe9, 0x5, 0x6, 0x4, 0x2, 0xe9, 0xea, 0x5, 
       0x4, 0x3, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0xec, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xec, 0xe8, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0xee, 0xf9, 0x5, 0x8, 0x5, 0x2, 0xef, 0xf9, 0x5, 0xe, 0x8, 0x2, 0xf0, 
       0xf9, 0x5, 0x14, 0xb, 0x2, 0xf1, 0xf9, 0x5, 0x38, 0x1d, 0x2, 0xf2, 
       0xf9, 0x5, 0x4c, 0x27, 0x2, 0xf3, 0xf9, 0x5, 0x72, 0x3a, 0x2, 0xf4, 
       0xf9, 0x5, 0x92, 0x4a, 0x2, 0xf5, 0xf9, 0x5, 0x8e, 0x48, 0x2, 0xf6, 
       0xf9, 0x5, 0xb2, 0x5a, 0x2, 0xf7, 0xf9, 0x5, 0xc8, 0x65, 0x2, 0xf8, 
       0xee, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf0, 
       0x3, 0x2, 0x2, 0x2, 0xf8, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf2, 0x3, 
       0x2, 0x2, 0x2, 0xf8, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf4, 0x3, 0x2, 
       0x2, 0x2, 0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 
       0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0xfa, 0xfe, 0x7, 0x30, 0x2, 0x2, 0xfb, 0xfe, 0x5, 0xa, 0x6, 0x2, 
       0xfc, 0xfe, 0x5, 0xc, 0x7, 0x2, 0xfd, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 0x16, 0x2, 0x2, 0x100, 0x101, 
       0x7, 0x19, 0x2, 0x2, 0x101, 0xb, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 
       0x7, 0x17, 0x2, 0x2, 0x103, 0x104, 0x7, 0x19, 0x2, 0x2, 0x104, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x3, 0x2, 0x2, 0x106, 0x107, 
       0x5, 0x10, 0x9, 0x2, 0x107, 0x108, 0x7, 0x19, 0x2, 0x2, 0x108, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0x10f, 0x5, 0x12, 0xa, 0x2, 0x10a, 0x10b, 
       0x5, 0x12, 0xa, 0x2, 0x10b, 0x10c, 0x7, 0x1e, 0x2, 0x2, 0x10c, 0x10d, 
       0x5, 0x10, 0x9, 0x2, 0x10d, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x2c, 0x2, 0x2, 0x111, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x5, 0x16, 0xc, 0x2, 0x113, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x4, 0x2, 0x2, 0x115, 0x116, 
       0x5, 0x20, 0x11, 0x2, 0x116, 0x117, 0x7, 0x19, 0x2, 0x2, 0x117, 0x124, 
       0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x5, 0xa2, 0x52, 0x2, 0x119, 0x11a, 
       0x7, 0x4, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x20, 0x11, 0x2, 0x11b, 0x11c, 
       0x7, 0x19, 0x2, 0x2, 0x11c, 0x124, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 
       0x5, 0x20, 0x11, 0x2, 0x11e, 0x11f, 0x7, 0x19, 0x2, 0x2, 0x11f, 0x124, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x5, 0x1a, 0xe, 0x2, 0x121, 0x122, 
       0x7, 0x19, 0x2, 0x2, 0x122, 0x124, 0x3, 0x2, 0x2, 0x2, 0x123, 0x114, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x118, 0x3, 0x2, 0x2, 0x2, 0x123, 0x11d, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x120, 0x3, 0x2, 0x2, 0x2, 0x124, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x4, 0x2, 0x2, 0x126, 0x127, 
       0x5, 0x20, 0x11, 0x2, 0x127, 0x128, 0x7, 0x19, 0x2, 0x2, 0x128, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x9e, 0x50, 0x2, 0x12a, 0x12b, 
       0x7, 0x4, 0x2, 0x2, 0x12b, 0x12c, 0x5, 0x20, 0x11, 0x2, 0x12c, 0x12d, 
       0x7, 0x19, 0x2, 0x2, 0x12d, 0x155, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
       0x7, 0xe, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x4, 0x2, 0x2, 0x130, 0x131, 
       0x5, 0x20, 0x11, 0x2, 0x131, 0x132, 0x7, 0x19, 0x2, 0x2, 0x132, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x5, 0x9e, 0x50, 0x2, 0x134, 0x135, 
       0x7, 0xe, 0x2, 0x2, 0x135, 0x136, 0x7, 0x4, 0x2, 0x2, 0x136, 0x137, 
       0x5, 0x20, 0x11, 0x2, 0x137, 0x138, 0x7, 0x19, 0x2, 0x2, 0x138, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0xf, 0x2, 0x2, 0x13a, 0x13b, 
       0x5, 0x9e, 0x50, 0x2, 0x13b, 0x13c, 0x7, 0xe, 0x2, 0x2, 0x13c, 0x13d, 
       0x7, 0x4, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x20, 0x11, 0x2, 0x13e, 0x13f, 
       0x7, 0x19, 0x2, 0x2, 0x13f, 0x155, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
       0x7, 0xf, 0x2, 0x2, 0x141, 0x142, 0x5, 0x9e, 0x50, 0x2, 0x142, 0x143, 
       0x7, 0x4, 0x2, 0x2, 0x143, 0x144, 0x5, 0x20, 0x11, 0x2, 0x144, 0x145, 
       0x7, 0x19, 0x2, 0x2, 0x145, 0x155, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
       0x7, 0xf, 0x2, 0x2, 0x147, 0x148, 0x7, 0x4, 0x2, 0x2, 0x148, 0x149, 
       0x5, 0x20, 0x11, 0x2, 0x149, 0x14a, 0x7, 0x19, 0x2, 0x2, 0x14a, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0xf, 0x2, 0x2, 0x14c, 0x14d, 
       0x7, 0xe, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x4, 0x2, 0x2, 0x14e, 0x14f, 
       0x5, 0x20, 0x11, 0x2, 0x14f, 0x150, 0x7, 0x19, 0x2, 0x2, 0x150, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x5, 0x20, 0x11, 0x2, 0x152, 0x153, 
       0x7, 0x19, 0x2, 0x2, 0x153, 0x155, 0x3, 0x2, 0x2, 0x2, 0x154, 0x125, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x129, 0x3, 0x2, 0x2, 0x2, 0x154, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x133, 0x3, 0x2, 0x2, 0x2, 0x154, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x140, 0x3, 0x2, 0x2, 0x2, 0x154, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x154, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x155, 0x19, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
       0x5, 0x1c, 0xf, 0x2, 0x157, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15e, 
       0x5, 0x1e, 0x10, 0x2, 0x159, 0x15a, 0x5, 0x1e, 0x10, 0x2, 0x15a, 
       0x15b, 0x7, 0x1a, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x1c, 0xf, 0x2, 0x15c, 
       0x15e, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15d, 
       0x159, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x15f, 
       0x160, 0x5, 0x22, 0x12, 0x2, 0x160, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x161, 
       0x167, 0x5, 0x22, 0x12, 0x2, 0x162, 0x163, 0x5, 0x22, 0x12, 0x2, 
       0x163, 0x164, 0x7, 0x1e, 0x2, 0x2, 0x164, 0x165, 0x5, 0x20, 0x11, 
       0x2, 0x165, 0x167, 0x3, 0x2, 0x2, 0x2, 0x166, 0x161, 0x3, 0x2, 0x2, 
       0x2, 0x166, 0x162, 0x3, 0x2, 0x2, 0x2, 0x167, 0x21, 0x3, 0x2, 0x2, 
       0x2, 0x168, 0x169, 0x7, 0x29, 0x2, 0x2, 0x169, 0x178, 0x5, 0x24, 
       0x13, 0x2, 0x16a, 0x16b, 0x5, 0xe0, 0x71, 0x2, 0x16b, 0x16c, 0x7, 
       0x1b, 0x2, 0x2, 0x16c, 0x16d, 0x5, 0xe2, 0x72, 0x2, 0x16d, 0x16e, 
       0x5, 0x24, 0x13, 0x2, 0x16e, 0x178, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 
       0x5, 0xe0, 0x71, 0x2, 0x170, 0x171, 0x7, 0x1d, 0x2, 0x2, 0x171, 0x172, 
       0x5, 0xe2, 0x72, 0x2, 0x172, 0x173, 0x5, 0x24, 0x13, 0x2, 0x173, 
       0x178, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x5, 0xd0, 0x69, 0x2, 0x175, 
       0x176, 0x5, 0x24, 0x13, 0x2, 0x176, 0x178, 0x3, 0x2, 0x2, 0x2, 0x177, 
       0x168, 0x3, 0x2, 0x2, 0x2, 0x177, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x177, 
       0x16f, 0x3, 0x2, 0x2, 0x2, 0x177, 0x174, 0x3, 0x2, 0x2, 0x2, 0x178, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x9, 0x2, 0x2, 0x2, 0x17a, 
       0x186, 0x5, 0xde, 0x70, 0x2, 0x17b, 0x17c, 0x7, 0x2b, 0x2, 0x2, 0x17c, 
       0x17d, 0x9, 0x2, 0x2, 0x2, 0x17d, 0x186, 0x5, 0xde, 0x70, 0x2, 0x17e, 
       0x17f, 0x9, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x15, 0x2, 0x2, 0x180, 
       0x186, 0x5, 0xde, 0x70, 0x2, 0x181, 0x182, 0x7, 0x2b, 0x2, 0x2, 0x182, 
       0x183, 0x9, 0x2, 0x2, 0x2, 0x183, 0x184, 0x7, 0x15, 0x2, 0x2, 0x184, 
       0x186, 0x5, 0xde, 0x70, 0x2, 0x185, 0x179, 0x3, 0x2, 0x2, 0x2, 0x185, 
       0x17b, 0x3, 0x2, 0x2, 0x2, 0x185, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x185, 
       0x181, 0x3, 0x2, 0x2, 0x2, 0x186, 0x25, 0x3, 0x2, 0x2, 0x2, 0x187, 
       0x188, 0x7, 0x1f, 0x2, 0x2, 0x188, 0x18e, 0x7, 0x20, 0x2, 0x2, 0x189, 
       0x18a, 0x7, 0x1f, 0x2, 0x2, 0x18a, 0x18b, 0x5, 0x28, 0x15, 0x2, 0x18b, 
       0x18c, 0x7, 0x20, 0x2, 0x2, 0x18c, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18d, 
       0x187, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18e, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x195, 0x5, 0xde, 0x70, 0x2, 0x190, 
       0x191, 0x5, 0xde, 0x70, 0x2, 0x191, 0x192, 0x7, 0x1e, 0x2, 0x2, 0x192, 
       0x193, 0x5, 0x28, 0x15, 0x2, 0x193, 0x195, 0x3, 0x2, 0x2, 0x2, 0x194, 
       0x18f, 0x3, 0x2, 0x2, 0x2, 0x194, 0x190, 0x3, 0x2, 0x2, 0x2, 0x195, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x21, 0x2, 0x2, 0x197, 
       0x19d, 0x7, 0x22, 0x2, 0x2, 0x198, 0x199, 0x7, 0x21, 0x2, 0x2, 0x199, 
       0x19a, 0x5, 0x2c, 0x17, 0x2, 0x19a, 0x19b, 0x7, 0x22, 0x2, 0x2, 0x19b, 
       0x19d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19c, 
       0x198, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x19e, 
       0x19f, 0x7, 0x29, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x1c, 0x2, 0x2, 0x1a0, 
       0x1a8, 0x5, 0xde, 0x70, 0x2, 0x1a1, 0x1a2, 0x7, 0x29, 0x2, 0x2, 0x1a2, 
       0x1a3, 0x7, 0x1c, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0xde, 0x70, 0x2, 0x1a4, 
       0x1a5, 0x7, 0x1e, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x2c, 0x17, 0x2, 0x1a6, 
       0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
       0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
       0x1aa, 0x7, 0x23, 0x2, 0x2, 0x1aa, 0x1ab, 0x5, 0x30, 0x19, 0x2, 0x1ab, 
       0x1ac, 0x7, 0x24, 0x2, 0x2, 0x1ac, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
       0x1b2, 0x5, 0x32, 0x1a, 0x2, 0x1ae, 0x1af, 0x5, 0x32, 0x1a, 0x2, 
       0x1af, 0x1b0, 0x5, 0x30, 0x19, 0x2, 0x1b0, 0x1b2, 0x3, 0x2, 0x2, 
       0x2, 0x1b1, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1ae, 0x3, 0x2, 0x2, 
       0x2, 0x1b2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x20c, 0x5, 0x3a, 0x1e, 
       0x2, 0x1b4, 0x1b5, 0x5, 0x3a, 0x1e, 0x2, 0x1b5, 0x1b6, 0x7, 0x25, 
       0x2, 0x2, 0x1b6, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x3a, 
       0x1e, 0x2, 0x1b8, 0x1b9, 0x7, 0x2b, 0x2, 0x2, 0x1b9, 0x20c, 0x3, 
       0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x5, 0x3a, 0x1e, 0x2, 0x1bb, 0x1bc, 
       0x7, 0x2b, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x25, 0x2, 0x2, 0x1bd, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x20c, 0x7, 0x29, 0x2, 0x2, 0x1bf, 0x1c0, 
       0x7, 0x29, 0x2, 0x2, 0x1c0, 0x20c, 0x7, 0x25, 0x2, 0x2, 0x1c1, 0x1c2, 
       0x7, 0x29, 0x2, 0x2, 0x1c2, 0x20c, 0x7, 0x2b, 0x2, 0x2, 0x1c3, 0x1c4, 
       0x7, 0x29, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x2b, 0x2, 0x2, 0x1c5, 0x20c, 
       0x7, 0x25, 0x2, 0x2, 0x1c6, 0x1c7, 0x5, 0x34, 0x1b, 0x2, 0x1c7, 0x1c8, 
       0x7, 0x29, 0x2, 0x2, 0x1c8, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
       0x5, 0x34, 0x1b, 0x2, 0x1ca, 0x1cb, 0x7, 0x29, 0x2, 0x2, 0x1cb, 0x1cc, 
       0x7, 0x25, 0x2, 0x2, 0x1cc, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 
       0x5, 0x34, 0x1b, 0x2, 0x1ce, 0x1cf, 0x7, 0x29, 0x2, 0x2, 0x1cf, 0x1d0, 
       0x7, 0x2b, 0x2, 0x2, 0x1d0, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 
       0x5, 0x34, 0x1b, 0x2, 0x1d2, 0x1d3, 0x7, 0x29, 0x2, 0x2, 0x1d3, 0x1d4, 
       0x7, 0x2b, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x25, 0x2, 0x2, 0x1d5, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x7, 0x29, 0x2, 0x2, 0x1d7, 0x20c, 
       0x5, 0x36, 0x1c, 0x2, 0x1d8, 0x1d9, 0x7, 0x29, 0x2, 0x2, 0x1d9, 0x1da, 
       0x5, 0x36, 0x1c, 0x2, 0x1da, 0x1db, 0x7, 0x25, 0x2, 0x2, 0x1db, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x29, 0x2, 0x2, 0x1dd, 0x1de, 
       0x5, 0x36, 0x1c, 0x2, 0x1de, 0x1df, 0x7, 0x2b, 0x2, 0x2, 0x1df, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x29, 0x2, 0x2, 0x1e1, 0x1e2, 
       0x5, 0x36, 0x1c, 0x2, 0x1e2, 0x1e3, 0x7, 0x2b, 0x2, 0x2, 0x1e3, 0x1e4, 
       0x7, 0x25, 0x2, 0x2, 0x1e4, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x20c, 
       0x7, 0x2d, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x2d, 0x2, 0x2, 0x1e7, 0x20c, 
       0x7, 0x25, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x2d, 0x2, 0x2, 0x1e9, 0x20c, 
       0x7, 0x2b, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x2d, 0x2, 0x2, 0x1eb, 0x1ec, 
       0x7, 0x2b, 0x2, 0x2, 0x1ec, 0x20c, 0x7, 0x25, 0x2, 0x2, 0x1ed, 0x20c, 
       0x7, 0x2e, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x2e, 0x2, 0x2, 0x1ef, 0x20c, 
       0x7, 0x25, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x2e, 0x2, 0x2, 0x1f1, 0x20c, 
       0x7, 0x2b, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x2e, 0x2, 0x2, 0x1f3, 0x1f4, 
       0x7, 0x2b, 0x2, 0x2, 0x1f4, 0x20c, 0x7, 0x25, 0x2, 0x2, 0x1f5, 0x20c, 
       0x5, 0x2e, 0x18, 0x2, 0x1f6, 0x1f7, 0x5, 0x2e, 0x18, 0x2, 0x1f7, 
       0x1f8, 0x7, 0x25, 0x2, 0x2, 0x1f8, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
       0x1fa, 0x5, 0x2e, 0x18, 0x2, 0x1fa, 0x1fb, 0x7, 0x2b, 0x2, 0x2, 0x1fb, 
       0x20c, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x5, 0x2e, 0x18, 0x2, 0x1fd, 
       0x1fe, 0x7, 0x2b, 0x2, 0x2, 0x1fe, 0x1ff, 0x7, 0x25, 0x2, 0x2, 0x1ff, 
       0x20c, 0x3, 0x2, 0x2, 0x2, 0x200, 0x20c, 0x5, 0xd0, 0x69, 0x2, 0x201, 
       0x202, 0x5, 0xd0, 0x69, 0x2, 0x202, 0x203, 0x7, 0x25, 0x2, 0x2, 0x203, 
       0x20c, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x5, 0xd0, 0x69, 0x2, 0x205, 
       0x206, 0x7, 0x2b, 0x2, 0x2, 0x206, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x207, 
       0x208, 0x5, 0xd0, 0x69, 0x2, 0x208, 0x209, 0x7, 0x2b, 0x2, 0x2, 0x209, 
       0x20a, 0x7, 0x25, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1b3, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1b7, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1be, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1c1, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1c6, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1cd, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1d6, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1dc, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1e5, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1e8, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1ed, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1f0, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x1f9, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x200, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x201, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x204, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x207, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x28, 0x2, 0x2, 0x20e, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x28, 0x2, 0x2, 0x210, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x5, 0x3a, 0x1e, 0x2, 0x212, 
       0x213, 0x7, 0x19, 0x2, 0x2, 0x213, 0x39, 0x3, 0x2, 0x2, 0x2, 0x214, 
       0x215, 0x7, 0x29, 0x2, 0x2, 0x215, 0x225, 0x5, 0x48, 0x25, 0x2, 0x216, 
       0x217, 0x7, 0x29, 0x2, 0x2, 0x217, 0x218, 0x7, 0x1b, 0x2, 0x2, 0x218, 
       0x219, 0x5, 0x44, 0x23, 0x2, 0x219, 0x21a, 0x5, 0x48, 0x25, 0x2, 
       0x21a, 0x225, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x29, 0x2, 0x2, 
       0x21c, 0x21d, 0x7, 0x1d, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x44, 0x23, 
       0x2, 0x21e, 0x21f, 0x5, 0x48, 0x25, 0x2, 0x21f, 0x225, 0x3, 0x2, 
       0x2, 0x2, 0x220, 0x225, 0x5, 0x3e, 0x20, 0x2, 0x221, 0x222, 0x5, 
       0xd0, 0x69, 0x2, 0x222, 0x223, 0x5, 0x3c, 0x1f, 0x2, 0x223, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x214, 0x3, 0x2, 0x2, 0x2, 0x224, 0x216, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x224, 0x220, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x221, 0x3, 0x2, 0x2, 0x2, 0x225, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x5, 0x48, 0x25, 0x2, 0x227, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x7, 0x29, 0x2, 0x2, 0x229, 0x22a, 
       0x7, 0x1b, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x40, 0x21, 0x2, 0x22b, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x22c, 0x232, 0x5, 0x42, 0x22, 0x2, 0x22d, 0x22e, 
       0x5, 0x42, 0x22, 0x2, 0x22e, 0x22f, 0x7, 0x1b, 0x2, 0x2, 0x22f, 0x230, 
       0x5, 0x40, 0x21, 0x2, 0x230, 0x232, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22c, 
       0x3, 0x2, 0x2, 0x2, 0x231, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x232, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x7, 0x29, 0x2, 0x2, 0x234, 0x235, 
       0x5, 0x48, 0x25, 0x2, 0x235, 0x43, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 
       0x7, 0x29, 0x2, 0x2, 0x237, 0x45, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 
       0x7, 0x1b, 0x2, 0x2, 0x239, 0x47, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 
       0x7, 0x23, 0x2, 0x2, 0x23b, 0x241, 0x7, 0x24, 0x2, 0x2, 0x23c, 0x23d, 
       0x7, 0x23, 0x2, 0x2, 0x23d, 0x23e, 0x5, 0x4a, 0x26, 0x2, 0x23e, 0x23f, 
       0x7, 0x24, 0x2, 0x2, 0x23f, 0x241, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23a, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x241, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x242, 0x24d, 0x5, 0xde, 0x70, 0x2, 0x243, 0x244, 
       0x5, 0xde, 0x70, 0x2, 0x244, 0x245, 0x7, 0x1e, 0x2, 0x2, 0x245, 0x246, 
       0x5, 0x4a, 0x26, 0x2, 0x246, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x247, 0x24d, 
       0x5, 0x30, 0x19, 0x2, 0x248, 0x249, 0x5, 0x30, 0x19, 0x2, 0x249, 
       0x24a, 0x7, 0x1e, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0x4a, 0x26, 0x2, 0x24b, 
       0x24d, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x242, 0x3, 0x2, 0x2, 0x2, 0x24c, 
       0x243, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24c, 
       0x248, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x24e, 
       0x253, 0x5, 0x4e, 0x28, 0x2, 0x24f, 0x250, 0x5, 0x4e, 0x28, 0x2, 
       0x250, 0x251, 0x5, 0x4c, 0x27, 0x2, 0x251, 0x253, 0x3, 0x2, 0x2, 
       0x2, 0x252, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x252, 0x24f, 0x3, 0x2, 0x2, 
       0x2, 0x253, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x254, 0x260, 0x5, 0x50, 0x29, 
       0x2, 0x255, 0x256, 0x5, 0x50, 0x29, 0x2, 0x256, 0x257, 0x5, 0x52, 
       0x2a, 0x2, 0x257, 0x260, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x5, 0x50, 
       0x29, 0x2, 0x259, 0x25a, 0x5, 0x56, 0x2c, 0x2, 0x25a, 0x260, 0x3, 
       0x2, 0x2, 0x2, 0x25b, 0x25c, 0x5, 0x50, 0x29, 0x2, 0x25c, 0x25d, 
       0x5, 0x52, 0x2a, 0x2, 0x25d, 0x25e, 0x5, 0x56, 0x2c, 0x2, 0x25e, 
       0x260, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x254, 0x3, 0x2, 0x2, 0x2, 0x25f, 
       0x255, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25f, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x260, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x261, 
       0x262, 0x7, 0x5, 0x2, 0x2, 0x262, 0x263, 0x5, 0x58, 0x2d, 0x2, 0x263, 
       0x264, 0x5, 0x5a, 0x2e, 0x2, 0x264, 0x51, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x26a, 0x5, 0x54, 0x2b, 0x2, 0x266, 0x267, 0x5, 0x54, 0x2b, 0x2, 
       0x267, 0x268, 0x5, 0x52, 0x2a, 0x2, 0x268, 0x26a, 0x3, 0x2, 0x2, 
       0x2, 0x269, 0x265, 0x3, 0x2, 0x2, 0x2, 0x269, 0x266, 0x3, 0x2, 0x2, 
       0x2, 0x26a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x6, 0x2, 
       0x2, 0x26c, 0x26d, 0x5, 0x58, 0x2d, 0x2, 0x26d, 0x26e, 0x5, 0x5a, 
       0x2e, 0x2, 0x26e, 0x55, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 0x7, 
       0x2, 0x2, 0x270, 0x271, 0x5, 0x5a, 0x2e, 0x2, 0x271, 0x57, 0x3, 0x2, 
       0x2, 0x2, 0x272, 0x273, 0x5, 0x5e, 0x30, 0x2, 0x273, 0x59, 0x3, 0x2, 
       0x2, 0x2, 0x274, 0x275, 0x7, 0x21, 0x2, 0x2, 0x275, 0x27f, 0x7, 0x22, 
       0x2, 0x2, 0x276, 0x277, 0x7, 0x21, 0x2, 0x2, 0x277, 0x278, 0x5, 0x5c, 
       0x2f, 0x2, 0x278, 0x279, 0x7, 0x22, 0x2, 0x2, 0x279, 0x27f, 0x3, 
       0x2, 0x2, 0x2, 0x27a, 0x27f, 0x5, 0x4c, 0x27, 0x2, 0x27b, 0x27f, 
       0x5, 0x38, 0x1d, 0x2, 0x27c, 0x27f, 0x5, 0x72, 0x3a, 0x2, 0x27d, 
       0x27f, 0x5, 0x8e, 0x48, 0x2, 0x27e, 0x274, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x276, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x27b, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x285, 0x5, 0x6, 0x4, 0x2, 0x281, 0x282, 0x5, 0x6, 0x4, 0x2, 0x282, 
       0x283, 0x5, 0x5c, 0x2f, 0x2, 0x283, 0x285, 0x3, 0x2, 0x2, 0x2, 0x284, 
       0x280, 0x3, 0x2, 0x2, 0x2, 0x284, 0x281, 0x3, 0x2, 0x2, 0x2, 0x285, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x286, 0x28f, 0x5, 0x60, 0x31, 0x2, 0x287, 
       0x288, 0x5, 0x60, 0x31, 0x2, 0x288, 0x289, 0x5, 0x5e, 0x30, 0x2, 
       0x289, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28f, 0x5, 0x62, 0x32, 
       0x2, 0x28b, 0x28c, 0x5, 0x62, 0x32, 0x2, 0x28c, 0x28d, 0x5, 0x5e, 
       0x30, 0x2, 0x28d, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x286, 0x3, 0x2, 
       0x2, 0x2, 0x28e, 0x287, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28a, 0x3, 0x2, 
       0x2, 0x2, 0x28e, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x5f, 0x3, 0x2, 
       0x2, 0x2, 0x290, 0x291, 0x7, 0x27, 0x2, 0x2, 0x291, 0x294, 0x5, 0x68, 
       0x35, 0x2, 0x292, 0x294, 0x5, 0x68, 0x35, 0x2, 0x293, 0x290, 0x3, 
       0x2, 0x2, 0x2, 0x293, 0x292, 0x3, 0x2, 0x2, 0x2, 0x294, 0x61, 0x3, 
       0x2, 0x2, 0x2, 0x295, 0x299, 0x5, 0x64, 0x33, 0x2, 0x296, 0x297, 
       0x7, 0x27, 0x2, 0x2, 0x297, 0x299, 0x5, 0x64, 0x33, 0x2, 0x298, 0x295, 
       0x3, 0x2, 0x2, 0x2, 0x298, 0x296, 0x3, 0x2, 0x2, 0x2, 0x299, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0x2a3, 0x5, 0x66, 0x34, 0x2, 0x29b, 0x29c, 
       0x5, 0x66, 0x34, 0x2, 0x29c, 0x29d, 0x9, 0x3, 0x2, 0x2, 0x29d, 0x2a3, 
       0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x5, 0x66, 0x34, 0x2, 0x29f, 0x2a0, 
       0x7, 0x2b, 0x2, 0x2, 0x2a0, 0x2a1, 0x9, 0x3, 0x2, 0x2, 0x2a1, 0x2a3, 
       0x3, 0x2, 0x2, 0x2, 0x2a2, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x29b, 
       0x3, 0x2, 0x2, 0x2, 0x2a2, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x23, 0x2, 0x2, 0x2a5, 0x2a6, 
       0x5, 0x5e, 0x30, 0x2, 0x2a6, 0x2a7, 0x7, 0x24, 0x2, 0x2, 0x2a7, 0x67, 
       0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x5, 0x34, 0x1b, 0x2, 0x2a9, 0x2aa, 
       0x7, 0x29, 0x2, 0x2, 0x2aa, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 
       0x5, 0x34, 0x1b, 0x2, 0x2ac, 0x2ad, 0x7, 0x29, 0x2, 0x2, 0x2ad, 0x2ae, 
       0x9, 0x3, 0x2, 0x2, 0x2ae, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 
       0x5, 0x34, 0x1b, 0x2, 0x2b0, 0x2b1, 0x7, 0x29, 0x2, 0x2, 0x2b1, 0x2b2, 
       0x7, 0x2b, 0x2, 0x2, 0x2b2, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 
       0x5, 0x34, 0x1b, 0x2, 0x2b4, 0x2b5, 0x7, 0x29, 0x2, 0x2, 0x2b5, 0x2b6, 
       0x7, 0x2b, 0x2, 0x2, 0x2b6, 0x2b7, 0x9, 0x3, 0x2, 0x2, 0x2b7, 0x302, 
       0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x29, 0x2, 0x2, 0x2b9, 0x302, 
       0x5, 0x36, 0x1c, 0x2, 0x2ba, 0x2bb, 0x7, 0x29, 0x2, 0x2, 0x2bb, 0x2bc, 
       0x5, 0x36, 0x1c, 0x2, 0x2bc, 0x2bd, 0x9, 0x3, 0x2, 0x2, 0x2bd, 0x302, 
       0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x29, 0x2, 0x2, 0x2bf, 0x2c0, 
       0x5, 0x36, 0x1c, 0x2, 0x2c0, 0x2c1, 0x7, 0x2b, 0x2, 0x2, 0x2c1, 0x302, 
       0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x29, 0x2, 0x2, 0x2c3, 0x2c4, 
       0x5, 0x36, 0x1c, 0x2, 0x2c4, 0x2c5, 0x7, 0x2b, 0x2, 0x2, 0x2c5, 0x2c6, 
       0x9, 0x3, 0x2, 0x2, 0x2c6, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x302, 
       0x7, 0x2d, 0x2, 0x2, 0x2c8, 0x2c9, 0x7, 0x2d, 0x2, 0x2, 0x2c9, 0x302, 
       0x9, 0x3, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x2d, 0x2, 0x2, 0x2cb, 0x302, 
       0x7, 0x2b, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x2d, 0x2, 0x2, 0x2cd, 0x2ce, 
       0x7, 0x2b, 0x2, 0x2, 0x2ce, 0x302, 0x9, 0x3, 0x2, 0x2, 0x2cf, 0x302, 
       0x7, 0x2e, 0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0x2e, 0x2, 0x2, 0x2d1, 0x302, 
       0x9, 0x3, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x2e, 0x2, 0x2, 0x2d3, 0x302, 
       0x7, 0x2b, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0x2e, 0x2, 0x2, 0x2d5, 0x2d6, 
       0x7, 0x2b, 0x2, 0x2, 0x2d6, 0x302, 0x9, 0x3, 0x2, 0x2, 0x2d7, 0x302, 
       0x5, 0x6a, 0x36, 0x2, 0x2d8, 0x302, 0x5, 0x3a, 0x1e, 0x2, 0x2d9, 
       0x2da, 0x5, 0x3a, 0x1e, 0x2, 0x2da, 0x2db, 0x9, 0x3, 0x2, 0x2, 0x2db, 
       0x302, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x3a, 0x1e, 0x2, 0x2dd, 
       0x2de, 0x7, 0x2b, 0x2, 0x2, 0x2de, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2df, 
       0x2e0, 0x5, 0x3a, 0x1e, 0x2, 0x2e0, 0x2e1, 0x7, 0x2b, 0x2, 0x2, 0x2e1, 
       0x2e2, 0x9, 0x3, 0x2, 0x2, 0x2e2, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2e3, 
       0x302, 0x5, 0x2e, 0x18, 0x2, 0x2e4, 0x2e5, 0x5, 0x2e, 0x18, 0x2, 
       0x2e5, 0x2e6, 0x9, 0x3, 0x2, 0x2, 0x2e6, 0x302, 0x3, 0x2, 0x2, 0x2, 
       0x2e7, 0x2e8, 0x5, 0x2e, 0x18, 0x2, 0x2e8, 0x2e9, 0x7, 0x2b, 0x2, 
       0x2, 0x2e9, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x2e, 0x18, 
       0x2, 0x2eb, 0x2ec, 0x7, 0x2b, 0x2, 0x2, 0x2ec, 0x2ed, 0x9, 0x3, 0x2, 
       0x2, 0x2ed, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x302, 0x7, 0x29, 0x2, 
       0x2, 0x2ef, 0x2f0, 0x7, 0x29, 0x2, 0x2, 0x2f0, 0x302, 0x9, 0x3, 0x2, 
       0x2, 0x2f1, 0x2f2, 0x7, 0x29, 0x2, 0x2, 0x2f2, 0x302, 0x7, 0x2b, 
       0x2, 0x2, 0x2f3, 0x2f4, 0x7, 0x29, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x2b, 
       0x2, 0x2, 0x2f5, 0x302, 0x9, 0x3, 0x2, 0x2, 0x2f6, 0x302, 0x5, 0xd0, 
       0x69, 0x2, 0x2f7, 0x2f8, 0x5, 0xd0, 0x69, 0x2, 0x2f8, 0x2f9, 0x9, 
       0x3, 0x2, 0x2, 0x2f9, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x5, 
       0xd0, 0x69, 0x2, 0x2fb, 0x2fc, 0x7, 0x2b, 0x2, 0x2, 0x2fc, 0x302, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x5, 0xd0, 0x69, 0x2, 0x2fe, 0x2ff, 
       0x7, 0x2b, 0x2, 0x2, 0x2ff, 0x300, 0x9, 0x3, 0x2, 0x2, 0x300, 0x302, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ab, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2b3, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ba, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2c2, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2c8, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2cc, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2d0, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2d4, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2d8, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2dc, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2e3, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2e7, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ee, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2f1, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2f6, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2fa, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x302, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x5, 0x6c, 0x37, 0x2, 0x304, 0x305, 
       0x7, 0x1a, 0x2, 0x2, 0x305, 0x306, 0x5, 0x6e, 0x38, 0x2, 0x306, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x307, 0x30a, 0x5, 0xd0, 0x69, 0x2, 0x308, 0x30a, 
       0x7, 0x29, 0x2, 0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 0x2, 0x309, 0x308, 
       0x3, 0x2, 0x2, 0x2, 0x30a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 
       0x5, 0x70, 0x39, 0x2, 0x30c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x319, 
       0x5, 0x3a, 0x1e, 0x2, 0x30e, 0x30f, 0x5, 0x3a, 0x1e, 0x2, 0x30f, 
       0x310, 0x9, 0x3, 0x2, 0x2, 0x310, 0x319, 0x3, 0x2, 0x2, 0x2, 0x311, 
       0x312, 0x5, 0x3a, 0x1e, 0x2, 0x312, 0x313, 0x7, 0x2b, 0x2, 0x2, 0x313, 
       0x319, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x5, 0x3a, 0x1e, 0x2, 0x315, 
       0x316, 0x7, 0x2b, 0x2, 0x2, 0x316, 0x317, 0x9, 0x3, 0x2, 0x2, 0x317, 
       0x319, 0x3, 0x2, 0x2, 0x2, 0x318, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x318, 
       0x30e, 0x3, 0x2, 0x2, 0x2, 0x318, 0x311, 0x3, 0x2, 0x2, 0x2, 0x318, 
       0x314, 0x3, 0x2, 0x2, 0x2, 0x319, 0x71, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x31f, 0x5, 0x74, 0x3b, 0x2, 0x31b, 0x31c, 0x5, 0x74, 0x3b, 0x2, 
       0x31c, 0x31d, 0x5, 0x72, 0x3a, 0x2, 0x31d, 0x31f, 0x3, 0x2, 0x2, 
       0x2, 0x31e, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31b, 0x3, 0x2, 0x2, 
       0x2, 0x31f, 0x73, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x7, 0x8, 0x2, 
       0x2, 0x321, 0x322, 0x5, 0x76, 0x3c, 0x2, 0x322, 0x323, 0x5, 0x8c, 
       0x47, 0x2, 0x323, 0x75, 0x3, 0x2, 0x2, 0x2, 0x324, 0x328, 0x5, 0x78, 
       0x3d, 0x2, 0x325, 0x328, 0x5, 0x7a, 0x3e, 0x2, 0x326, 0x328, 0x5, 
       0x7c, 0x3f, 0x2, 0x327, 0x324, 0x3, 0x2, 0x2, 0x2, 0x327, 0x325, 
       0x3, 0x2, 0x2, 0x2, 0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x328, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x23, 0x2, 0x2, 0x32a, 0x32d, 
       0x7, 0x24, 0x2, 0x2, 0x32b, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x329, 
       0x3, 0x2, 0x2, 0x2, 0x32c, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x23, 0x2, 0x2, 0x32f, 0x330, 
       0x5, 0x82, 0x42, 0x2, 0x330, 0x331, 0x5, 0x7e, 0x40, 0x2, 0x331, 
       0x332, 0x5, 0x84, 0x43, 0x2, 0x332, 0x333, 0x5, 0x80, 0x41, 0x2, 
       0x333, 0x334, 0x5, 0x86, 0x44, 0x2, 0x334, 0x335, 0x7, 0x24, 0x2, 
       0x2, 0x335, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x5, 0x82, 0x42, 
       0x2, 0x337, 0x338, 0x5, 0x7e, 0x40, 0x2, 0x338, 0x339, 0x5, 0x84, 
       0x43, 0x2, 0x339, 0x33a, 0x5, 0x80, 0x41, 0x2, 0x33a, 0x33b, 0x5, 
       0x86, 0x44, 0x2, 0x33b, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x33c, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 0x5, 0x84, 0x43, 0x2, 0x33f, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x7, 0x19, 0x2, 0x2, 0x341, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x7, 0x19, 0x2, 0x2, 0x343, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x344, 0x349, 0x5, 0x20, 0x11, 0x2, 0x345, 0x346, 
       0x7, 0x4, 0x2, 0x2, 0x346, 0x349, 0x5, 0x20, 0x11, 0x2, 0x347, 0x349, 
       0x3, 0x2, 0x2, 0x2, 0x348, 0x344, 0x3, 0x2, 0x2, 0x2, 0x348, 0x345, 
       0x3, 0x2, 0x2, 0x2, 0x348, 0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x34a, 0x34d, 0x5, 0x5e, 0x30, 0x2, 0x34b, 0x34d, 
       0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x34d, 0x85, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x351, 
       0x5, 0x88, 0x45, 0x2, 0x34f, 0x351, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34e, 
       0x3, 0x2, 0x2, 0x2, 0x350, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x351, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x352, 0x358, 0x5, 0x30, 0x19, 0x2, 0x353, 0x354, 
       0x5, 0x30, 0x19, 0x2, 0x354, 0x355, 0x7, 0x1e, 0x2, 0x2, 0x355, 0x356, 
       0x5, 0x88, 0x45, 0x2, 0x356, 0x358, 0x3, 0x2, 0x2, 0x2, 0x357, 0x352, 
       0x3, 0x2, 0x2, 0x2, 0x357, 0x353, 0x3, 0x2, 0x2, 0x2, 0x358, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x359, 0x35e, 0x5, 0x6, 0x4, 0x2, 0x35a, 0x35b, 
       0x5, 0x6, 0x4, 0x2, 0x35b, 0x35c, 0x5, 0x8a, 0x46, 0x2, 0x35c, 0x35e, 
       0x3, 0x2, 0x2, 0x2, 0x35d, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35a, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 
       0x7, 0x21, 0x2, 0x2, 0x360, 0x36a, 0x7, 0x22, 0x2, 0x2, 0x361, 0x362, 
       0x7, 0x21, 0x2, 0x2, 0x362, 0x363, 0x5, 0x8a, 0x46, 0x2, 0x363, 0x364, 
       0x7, 0x22, 0x2, 0x2, 0x364, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x365, 0x36a, 
       0x5, 0x4c, 0x27, 0x2, 0x366, 0x36a, 0x5, 0x38, 0x1d, 0x2, 0x367, 
       0x36a, 0x5, 0x72, 0x3a, 0x2, 0x368, 0x36a, 0x5, 0x8e, 0x48, 0x2, 
       0x369, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x369, 0x361, 0x3, 0x2, 0x2, 0x2, 
       0x369, 0x365, 0x3, 0x2, 0x2, 0x2, 0x369, 0x366, 0x3, 0x2, 0x2, 0x2, 
       0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 0x368, 0x3, 0x2, 0x2, 0x2, 
       0x36a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x7, 0x9, 0x2, 0x2, 
       0x36c, 0x36d, 0x5, 0x90, 0x49, 0x2, 0x36d, 0x36e, 0x7, 0x19, 0x2, 
       0x2, 0x36e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x372, 0x5, 0xde, 0x70, 
       0x2, 0x370, 0x372, 0x5, 0x30, 0x19, 0x2, 0x371, 0x36f, 0x3, 0x2, 
       0x2, 0x2, 0x371, 0x370, 0x3, 0x2, 0x2, 0x2, 0x372, 0x91, 0x3, 0x2, 
       0x2, 0x2, 0x373, 0x374, 0x5, 0x94, 0x4b, 0x2, 0x374, 0x375, 0x7, 
       0x21, 0x2, 0x2, 0x375, 0x376, 0x7, 0x22, 0x2, 0x2, 0x376, 0x392, 
       0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 0x5, 0x94, 0x4b, 0x2, 0x378, 0x379, 
       0x7, 0x21, 0x2, 0x2, 0x379, 0x37a, 0x5, 0xa8, 0x55, 0x2, 0x37a, 0x37b, 
       0x7, 0x22, 0x2, 0x2, 0x37b, 0x392, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 
       0x5, 0x9a, 0x4e, 0x2, 0x37d, 0x37e, 0x7, 0x21, 0x2, 0x2, 0x37e, 0x37f, 
       0x7, 0x22, 0x2, 0x2, 0x37f, 0x392, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 
       0x5, 0x9a, 0x4e, 0x2, 0x381, 0x382, 0x7, 0x21, 0x2, 0x2, 0x382, 0x383, 
       0x5, 0xa8, 0x55, 0x2, 0x383, 0x384, 0x7, 0x22, 0x2, 0x2, 0x384, 0x392, 
       0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x5, 0xa4, 0x53, 0x2, 0x386, 0x387, 
       0x7, 0x21, 0x2, 0x2, 0x387, 0x388, 0x7, 0x22, 0x2, 0x2, 0x388, 0x392, 
       0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x5, 0xa4, 0x53, 0x2, 0x38a, 0x38b, 
       0x7, 0x21, 0x2, 0x2, 0x38b, 0x38c, 0x5, 0xa8, 0x55, 0x2, 0x38c, 0x38d, 
       0x7, 0x22, 0x2, 0x2, 0x38d, 0x392, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 
       0x5, 0xa6, 0x54, 0x2, 0x38f, 0x390, 0x7, 0x19, 0x2, 0x2, 0x390, 0x392, 
       0x3, 0x2, 0x2, 0x2, 0x391, 0x373, 0x3, 0x2, 0x2, 0x2, 0x391, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x391, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x391, 0x380, 
       0x3, 0x2, 0x2, 0x2, 0x391, 0x385, 0x3, 0x2, 0x2, 0x2, 0x391, 0x389, 
       0x3, 0x2, 0x2, 0x2, 0x391, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x392, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x5, 0x96, 0x4c, 0x2, 0x394, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x7, 0xa, 0x2, 0x2, 0x396, 0x397, 
       0x7, 0x29, 0x2, 0x2, 0x397, 0x398, 0x7, 0x23, 0x2, 0x2, 0x398, 0x3b3, 
       0x7, 0x24, 0x2, 0x2, 0x399, 0x39a, 0x7, 0xa, 0x2, 0x2, 0x39a, 0x39b, 
       0x7, 0x29, 0x2, 0x2, 0x39b, 0x39c, 0x7, 0x23, 0x2, 0x2, 0x39c, 0x39d, 
       0x7, 0x24, 0x2, 0x2, 0x39d, 0x3a0, 0x7, 0x18, 0x2, 0x2, 0x39e, 0x3a1, 
       0x5, 0x98, 0x4d, 0x2, 0x39f, 0x3a1, 0x7, 0x2b, 0x2, 0x2, 0x3a0, 0x39e, 
       0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 0xa, 0x2, 0x2, 0x3a3, 0x3a4, 
       0x7, 0x29, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x23, 0x2, 0x2, 0x3a5, 0x3a6, 
       0x5, 0xac, 0x57, 0x2, 0x3a6, 0x3a7, 0x7, 0x24, 0x2, 0x2, 0x3a7, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x7, 0xa, 0x2, 0x2, 0x3a9, 0x3aa, 
       0x7, 0x29, 0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x23, 0x2, 0x2, 0x3ab, 0x3ac, 
       0x5, 0xac, 0x57, 0x2, 0x3ac, 0x3ad, 0x7, 0x24, 0x2, 0x2, 0x3ad, 0x3b0, 
       0x7, 0x18, 0x2, 0x2, 0x3ae, 0x3b1, 0x5, 0x98, 0x4d, 0x2, 0x3af, 0x3b1, 
       0x7, 0x2b, 0x2, 0x2, 0x3b0, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3af, 
       0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x395, 
       0x3, 0x2, 0x2, 0x2, 0x3b2, 0x399, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3a2, 
       0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b5, 0x7, 0x29, 0x2, 0x2, 0x3b5, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 0x5, 0xa2, 0x52, 0x2, 0x3b7, 0x3b8, 
       0x5, 0x96, 0x4c, 0x2, 0x3b8, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 
       0x5, 0x9e, 0x50, 0x2, 0x3ba, 0x3bb, 0x5, 0x96, 0x4c, 0x2, 0x3bb, 
       0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0xe, 0x2, 0x2, 0x3bd, 
       0x3d1, 0x5, 0x96, 0x4c, 0x2, 0x3be, 0x3bf, 0x5, 0x9e, 0x50, 0x2, 
       0x3bf, 0x3c0, 0x7, 0xe, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x96, 0x4c, 
       0x2, 0x3c1, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0xf, 0x2, 
       0x2, 0x3c3, 0x3c4, 0x5, 0x9e, 0x50, 0x2, 0x3c4, 0x3c5, 0x7, 0xe, 
       0x2, 0x2, 0x3c5, 0x3c6, 0x5, 0x96, 0x4c, 0x2, 0x3c6, 0x3d1, 0x3, 
       0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x7, 0xf, 0x2, 0x2, 0x3c8, 0x3c9, 0x5, 
       0x9e, 0x50, 0x2, 0x3c9, 0x3ca, 0x5, 0x96, 0x4c, 0x2, 0x3ca, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 0x7, 0xf, 0x2, 0x2, 0x3cc, 0x3d1, 
       0x5, 0x96, 0x4c, 0x2, 0x3cd, 0x3ce, 0x7, 0xf, 0x2, 0x2, 0x3ce, 0x3cf, 
       0x7, 0xe, 0x2, 0x2, 0x3cf, 0x3d1, 0x5, 0x96, 0x4c, 0x2, 0x3d0, 0x3b9, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3be, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c7, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3cd, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 
       0x9, 0x4, 0x2, 0x2, 0x3d3, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 
       0x9, 0x5, 0x2, 0x2, 0x3d5, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3db, 
       0x5, 0xa0, 0x51, 0x2, 0x3d7, 0x3d8, 0x5, 0xa0, 0x51, 0x2, 0x3d8, 
       0x3d9, 0x5, 0xa2, 0x52, 0x2, 0x3d9, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3da, 
       0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3db, 
       0xa3, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x7, 0x29, 0x2, 0x2, 0x3dd, 
       0x3de, 0x7, 0x23, 0x2, 0x2, 0x3de, 0x3e5, 0x7, 0x24, 0x2, 0x2, 0x3df, 
       0x3e0, 0x7, 0x29, 0x2, 0x2, 0x3e0, 0x3e1, 0x7, 0x23, 0x2, 0x2, 0x3e1, 
       0x3e2, 0x5, 0xac, 0x57, 0x2, 0x3e2, 0x3e3, 0x7, 0x24, 0x2, 0x2, 0x3e3, 
       0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x3e6, 
       0x3e9, 0x5, 0x94, 0x4b, 0x2, 0x3e7, 0x3e9, 0x5, 0x9a, 0x4e, 0x2, 
       0x3e8, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e7, 0x3, 0x2, 0x2, 0x2, 
       0x3e9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x5, 0xaa, 0x56, 0x2, 
       0x3eb, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3f1, 0x5, 0x6, 0x4, 0x2, 
       0x3ed, 0x3ee, 0x5, 0x6, 0x4, 0x2, 0x3ee, 0x3ef, 0x5, 0xaa, 0x56, 
       0x2, 0x3ef, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3ec, 0x3, 0x2, 0x2, 
       0x2, 0x3f0, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0xab, 0x3, 0x2, 0x2, 
       0x2, 0x3f2, 0x3f3, 0x5, 0xae, 0x58, 0x2, 0x3f3, 0xad, 0x3, 0x2, 0x2, 
       0x2, 0x3f4, 0x3fa, 0x5, 0xb0, 0x59, 0x2, 0x3f5, 0x3f6, 0x5, 0xb0, 
       0x59, 0x2, 0x3f6, 0x3f7, 0x7, 0x1e, 0x2, 0x2, 0x3f7, 0x3f8, 0x5, 
       0xae, 0x58, 0x2, 0x3f8, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3f4, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x29, 0x2, 0x2, 0x3fc, 0x3fd, 
       0x7, 0x2b, 0x2, 0x2, 0x3fd, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x403, 
       0x5, 0xb4, 0x5b, 0x2, 0x3ff, 0x403, 0x5, 0xba, 0x5e, 0x2, 0x400, 
       0x403, 0x5, 0xc0, 0x61, 0x2, 0x401, 0x403, 0x5, 0xcc, 0x67, 0x2, 
       0x402, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x402, 0x3ff, 0x3, 0x2, 0x2, 0x2, 
       0x402, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 0x401, 0x3, 0x2, 0x2, 0x2, 
       0x403, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x5, 0xb6, 0x5c, 0x2, 
       0x405, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x7, 0x10, 0x2, 0x2, 
       0x407, 0x408, 0x7, 0x29, 0x2, 0x2, 0x408, 0x409, 0x7, 0x21, 0x2, 
       0x2, 0x409, 0x420, 0x7, 0x22, 0x2, 0x2, 0x40a, 0x40b, 0x7, 0x10, 
       0x2, 0x2, 0x40b, 0x40c, 0x7, 0x29, 0x2, 0x2, 0x40c, 0x40d, 0x7, 0x21, 
       0x2, 0x2, 0x40d, 0x40e, 0x5, 0xb8, 0x5d, 0x2, 0x40e, 0x40f, 0x7, 
       0x22, 0x2, 0x2, 0x40f, 0x420, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x7, 
       0x10, 0x2, 0x2, 0x411, 0x412, 0x7, 0x29, 0x2, 0x2, 0x412, 0x413, 
       0x7, 0x12, 0x2, 0x2, 0x413, 0x414, 0x5, 0x44, 0x23, 0x2, 0x414, 0x415, 
       0x7, 0x21, 0x2, 0x2, 0x415, 0x416, 0x7, 0x22, 0x2, 0x2, 0x416, 0x420, 
       0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 0x10, 0x2, 0x2, 0x418, 0x419, 
       0x7, 0x29, 0x2, 0x2, 0x419, 0x41a, 0x7, 0x12, 0x2, 0x2, 0x41a, 0x41b, 
       0x5, 0x44, 0x23, 0x2, 0x41b, 0x41c, 0x7, 0x21, 0x2, 0x2, 0x41c, 0x41d, 
       0x5, 0xb8, 0x5d, 0x2, 0x41d, 0x41e, 0x7, 0x22, 0x2, 0x2, 0x41e, 0x420, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x406, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x40a, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x410, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x417, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 
       0x5, 0xaa, 0x56, 0x2, 0x422, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 
       0x5, 0xbc, 0x5f, 0x2, 0x424, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x425, 0x426, 
       0x7, 0x11, 0x2, 0x2, 0x426, 0x427, 0x7, 0x29, 0x2, 0x2, 0x427, 0x428, 
       0x7, 0x21, 0x2, 0x2, 0x428, 0x43f, 0x7, 0x22, 0x2, 0x2, 0x429, 0x42a, 
       0x7, 0x11, 0x2, 0x2, 0x42a, 0x42b, 0x7, 0x29, 0x2, 0x2, 0x42b, 0x42c, 
       0x7, 0x21, 0x2, 0x2, 0x42c, 0x42d, 0x5, 0xbe, 0x60, 0x2, 0x42d, 0x42e, 
       0x7, 0x22, 0x2, 0x2, 0x42e, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 
       0x7, 0x11, 0x2, 0x2, 0x430, 0x431, 0x7, 0x29, 0x2, 0x2, 0x431, 0x432, 
       0x7, 0x12, 0x2, 0x2, 0x432, 0x433, 0x5, 0x44, 0x23, 0x2, 0x433, 0x434, 
       0x7, 0x21, 0x2, 0x2, 0x434, 0x435, 0x7, 0x22, 0x2, 0x2, 0x435, 0x43f, 
       0x3, 0x2, 0x2, 0x2, 0x436, 0x437, 0x7, 0x11, 0x2, 0x2, 0x437, 0x438, 
       0x7, 0x29, 0x2, 0x2, 0x438, 0x439, 0x7, 0x12, 0x2, 0x2, 0x439, 0x43a, 
       0x5, 0x44, 0x23, 0x2, 0x43a, 0x43b, 0x7, 0x21, 0x2, 0x2, 0x43b, 0x43c, 
       0x5, 0xbe, 0x60, 0x2, 0x43c, 0x43d, 0x7, 0x22, 0x2, 0x2, 0x43d, 0x43f, 
       0x3, 0x2, 0x2, 0x2, 0x43e, 0x425, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x43e, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x436, 
       0x3, 0x2, 0x2, 0x2, 0x43f, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 
       0x5, 0xaa, 0x56, 0x2, 0x441, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 
       0x5, 0xc4, 0x63, 0x2, 0x443, 0x444, 0x7, 0x21, 0x2, 0x2, 0x444, 0x445, 
       0x7, 0x22, 0x2, 0x2, 0x445, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x446, 0x447, 
       0x5, 0xc4, 0x63, 0x2, 0x447, 0x448, 0x7, 0x21, 0x2, 0x2, 0x448, 0x449, 
       0x5, 0xc2, 0x62, 0x2, 0x449, 0x44a, 0x7, 0x22, 0x2, 0x2, 0x44a, 0x44c, 
       0x3, 0x2, 0x2, 0x2, 0x44b, 0x442, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x446, 
       0x3, 0x2, 0x2, 0x2, 0x44c, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x44e, 
       0x5, 0xaa, 0x56, 0x2, 0x44e, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 
       0x7, 0x13, 0x2, 0x2, 0x450, 0x476, 0x7, 0x29, 0x2, 0x2, 0x451, 0x452, 
       0x7, 0x13, 0x2, 0x2, 0x452, 0x453, 0x7, 0x29, 0x2, 0x2, 0x453, 0x454, 
       0x7, 0x12, 0x2, 0x2, 0x454, 0x476, 0x5, 0x44, 0x23, 0x2, 0x455, 0x456, 
       0x7, 0x13, 0x2, 0x2, 0x456, 0x457, 0x7, 0x29, 0x2, 0x2, 0x457, 0x458, 
       0x7, 0x14, 0x2, 0x2, 0x458, 0x476, 0x5, 0x44, 0x23, 0x2, 0x459, 0x45a, 
       0x7, 0x13, 0x2, 0x2, 0x45a, 0x45b, 0x7, 0x29, 0x2, 0x2, 0x45b, 0x45c, 
       0x7, 0x12, 0x2, 0x2, 0x45c, 0x45d, 0x5, 0x44, 0x23, 0x2, 0x45d, 0x45e, 
       0x7, 0x14, 0x2, 0x2, 0x45e, 0x45f, 0x5, 0xc6, 0x64, 0x2, 0x45f, 0x476, 
       0x3, 0x2, 0x2, 0x2, 0x460, 0x461, 0x7, 0xf, 0x2, 0x2, 0x461, 0x462, 
       0x7, 0x13, 0x2, 0x2, 0x462, 0x476, 0x7, 0x29, 0x2, 0x2, 0x463, 0x464, 
       0x7, 0xf, 0x2, 0x2, 0x464, 0x465, 0x7, 0x13, 0x2, 0x2, 0x465, 0x466, 
       0x7, 0x29, 0x2, 0x2, 0x466, 0x467, 0x7, 0x12, 0x2, 0x2, 0x467, 0x476, 
       0x5, 0x44, 0x23, 0x2, 0x468, 0x469, 0x7, 0xf, 0x2, 0x2, 0x469, 0x46a, 
       0x7, 0x13, 0x2, 0x2, 0x46a, 0x46b, 0x7, 0x29, 0x2, 0x2, 0x46b, 0x46c, 
       0x7, 0x14, 0x2, 0x2, 0x46c, 0x476, 0x5, 0x44, 0x23, 0x2, 0x46d, 0x46e, 
       0x7, 0xf, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0x13, 0x2, 0x2, 0x46f, 0x470, 
       0x7, 0x29, 0x2, 0x2, 0x470, 0x471, 0x7, 0x12, 0x2, 0x2, 0x471, 0x472, 
       0x5, 0x44, 0x23, 0x2, 0x472, 0x473, 0x7, 0x14, 0x2, 0x2, 0x473, 0x474, 
       0x5, 0xc6, 0x64, 0x2, 0x474, 0x476, 0x3, 0x2, 0x2, 0x2, 0x475, 0x44f, 
       0x3, 0x2, 0x2, 0x2, 0x475, 0x451, 0x3, 0x2, 0x2, 0x2, 0x475, 0x455, 
       0x3, 0x2, 0x2, 0x2, 0x475, 0x459, 0x3, 0x2, 0x2, 0x2, 0x475, 0x460, 
       0x3, 0x2, 0x2, 0x2, 0x475, 0x463, 0x3, 0x2, 0x2, 0x2, 0x475, 0x468, 
       0x3, 0x2, 0x2, 0x2, 0x475, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x476, 0xc5, 
       0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0x7, 0x29, 0x2, 0x2, 0x478, 0xc7, 
       0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 0x5, 0xca, 0x66, 0x2, 0x47a, 0x47b, 
       0x7, 0x19, 0x2, 0x2, 0x47b, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x47d, 
       0x7, 0x23, 0x2, 0x2, 0x47d, 0x47e, 0x5, 0xcc, 0x67, 0x2, 0x47e, 0x47f, 
       0x7, 0x24, 0x2, 0x2, 0x47f, 0x480, 0x7, 0x1b, 0x2, 0x2, 0x480, 0x481, 
       0x5, 0x40, 0x21, 0x2, 0x481, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 
       0x7, 0x15, 0x2, 0x2, 0x483, 0x484, 0x7, 0x13, 0x2, 0x2, 0x484, 0x485, 
       0x7, 0x21, 0x2, 0x2, 0x485, 0x48d, 0x7, 0x22, 0x2, 0x2, 0x486, 0x487, 
       0x7, 0x15, 0x2, 0x2, 0x487, 0x488, 0x7, 0x13, 0x2, 0x2, 0x488, 0x489, 
       0x7, 0x21, 0x2, 0x2, 0x489, 0x48a, 0x5, 0xce, 0x68, 0x2, 0x48a, 0x48b, 
       0x7, 0x22, 0x2, 0x2, 0x48b, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x482, 
       0x3, 0x2, 0x2, 0x2, 0x48c, 0x486, 0x3, 0x2, 0x2, 0x2, 0x48d, 0xcd, 
       0x3, 0x2, 0x2, 0x2, 0x48e, 0x493, 0x5, 0x6, 0x4, 0x2, 0x48f, 0x490, 
       0x5, 0x6, 0x4, 0x2, 0x490, 0x491, 0x5, 0xce, 0x68, 0x2, 0x491, 0x493, 
       0x3, 0x2, 0x2, 0x2, 0x492, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x492, 0x48f, 
       0x3, 0x2, 0x2, 0x2, 0x493, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x494, 0x499, 
       0x5, 0xd2, 0x6a, 0x2, 0x495, 0x496, 0x5, 0xd2, 0x6a, 0x2, 0x496, 
       0x497, 0x5, 0xd0, 0x69, 0x2, 0x497, 0x499, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x494, 0x3, 0x2, 0x2, 0x2, 0x498, 0x495, 0x3, 0x2, 0x2, 0x2, 0x499, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x4bd, 0x7, 0x29, 0x2, 0x2, 0x49b, 
       0x49c, 0x7, 0x29, 0x2, 0x2, 0x49c, 0x4bd, 0x7, 0x1b, 0x2, 0x2, 0x49d, 
       0x49e, 0x7, 0x29, 0x2, 0x2, 0x49e, 0x4bd, 0x5, 0xd4, 0x6b, 0x2, 0x49f, 
       0x4a0, 0x7, 0x29, 0x2, 0x2, 0x4a0, 0x4a1, 0x5, 0xd4, 0x6b, 0x2, 0x4a1, 
       0x4a2, 0x7, 0x1b, 0x2, 0x2, 0x4a2, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4a3, 
       0x4a4, 0x5, 0x34, 0x1b, 0x2, 0x4a4, 0x4a5, 0x7, 0x29, 0x2, 0x2, 0x4a5, 
       0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 0x29, 0x2, 0x2, 0x4a7, 
       0x4bd, 0x7, 0x1b, 0x2, 0x2, 0x4a8, 0x4a9, 0x5, 0x34, 0x1b, 0x2, 0x4a9, 
       0x4aa, 0x7, 0x29, 0x2, 0x2, 0x4aa, 0x4ab, 0x5, 0xd4, 0x6b, 0x2, 0x4ab, 
       0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 0x7, 0x29, 0x2, 0x2, 0x4ad, 
       0x4ae, 0x5, 0xd4, 0x6b, 0x2, 0x4ae, 0x4af, 0x7, 0x1b, 0x2, 0x2, 0x4af, 
       0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 0x7, 0x29, 0x2, 0x2, 0x4b1, 
       0x4bd, 0x5, 0x36, 0x1c, 0x2, 0x4b2, 0x4b3, 0x7, 0x29, 0x2, 0x2, 0x4b3, 
       0x4bd, 0x7, 0x1b, 0x2, 0x2, 0x4b4, 0x4b5, 0x7, 0x29, 0x2, 0x2, 0x4b5, 
       0x4b6, 0x5, 0xd4, 0x6b, 0x2, 0x4b6, 0x4b7, 0x5, 0x36, 0x1c, 0x2, 
       0x4b7, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b9, 0x7, 0x29, 0x2, 0x2, 
       0x4b9, 0x4ba, 0x5, 0xd4, 0x6b, 0x2, 0x4ba, 0x4bb, 0x7, 0x1b, 0x2, 
       0x2, 0x4bb, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x49a, 0x3, 0x2, 0x2, 
       0x2, 0x4bc, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x49d, 0x3, 0x2, 0x2, 
       0x2, 0x4bc, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4a3, 0x3, 0x2, 0x2, 
       0x2, 0x4bc, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4a8, 0x3, 0x2, 0x2, 
       0x2, 0x4bc, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4b0, 0x3, 0x2, 0x2, 
       0x2, 0x4bc, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4b4, 0x3, 0x2, 0x2, 
       0x2, 0x4bc, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0xd3, 0x3, 0x2, 0x2, 
       0x2, 0x4be, 0x4bf, 0x7, 0x1f, 0x2, 0x2, 0x4bf, 0x4c0, 0x5, 0xd6, 
       0x6c, 0x2, 0x4c0, 0x4c1, 0x7, 0x20, 0x2, 0x2, 0x4c1, 0x4c8, 0x3, 
       0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 0x1f, 0x2, 0x2, 0x4c3, 0x4c4, 0x5, 
       0xd6, 0x6c, 0x2, 0x4c4, 0x4c5, 0x7, 0x20, 0x2, 0x2, 0x4c5, 0x4c6, 
       0x5, 0xd4, 0x6b, 0x2, 0x4c6, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4be, 
       0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0xd5, 
       0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 0x5, 0x30, 0x19, 0x2, 0x4ca, 0xd7, 
       0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cc, 0x7, 0x23, 0x2, 0x2, 0x4cc, 0x4cd, 
       0x5, 0xda, 0x6e, 0x2, 0x4cd, 0x4ce, 0x7, 0x24, 0x2, 0x2, 0x4ce, 0x4dd, 
       0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4d0, 0x7, 0x23, 0x2, 0x2, 0x4d0, 0x4d1, 
       0x5, 0xda, 0x6e, 0x2, 0x4d1, 0x4d2, 0x7, 0x24, 0x2, 0x2, 0x4d2, 0x4d3, 
       0x7, 0x23, 0x2, 0x2, 0x4d3, 0x4d4, 0x7, 0x24, 0x2, 0x2, 0x4d4, 0x4dd, 
       0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d6, 0x7, 0x23, 0x2, 0x2, 0x4d6, 0x4d7, 
       0x5, 0xda, 0x6e, 0x2, 0x4d7, 0x4d8, 0x7, 0x24, 0x2, 0x2, 0x4d8, 0x4d9, 
       0x7, 0x23, 0x2, 0x2, 0x4d9, 0x4da, 0x5, 0x30, 0x19, 0x2, 0x4da, 0x4db, 
       0x7, 0x24, 0x2, 0x2, 0x4db, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4cb, 
       0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4d5, 
       0x3, 0x2, 0x2, 0x2, 0x4dd, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4df, 
       0x5, 0xdc, 0x6f, 0x2, 0x4df, 0x4e0, 0x7, 0x21, 0x2, 0x2, 0x4e0, 0x4e1, 
       0x7, 0x22, 0x2, 0x2, 0x4e1, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e3, 
       0x5, 0xdc, 0x6f, 0x2, 0x4e3, 0x4e4, 0x7, 0x21, 0x2, 0x2, 0x4e4, 0x4e5, 
       0x5, 0xa8, 0x55, 0x2, 0x4e5, 0x4e6, 0x7, 0x22, 0x2, 0x2, 0x4e6, 0x4e8, 
       0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e2, 
       0x3, 0x2, 0x2, 0x2, 0x4e8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4ea, 
       0x7, 0xa, 0x2, 0x2, 0x4ea, 0x4eb, 0x7, 0x23, 0x2, 0x2, 0x4eb, 0x503, 
       0x7, 0x24, 0x2, 0x2, 0x4ec, 0x4ed, 0x7, 0xa, 0x2, 0x2, 0x4ed, 0x4ee, 
       0x7, 0x23, 0x2, 0x2, 0x4ee, 0x4ef, 0x7, 0x24, 0x2, 0x2, 0x4ef, 0x4f2, 
       0x7, 0x18, 0x2, 0x2, 0x4f0, 0x4f3, 0x5, 0x98, 0x4d, 0x2, 0x4f1, 0x4f3, 
       0x7, 0x2b, 0x2, 0x2, 0x4f2, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f1, 
       0x3, 0x2, 0x2, 0x2, 0x4f3, 0x503, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f5, 
       0x7, 0xa, 0x2, 0x2, 0x4f5, 0x4f6, 0x7, 0x23, 0x2, 0x2, 0x4f6, 0x4f7, 
       0x5, 0xac, 0x57, 0x2, 0x4f7, 0x4f8, 0x7, 0x24, 0x2, 0x2, 0x4f8, 0x503, 
       0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fa, 0x7, 0xa, 0x2, 0x2, 0x4fa, 0x4fb, 
       0x7, 0x23, 0x2, 0x2, 0x4fb, 0x4fc, 0x5, 0xac, 0x57, 0x2, 0x4fc, 0x4fd, 
       0x7, 0x24, 0x2, 0x2, 0x4fd, 0x500, 0x7, 0x18, 0x2, 0x2, 0x4fe, 0x501, 
       0x5, 0x98, 0x4d, 0x2, 0x4ff, 0x501, 0x7, 0x2b, 0x2, 0x2, 0x500, 0x4fe, 
       0x3, 0x2, 0x2, 0x2, 0x500, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x501, 0x503, 
       0x3, 0x2, 0x2, 0x2, 0x502, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x502, 0x4ec, 
       0x3, 0x2, 0x2, 0x2, 0x502, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x502, 0x4f9, 
       0x3, 0x2, 0x2, 0x2, 0x503, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x504, 0x51f, 
       0x7, 0x29, 0x2, 0x2, 0x505, 0x506, 0x7, 0x29, 0x2, 0x2, 0x506, 0x51f, 
       0x7, 0x2b, 0x2, 0x2, 0x507, 0x51f, 0x7, 0x2d, 0x2, 0x2, 0x508, 0x509, 
       0x7, 0x2d, 0x2, 0x2, 0x509, 0x51f, 0x7, 0x2b, 0x2, 0x2, 0x50a, 0x51f, 
       0x7, 0x2e, 0x2, 0x2, 0x50b, 0x50c, 0x7, 0x2e, 0x2, 0x2, 0x50c, 0x51f, 
       0x7, 0x2b, 0x2, 0x2, 0x50d, 0x51f, 0x7, 0x2c, 0x2, 0x2, 0x50e, 0x51f, 
       0x5, 0x26, 0x14, 0x2, 0x50f, 0x51f, 0x5, 0x2a, 0x16, 0x2, 0x510, 
       0x51f, 0x5, 0x30, 0x19, 0x2, 0x511, 0x51f, 0x5, 0x3a, 0x1e, 0x2, 
       0x512, 0x513, 0x5, 0xe0, 0x71, 0x2, 0x513, 0x514, 0x7, 0x1b, 0x2, 
       0x2, 0x514, 0x515, 0x5, 0xe2, 0x72, 0x2, 0x515, 0x51f, 0x3, 0x2, 
       0x2, 0x2, 0x516, 0x517, 0x5, 0xe0, 0x71, 0x2, 0x517, 0x518, 0x7, 
       0x1d, 0x2, 0x2, 0x518, 0x519, 0x5, 0xe2, 0x72, 0x2, 0x519, 0x51f, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x51f, 0x5, 0xd0, 0x69, 0x2, 0x51b, 0x51f, 
       0x5, 0xd8, 0x6d, 0x2, 0x51c, 0x51f, 0x5, 0xca, 0x66, 0x2, 0x51d, 
       0x51f, 0x5, 0xcc, 0x67, 0x2, 0x51e, 0x504, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x505, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x507, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x508, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x50b, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x50e, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x510, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x511, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x512, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x516, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x51a, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x51e, 
       0x51c, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x51f, 
       0xdf, 0x3, 0x2, 0x2, 0x2, 0x520, 0x521, 0x7, 0x29, 0x2, 0x2, 0x521, 
       0xe1, 0x3, 0x2, 0x2, 0x2, 0x522, 0x523, 0x7, 0x29, 0x2, 0x2, 0x523, 
       0xe3, 0x3, 0x2, 0x2, 0x2, 0x47, 0xec, 0xf8, 0xfd, 0x10e, 0x123, 0x154, 
       0x15d, 0x166, 0x177, 0x185, 0x18d, 0x194, 0x19c, 0x1a7, 0x1b1, 0x20b, 
       0x224, 0x231, 0x240, 0x24c, 0x252, 0x25f, 0x269, 0x27e, 0x284, 0x28e, 
       0x293, 0x298, 0x2a2, 0x301, 0x309, 0x318, 0x31e, 0x327, 0x32c, 0x33c, 
       0x348, 0x34c, 0x350, 0x357, 0x35d, 0x369, 0x371, 0x391, 0x3a0, 0x3b0, 
       0x3b2, 0x3d0, 0x3da, 0x3e4, 0x3e8, 0x3f0, 0x3f9, 0x402, 0x41f, 0x43e, 
       0x44b, 0x475, 0x48c, 0x492, 0x498, 0x4bc, 0x4c7, 0x4dc, 0x4e7, 0x4f2, 
       0x500, 0x502, 0x51e, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TParser::Initializer TParser::_init;
