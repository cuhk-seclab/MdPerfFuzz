
// Generated from MParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MParserListener.h"


/**
 * This class provides an empty implementation of MParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MParserBaseListener : public MParserListener {
public:

  virtual void enterDocument(MParser::DocumentContext * /*ctx*/) override { }
  virtual void exitDocument(MParser::DocumentContext * /*ctx*/) override { }

  virtual void enterProlog(MParser::PrologContext * /*ctx*/) override { }
  virtual void exitProlog(MParser::PrologContext * /*ctx*/) override { }

  virtual void enterContent(MParser::ContentContext * /*ctx*/) override { }
  virtual void exitContent(MParser::ContentContext * /*ctx*/) override { }

  virtual void enterElement(MParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(MParser::ElementContext * /*ctx*/) override { }

  virtual void enterReference(MParser::ReferenceContext * /*ctx*/) override { }
  virtual void exitReference(MParser::ReferenceContext * /*ctx*/) override { }

  virtual void enterAttribute(MParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(MParser::AttributeContext * /*ctx*/) override { }

  virtual void enterChardata(MParser::ChardataContext * /*ctx*/) override { }
  virtual void exitChardata(MParser::ChardataContext * /*ctx*/) override { }

  virtual void enterMisc(MParser::MiscContext * /*ctx*/) override { }
  virtual void exitMisc(MParser::MiscContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

