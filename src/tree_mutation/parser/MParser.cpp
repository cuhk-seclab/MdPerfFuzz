
// Generated from MParser.g4 by ANTLR 4.7


#include "MParserListener.h"
#include "MParserVisitor.h"

#include "MParser.h"


using namespace antlrcpp;
using namespace antlr4;

MParser::MParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MParser::~MParser() {
  delete _interpreter;
}

std::string MParser::getGrammarFileName() const {
  return "MParser.g4";
}

const std::vector<std::string>& MParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- DocumentContext ------------------------------------------------------------------

MParser::DocumentContext::DocumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MParser::ElementContext* MParser::DocumentContext::element() {
  return getRuleContext<MParser::ElementContext>(0);
}

MParser::PrologContext* MParser::DocumentContext::prolog() {
  return getRuleContext<MParser::PrologContext>(0);
}

std::vector<MParser::MiscContext *> MParser::DocumentContext::misc() {
  return getRuleContexts<MParser::MiscContext>();
}

MParser::MiscContext* MParser::DocumentContext::misc(size_t i) {
  return getRuleContext<MParser::MiscContext>(i);
}


size_t MParser::DocumentContext::getRuleIndex() const {
  return MParser::RuleDocument;
}

void MParser::DocumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDocument(this);
}

void MParser::DocumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDocument(this);
}


antlrcpp::Any MParser::DocumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitDocument(this);
  else
    return visitor->visitChildren(this);
}

MParser::DocumentContext* MParser::document() {
  DocumentContext *_localctx = _tracker.createInstance<DocumentContext>(_ctx, getState());
  enterRule(_localctx, 0, MParser::RuleDocument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MParser::XMLDeclOpen) {
      setState(16);
      prolog();
    }
    setState(22);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MParser::COMMENT)
      | (1ULL << MParser::SEA_WS)
      | (1ULL << MParser::PI))) != 0)) {
      setState(19);
      misc();
      setState(24);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(25);
    element();
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MParser::COMMENT)
      | (1ULL << MParser::SEA_WS)
      | (1ULL << MParser::PI))) != 0)) {
      setState(26);
      misc();
      setState(31);
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

//----------------- PrologContext ------------------------------------------------------------------

MParser::PrologContext::PrologContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MParser::PrologContext::XMLDeclOpen() {
  return getToken(MParser::XMLDeclOpen, 0);
}

tree::TerminalNode* MParser::PrologContext::SPECIAL_CLOSE() {
  return getToken(MParser::SPECIAL_CLOSE, 0);
}

std::vector<MParser::AttributeContext *> MParser::PrologContext::attribute() {
  return getRuleContexts<MParser::AttributeContext>();
}

MParser::AttributeContext* MParser::PrologContext::attribute(size_t i) {
  return getRuleContext<MParser::AttributeContext>(i);
}


size_t MParser::PrologContext::getRuleIndex() const {
  return MParser::RuleProlog;
}

void MParser::PrologContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProlog(this);
}

void MParser::PrologContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProlog(this);
}


antlrcpp::Any MParser::PrologContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitProlog(this);
  else
    return visitor->visitChildren(this);
}

