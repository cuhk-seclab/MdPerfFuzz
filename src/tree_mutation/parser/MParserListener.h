
// Generated from MParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MParser.
 */
class  MParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDocument(MParser::DocumentContext *ctx) = 0;
  virtual void exitDocument(MParser::DocumentContext *ctx) = 0;

  virtual void enterProlog(MParser::PrologContext *ctx) = 0;
  virtual void exitProlog(MParser::PrologContext *ctx) = 0;

  virtual void enterContent(MParser::ContentContext *ctx) = 0;
  virtual void exitContent(MParser::ContentContext *ctx) = 0;

  virtual void enterElement(MParser::ElementContext *ctx) = 0;
  virtual void exitElement(MParser::ElementContext *ctx) = 0;

  virtual void enterReference(MParser::ReferenceContext *ctx) = 0;
  virtual void exitReference(MParser::ReferenceContext *ctx) = 0;

  virtual void enterAttribute(MParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(MParser::AttributeContext *ctx) = 0;

  virtual void enterChardata(MParser::ChardataContext *ctx) = 0;
  virtual void exitChardata(MParser::ChardataContext *ctx) = 0;

  virtual void enterMisc(MParser::MiscContext *ctx) = 0;
  virtual void exitMisc(MParser::MiscContext *ctx) = 0;


};

