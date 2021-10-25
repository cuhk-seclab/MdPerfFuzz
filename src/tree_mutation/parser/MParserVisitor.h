
// Generated from MParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MParser.
 */
class  MParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MParser.
   */
    virtual antlrcpp::Any visitDocument(MParser::DocumentContext *context) = 0;

    virtual antlrcpp::Any visitProlog(MParser::PrologContext *context) = 0;

    virtual antlrcpp::Any visitContent(MParser::ContentContext *context) = 0;

    virtual antlrcpp::Any visitElement(MParser::ElementContext *context) = 0;

    virtual antlrcpp::Any visitReference(MParser::ReferenceContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(MParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitChardata(MParser::ChardataContext *context) = 0;

    virtual antlrcpp::Any visitMisc(MParser::MiscContext *context) = 0;


};

