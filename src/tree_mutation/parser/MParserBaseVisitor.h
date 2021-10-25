
// Generated from MParser.g4 by ANTLR 4.7

#pragma once


#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "MParserVisitor.h"
using namespace std;
using namespace antlr4;



/**
 * This class provides an empty implementation of MParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MParserBaseVisitor : public MParserVisitor {
public:
	vector<misc::Interval> intervals;
	vector<string> texts;


  virtual antlrcpp::Any visitDocument(MParser::DocumentContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProlog(MParser::PrologContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContent(MParser::ContentContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(MParser::ElementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference(MParser::ReferenceContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(MParser::AttributeContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChardata(MParser::ChardataContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMisc(MParser::MiscContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(ctx->getSourceInterval()));
    return visitChildren(ctx);
  }


};