MParser::PrologContext* MParser::prolog() {
  PrologContext *_localctx = _tracker.createInstance<PrologContext>(_ctx, getState());
  enterRule(_localctx, 2, MParser::RuleProlog);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(MParser::XMLDeclOpen);
    setState(36);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MParser::Name) {
      setState(33);
      attribute();
      setState(38);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(39);
    match(MParser::SPECIAL_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContentContext ------------------------------------------------------------------

MParser::ContentContext::ContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MParser::ChardataContext *> MParser::ContentContext::chardata() {
  return getRuleContexts<MParser::ChardataContext>();
}

MParser::ChardataContext* MParser::ContentContext::chardata(size_t i) {
  return getRuleContext<MParser::ChardataContext>(i);
}

std::vector<MParser::ElementContext *> MParser::ContentContext::element() {
  return getRuleContexts<MParser::ElementContext>();
}

MParser::ElementContext* MParser::ContentContext::element(size_t i) {
  return getRuleContext<MParser::ElementContext>(i);
}

std::vector<MParser::ReferenceContext *> MParser::ContentContext::reference() {
  return getRuleContexts<MParser::ReferenceContext>();
}

MParser::ReferenceContext* MParser::ContentContext::reference(size_t i) {
  return getRuleContext<MParser::ReferenceContext>(i);
}

std::vector<tree::TerminalNode *> MParser::ContentContext::CDATA() {
  return getTokens(MParser::CDATA);
}

tree::TerminalNode* MParser::ContentContext::CDATA(size_t i) {
  return getToken(MParser::CDATA, i);
}

std::vector<tree::TerminalNode *> MParser::ContentContext::PI() {
  return getTokens(MParser::PI);
}

tree::TerminalNode* MParser::ContentContext::PI(size_t i) {
  return getToken(MParser::PI, i);
}

std::vector<tree::TerminalNode *> MParser::ContentContext::COMMENT() {
  return getTokens(MParser::COMMENT);
}

tree::TerminalNode* MParser::ContentContext::COMMENT(size_t i) {
  return getToken(MParser::COMMENT, i);
}


size_t MParser::ContentContext::getRuleIndex() const {
  return MParser::RuleContent;
}

void MParser::ContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent(this);
}

void MParser::ContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent(this);
}


antlrcpp::Any MParser::ContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitContent(this);
  else
    return visitor->visitChildren(this);
}

MParser::ContentContext* MParser::content() {
  ContentContext *_localctx = _tracker.createInstance<ContentContext>(_ctx, getState());
  enterRule(_localctx, 4, MParser::RuleContent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MParser::SEA_WS

    || _la == MParser::TEXT) {
      setState(41);
      chardata();
    }
    setState(56);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(49);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MParser::OPEN: {
            setState(44);
            element();
            break;
          }

          case MParser::EntityRef:
          case MParser::CharRef: {
            setState(45);
            reference();
            break;
          }

          case MParser::CDATA: {
            setState(46);
            match(MParser::CDATA);
            break;
          }

          case MParser::PI: {
            setState(47);
            match(MParser::PI);
            break;
          }

          case MParser::COMMENT: {
            setState(48);
            match(MParser::COMMENT);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(52);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MParser::SEA_WS

        || _la == MParser::TEXT) {
          setState(51);
          chardata();
        } 
      }
      setState(58);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

MParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MParser::ElementContext::Name() {
  return getTokens(MParser::Name);
}

tree::TerminalNode* MParser::ElementContext::Name(size_t i) {
  return getToken(MParser::Name, i);
}

MParser::ContentContext* MParser::ElementContext::content() {
  return getRuleContext<MParser::ContentContext>(0);
}

std::vector<MParser::AttributeContext *> MParser::ElementContext::attribute() {
  return getRuleContexts<MParser::AttributeContext>();
}

MParser::AttributeContext* MParser::ElementContext::attribute(size_t i) {
  return getRuleContext<MParser::AttributeContext>(i);
}


size_t MParser::ElementContext::getRuleIndex() const {
  return MParser::RuleElement;
}

void MParser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void MParser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


antlrcpp::Any MParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

