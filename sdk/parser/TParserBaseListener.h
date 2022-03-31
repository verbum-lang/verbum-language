
// Generated from ./TParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TParserListener.h"


namespace verbum {

/**
 * This class provides an empty implementation of TParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TParserBaseListener : public TParserListener {
public:

  virtual void enterMain(TParser::MainContext * /*ctx*/) override { }
  virtual void exitMain(TParser::MainContext * /*ctx*/) override { }

  virtual void enterFileContent(TParser::FileContentContext * /*ctx*/) override { }
  virtual void exitFileContent(TParser::FileContentContext * /*ctx*/) override { }

  virtual void enterSentence(TParser::SentenceContext * /*ctx*/) override { }
  virtual void exitSentence(TParser::SentenceContext * /*ctx*/) override { }

  virtual void enterLiveToken(TParser::LiveTokenContext * /*ctx*/) override { }
  virtual void exitLiveToken(TParser::LiveTokenContext * /*ctx*/) override { }

  virtual void enterUse(TParser::UseContext * /*ctx*/) override { }
  virtual void exitUse(TParser::UseContext * /*ctx*/) override { }

  virtual void enterUseValue(TParser::UseValueContext * /*ctx*/) override { }
  virtual void exitUseValue(TParser::UseValueContext * /*ctx*/) override { }

  virtual void enterUseString(TParser::UseStringContext * /*ctx*/) override { }
  virtual void exitUseString(TParser::UseStringContext * /*ctx*/) override { }

  virtual void enterVariable(TParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(TParser::VariableContext * /*ctx*/) override { }

  virtual void enterVariableMembers(TParser::VariableMembersContext * /*ctx*/) override { }
  virtual void exitVariableMembers(TParser::VariableMembersContext * /*ctx*/) override { }

  virtual void enterVariableDefinition(TParser::VariableDefinitionContext * /*ctx*/) override { }
  virtual void exitVariableDefinition(TParser::VariableDefinitionContext * /*ctx*/) override { }

  virtual void enterIndexArray(TParser::IndexArrayContext * /*ctx*/) override { }
  virtual void exitIndexArray(TParser::IndexArrayContext * /*ctx*/) override { }

  virtual void enterIndexArrayElements(TParser::IndexArrayElementsContext * /*ctx*/) override { }
  virtual void exitIndexArrayElements(TParser::IndexArrayElementsContext * /*ctx*/) override { }

  virtual void enterAssociativeArray(TParser::AssociativeArrayContext * /*ctx*/) override { }
  virtual void exitAssociativeArray(TParser::AssociativeArrayContext * /*ctx*/) override { }

  virtual void enterAssociativeArrayElements(TParser::AssociativeArrayElementsContext * /*ctx*/) override { }
  virtual void exitAssociativeArrayElements(TParser::AssociativeArrayElementsContext * /*ctx*/) override { }

  virtual void enterOperationBlock(TParser::OperationBlockContext * /*ctx*/) override { }
  virtual void exitOperationBlock(TParser::OperationBlockContext * /*ctx*/) override { }

  virtual void enterOperationElements(TParser::OperationElementsContext * /*ctx*/) override { }
  virtual void exitOperationElements(TParser::OperationElementsContext * /*ctx*/) override { }

  virtual void enterOperationValue(TParser::OperationValueContext * /*ctx*/) override { }
  virtual void exitOperationValue(TParser::OperationValueContext * /*ctx*/) override { }

  virtual void enterFirstIncDec(TParser::FirstIncDecContext * /*ctx*/) override { }
  virtual void exitFirstIncDec(TParser::FirstIncDecContext * /*ctx*/) override { }

  virtual void enterLastIncDec(TParser::LastIncDecContext * /*ctx*/) override { }
  virtual void exitLastIncDec(TParser::LastIncDecContext * /*ctx*/) override { }

  virtual void enterCallingFunction(TParser::CallingFunctionContext * /*ctx*/) override { }
  virtual void exitCallingFunction(TParser::CallingFunctionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(TParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(TParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterIdentifierB(TParser::IdentifierBContext * /*ctx*/) override { }
  virtual void exitIdentifierB(TParser::IdentifierBContext * /*ctx*/) override { }

  virtual void enterFunctionCallParam(TParser::FunctionCallParamContext * /*ctx*/) override { }
  virtual void exitFunctionCallParam(TParser::FunctionCallParamContext * /*ctx*/) override { }

  virtual void enterFunctionCallParamElements(TParser::FunctionCallParamElementsContext * /*ctx*/) override { }
  virtual void exitFunctionCallParamElements(TParser::FunctionCallParamElementsContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(TParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(TParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpressionElements(TParser::ConditionalExpressionElementsContext * /*ctx*/) override { }
  virtual void exitConditionalExpressionElements(TParser::ConditionalExpressionElementsContext * /*ctx*/) override { }

  virtual void enterBlockElements(TParser::BlockElementsContext * /*ctx*/) override { }
  virtual void exitBlockElements(TParser::BlockElementsContext * /*ctx*/) override { }

  virtual void enterGeneralValue(TParser::GeneralValueContext * /*ctx*/) override { }
  virtual void exitGeneralValue(TParser::GeneralValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace verbum