MParser::ElementContext* MParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 6, MParser::RuleElement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(59);
      match(MParser::OPEN);
      setState(60);
      match(MParser::Name);
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MParser::Name) {
        setState(61);
        attribute();
        setState(66);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(67);
      match(MParser::CLOSE);
      setState(68);
      content();
      setState(69);
      match(MParser::OPEN);
      setState(70);
      match(MParser::SLASH);
      setState(71);
      match(MParser::Name);
      setState(72);
      match(MParser::CLOSE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      match(MParser::OPEN);
      setState(75);
      match(MParser::Name);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MParser::Name) {
        setState(76);
        attribute();
        setState(81);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(82);
      match(MParser::SLASH_CLOSE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceContext ------------------------------------------------------------------

MParser::ReferenceContext::ReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MParser::ReferenceContext::EntityRef() {
  return getToken(MParser::EntityRef, 0);
}

tree::TerminalNode* MParser::ReferenceContext::CharRef() {
  return getToken(MParser::CharRef, 0);
}


size_t MParser::ReferenceContext::getRuleIndex() const {
  return MParser::RuleReference;
}

void MParser::ReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference(this);
}

void MParser::ReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference(this);
}


antlrcpp::Any MParser::ReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitReference(this);
  else
    return visitor->visitChildren(this);
}

MParser::ReferenceContext* MParser::reference() {
  ReferenceContext *_localctx = _tracker.createInstance<ReferenceContext>(_ctx, getState());
  enterRule(_localctx, 8, MParser::RuleReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    _la = _input->LA(1);
    if (!(_la == MParser::EntityRef

    || _la == MParser::CharRef)) {
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

//----------------- AttributeContext ------------------------------------------------------------------

MParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MParser::AttributeContext::Name() {
  return getToken(MParser::Name, 0);
}

tree::TerminalNode* MParser::AttributeContext::STRING() {
  return getToken(MParser::STRING, 0);
}


size_t MParser::AttributeContext::getRuleIndex() const {
  return MParser::RuleAttribute;
}

void MParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void MParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any MParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

MParser::AttributeContext* MParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 10, MParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(MParser::Name);
    setState(88);
    match(MParser::EQUALS);
    setState(89);
    match(MParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChardataContext ------------------------------------------------------------------

MParser::ChardataContext::ChardataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MParser::ChardataContext::TEXT() {
  return getToken(MParser::TEXT, 0);
}

tree::TerminalNode* MParser::ChardataContext::SEA_WS() {
  return getToken(MParser::SEA_WS, 0);
}


size_t MParser::ChardataContext::getRuleIndex() const {
  return MParser::RuleChardata;
}

void MParser::ChardataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChardata(this);
}

void MParser::ChardataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChardata(this);
}


antlrcpp::Any MParser::ChardataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitChardata(this);
  else
    return visitor->visitChildren(this);
}

MParser::ChardataContext* MParser::chardata() {
  ChardataContext *_localctx = _tracker.createInstance<ChardataContext>(_ctx, getState());
  enterRule(_localctx, 12, MParser::RuleChardata);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    _la = _input->LA(1);
    if (!(_la == MParser::SEA_WS

    || _la == MParser::TEXT)) {
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

//----------------- MiscContext ------------------------------------------------------------------

MParser::MiscContext::MiscContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MParser::MiscContext::COMMENT() {
  return getToken(MParser::COMMENT, 0);
}

tree::TerminalNode* MParser::MiscContext::PI() {
  return getToken(MParser::PI, 0);
}

tree::TerminalNode* MParser::MiscContext::SEA_WS() {
  return getToken(MParser::SEA_WS, 0);
}


size_t MParser::MiscContext::getRuleIndex() const {
  return MParser::RuleMisc;
}

void MParser::MiscContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMisc(this);
}

void MParser::MiscContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMisc(this);
}


antlrcpp::Any MParser::MiscContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MParserVisitor*>(visitor))
    return parserVisitor->visitMisc(this);
  else
    return visitor->visitChildren(this);
}

MParser::MiscContext* MParser::misc() {
  MiscContext *_localctx = _tracker.createInstance<MiscContext>(_ctx, getState());
  enterRule(_localctx, 14, MParser::RuleMisc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MParser::COMMENT)
      | (1ULL << MParser::SEA_WS)
      | (1ULL << MParser::PI))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> MParser::_decisionToDFA;
atn::PredictionContextCache MParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MParser::_atn;
std::vector<uint16_t> MParser::_serializedATN;

std::vector<std::string> MParser::_ruleNames = {
  "document", "prolog", "content", "element", "reference", "attribute", 
  "chardata", "misc"
};

std::vector<std::string> MParser::_literalNames = {
  "", "", "", "", "", "", "", "'<'", "", "", "'>'", "", "'/>'", "'/'", "'='"
};

std::vector<std::string> MParser::_symbolicNames = {
  "", "COMMENT", "CDATA", "DTD", "EntityRef", "CharRef", "SEA_WS", "OPEN", 
  "XMLDeclOpen", "TEXT", "CLOSE", "SPECIAL_CLOSE", "SLASH_CLOSE", "SLASH", 
  "EQUALS", "STRING", "Name", "S", "PI"
};

dfa::Vocabulary MParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MParser::_tokenNames;

MParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x14, 0x62, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x5, 0x2, 0x14, 0xa, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x17, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1a, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x1e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x21, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x25, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x28, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x5, 0x4, 0x2d, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x34, 
    0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 0x37, 0xa, 0x4, 0x7, 0x4, 0x39, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x3c, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x41, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x44, 0xb, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x50, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x53, 0xb, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x56, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x2, 0x2, 0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 
    0x5, 0x3, 0x2, 0x6, 0x7, 0x4, 0x2, 0x8, 0x8, 0xb, 0xb, 0x5, 0x2, 0x3, 
    0x3, 0x8, 0x8, 0x14, 0x14, 0x2, 0x67, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x22, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x57, 0x3, 0x2, 0x2, 0x2, 0xc, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x14, 0x5, 0x4, 0x3, 0x2, 0x13, 0x12, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 0x18, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x17, 0x5, 0x10, 0x9, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 0x1a, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x1f, 0x5, 0x8, 0x5, 0x2, 0x1c, 0x1e, 0x5, 0x10, 0x9, 
    0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x26, 
    0x7, 0xa, 0x2, 0x2, 0x23, 0x25, 0x5, 0xc, 0x7, 0x2, 0x24, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x28, 0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0xd, 0x2, 0x2, 
    0x2a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x5, 0xe, 0x8, 0x2, 0x2c, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x34, 0x5, 0x8, 0x5, 0x2, 0x2f, 0x34, 0x5, 
    0xa, 0x6, 0x2, 0x30, 0x34, 0x7, 0x4, 0x2, 0x2, 0x31, 0x34, 0x7, 0x14, 
    0x2, 0x2, 0x32, 0x34, 0x7, 0x3, 0x2, 0x2, 0x33, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x33, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x37, 0x5, 0xe, 0x8, 0x2, 0x36, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x33, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x7, 0x9, 0x2, 0x2, 0x3e, 0x42, 0x7, 0x12, 0x2, 0x2, 0x3f, 
    0x41, 0x5, 0xc, 0x7, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x7, 0xc, 0x2, 0x2, 0x46, 0x47, 0x5, 0x6, 0x4, 
    0x2, 0x47, 0x48, 0x7, 0x9, 0x2, 0x2, 0x48, 0x49, 0x7, 0xf, 0x2, 0x2, 
    0x49, 0x4a, 0x7, 0x12, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0xc, 0x2, 0x2, 0x4b, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x9, 0x2, 0x2, 0x4d, 0x51, 
    0x7, 0x12, 0x2, 0x2, 0x4e, 0x50, 0x5, 0xc, 0x7, 0x2, 0x4f, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x7, 0xe, 0x2, 0x2, 
    0x55, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x55, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x9, 0x2, 0x2, 0x2, 0x58, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x12, 0x2, 0x2, 0x5a, 0x5b, 0x7, 
    0x10, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x11, 0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x9, 0x3, 0x2, 0x2, 0x5e, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x60, 0x9, 0x4, 0x2, 0x2, 0x60, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x13, 0x18, 0x1f, 0x26, 0x2c, 0x33, 0x36, 0x3a, 0x42, 0x51, 0x55, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MParser::Initializer MParser::_init;
