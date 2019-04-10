
// Generated from calculator.g4 by ANTLR 4.7.2


#include "calculatorVisitor.h"

#include "calculatorParser.h"


using namespace antlrcpp;
using namespace antlr4;

calculatorParser::calculatorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

calculatorParser::~calculatorParser() {
  delete _interpreter;
}

std::string calculatorParser::getGrammarFileName() const {
  return "calculator.g4";
}

const std::vector<std::string>& calculatorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& calculatorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ExpressionContext ------------------------------------------------------------------

calculatorParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calculatorParser::MultiplyingExpressionContext *> calculatorParser::ExpressionContext::multiplyingExpression() {
  return getRuleContexts<calculatorParser::MultiplyingExpressionContext>();
}

calculatorParser::MultiplyingExpressionContext* calculatorParser::ExpressionContext::multiplyingExpression(size_t i) {
  return getRuleContext<calculatorParser::MultiplyingExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::ExpressionContext::PLUS() {
  return getTokens(calculatorParser::PLUS);
}

tree::TerminalNode* calculatorParser::ExpressionContext::PLUS(size_t i) {
  return getToken(calculatorParser::PLUS, i);
}

std::vector<tree::TerminalNode *> calculatorParser::ExpressionContext::MINUS() {
  return getTokens(calculatorParser::MINUS);
}

tree::TerminalNode* calculatorParser::ExpressionContext::MINUS(size_t i) {
  return getToken(calculatorParser::MINUS, i);
}


size_t calculatorParser::ExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleExpression;
}

antlrcpp::Any calculatorParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::ExpressionContext* calculatorParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, calculatorParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    multiplyingExpression();
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::PLUS

    || _la == calculatorParser::MINUS) {
      setState(17);
      _la = _input->LA(1);
      if (!(_la == calculatorParser::PLUS

      || _la == calculatorParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(18);
      multiplyingExpression();
      setState(23);
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

//----------------- MultiplyingExpressionContext ------------------------------------------------------------------

calculatorParser::MultiplyingExpressionContext::MultiplyingExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calculatorParser::PowExpressionContext *> calculatorParser::MultiplyingExpressionContext::powExpression() {
  return getRuleContexts<calculatorParser::PowExpressionContext>();
}

calculatorParser::PowExpressionContext* calculatorParser::MultiplyingExpressionContext::powExpression(size_t i) {
  return getRuleContext<calculatorParser::PowExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::MultiplyingExpressionContext::TIMES() {
  return getTokens(calculatorParser::TIMES);
}

tree::TerminalNode* calculatorParser::MultiplyingExpressionContext::TIMES(size_t i) {
  return getToken(calculatorParser::TIMES, i);
}

std::vector<tree::TerminalNode *> calculatorParser::MultiplyingExpressionContext::DIV() {
  return getTokens(calculatorParser::DIV);
}

tree::TerminalNode* calculatorParser::MultiplyingExpressionContext::DIV(size_t i) {
  return getToken(calculatorParser::DIV, i);
}


size_t calculatorParser::MultiplyingExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleMultiplyingExpression;
}

antlrcpp::Any calculatorParser::MultiplyingExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitMultiplyingExpression(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::MultiplyingExpressionContext* calculatorParser::multiplyingExpression() {
  MultiplyingExpressionContext *_localctx = _tracker.createInstance<MultiplyingExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, calculatorParser::RuleMultiplyingExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    powExpression();
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::TIMES

    || _la == calculatorParser::DIV) {
      setState(25);
      _la = _input->LA(1);
      if (!(_la == calculatorParser::TIMES

      || _la == calculatorParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(26);
      powExpression();
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

//----------------- PowExpressionContext ------------------------------------------------------------------

calculatorParser::PowExpressionContext::PowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calculatorParser::SignedAtomContext *> calculatorParser::PowExpressionContext::signedAtom() {
  return getRuleContexts<calculatorParser::SignedAtomContext>();
}

calculatorParser::SignedAtomContext* calculatorParser::PowExpressionContext::signedAtom(size_t i) {
  return getRuleContext<calculatorParser::SignedAtomContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::PowExpressionContext::POW() {
  return getTokens(calculatorParser::POW);
}

tree::TerminalNode* calculatorParser::PowExpressionContext::POW(size_t i) {
  return getToken(calculatorParser::POW, i);
}


size_t calculatorParser::PowExpressionContext::getRuleIndex() const {
  return calculatorParser::RulePowExpression;
}

antlrcpp::Any calculatorParser::PowExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPowExpression(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::PowExpressionContext* calculatorParser::powExpression() {
  PowExpressionContext *_localctx = _tracker.createInstance<PowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, calculatorParser::RulePowExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    signedAtom();
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::POW) {
      setState(33);
      match(calculatorParser::POW);
      setState(34);
      signedAtom();
      setState(39);
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

//----------------- SignedAtomContext ------------------------------------------------------------------

calculatorParser::SignedAtomContext::SignedAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::SignedAtomContext::PLUS() {
  return getToken(calculatorParser::PLUS, 0);
}

calculatorParser::SignedAtomContext* calculatorParser::SignedAtomContext::signedAtom() {
  return getRuleContext<calculatorParser::SignedAtomContext>(0);
}

tree::TerminalNode* calculatorParser::SignedAtomContext::MINUS() {
  return getToken(calculatorParser::MINUS, 0);
}

calculatorParser::FuncContext* calculatorParser::SignedAtomContext::func() {
  return getRuleContext<calculatorParser::FuncContext>(0);
}

calculatorParser::AtomContext* calculatorParser::SignedAtomContext::atom() {
  return getRuleContext<calculatorParser::AtomContext>(0);
}


size_t calculatorParser::SignedAtomContext::getRuleIndex() const {
  return calculatorParser::RuleSignedAtom;
}

antlrcpp::Any calculatorParser::SignedAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitSignedAtom(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::SignedAtomContext* calculatorParser::signedAtom() {
  SignedAtomContext *_localctx = _tracker.createInstance<SignedAtomContext>(_ctx, getState());
  enterRule(_localctx, 6, calculatorParser::RuleSignedAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        match(calculatorParser::PLUS);
        setState(41);
        signedAtom();
        break;
      }

      case calculatorParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(42);
        match(calculatorParser::MINUS);
        setState(43);
        signedAtom();
        break;
      }

      case calculatorParser::SIN: {
        enterOuterAlt(_localctx, 3);
        setState(44);
        func();
        break;
      }

      case calculatorParser::LPAREN:
      case calculatorParser::NUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(45);
        atom();
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

//----------------- AtomContext ------------------------------------------------------------------

calculatorParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::NumberContext* calculatorParser::AtomContext::number() {
  return getRuleContext<calculatorParser::NumberContext>(0);
}

tree::TerminalNode* calculatorParser::AtomContext::LPAREN() {
  return getToken(calculatorParser::LPAREN, 0);
}

calculatorParser::ExpressionContext* calculatorParser::AtomContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::AtomContext::RPAREN() {
  return getToken(calculatorParser::RPAREN, 0);
}


size_t calculatorParser::AtomContext::getRuleIndex() const {
  return calculatorParser::RuleAtom;
}

antlrcpp::Any calculatorParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::AtomContext* calculatorParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 8, calculatorParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(48);
        number();
        break;
      }

      case calculatorParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(49);
        match(calculatorParser::LPAREN);
        setState(50);
        expression();
        setState(51);
        match(calculatorParser::RPAREN);
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

//----------------- NumberContext ------------------------------------------------------------------

calculatorParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::NumberContext::NUMBER() {
  return getToken(calculatorParser::NUMBER, 0);
}


size_t calculatorParser::NumberContext::getRuleIndex() const {
  return calculatorParser::RuleNumber;
}

antlrcpp::Any calculatorParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::NumberContext* calculatorParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 10, calculatorParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(calculatorParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

calculatorParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::FuncNameContext* calculatorParser::FuncContext::funcName() {
  return getRuleContext<calculatorParser::FuncNameContext>(0);
}

tree::TerminalNode* calculatorParser::FuncContext::LPAREN() {
  return getToken(calculatorParser::LPAREN, 0);
}

std::vector<calculatorParser::ExpressionContext *> calculatorParser::FuncContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::FuncContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::FuncContext::RPAREN() {
  return getToken(calculatorParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> calculatorParser::FuncContext::COMMA() {
  return getTokens(calculatorParser::COMMA);
}

tree::TerminalNode* calculatorParser::FuncContext::COMMA(size_t i) {
  return getToken(calculatorParser::COMMA, i);
}


size_t calculatorParser::FuncContext::getRuleIndex() const {
  return calculatorParser::RuleFunc;
}

antlrcpp::Any calculatorParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::FuncContext* calculatorParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 12, calculatorParser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    funcName();
    setState(58);
    match(calculatorParser::LPAREN);
    setState(59);
    expression();
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::COMMA) {
      setState(60);
      match(calculatorParser::COMMA);
      setState(61);
      expression();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(67);
    match(calculatorParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncNameContext ------------------------------------------------------------------

calculatorParser::FuncNameContext::FuncNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::FuncNameContext::SIN() {
  return getToken(calculatorParser::SIN, 0);
}


size_t calculatorParser::FuncNameContext::getRuleIndex() const {
  return calculatorParser::RuleFuncName;
}

antlrcpp::Any calculatorParser::FuncNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFuncName(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::FuncNameContext* calculatorParser::funcName() {
  FuncNameContext *_localctx = _tracker.createInstance<FuncNameContext>(_ctx, getState());
  enterRule(_localctx, 14, calculatorParser::RuleFuncName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(calculatorParser::SIN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> calculatorParser::_decisionToDFA;
atn::PredictionContextCache calculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calculatorParser::_atn;
std::vector<uint16_t> calculatorParser::_serializedATN;

std::vector<std::string> calculatorParser::_ruleNames = {
  "expression", "multiplyingExpression", "powExpression", "signedAtom", 
  "atom", "number", "func", "funcName"
};

std::vector<std::string> calculatorParser::_literalNames = {
  "", "'('", "')'", "'+'", "'-'", "'*'", "", "'^'", "'='", "','", "'.'", 
  "'sin'"
};

std::vector<std::string> calculatorParser::_symbolicNames = {
  "", "LPAREN", "RPAREN", "PLUS", "MINUS", "TIMES", "DIV", "POW", "EQ", 
  "COMMA", "POINT", "SIN", "NUMBER", "WHITESPACE"
};

dfa::Vocabulary calculatorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> calculatorParser::_tokenNames;

calculatorParser::Initializer::Initializer() {
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
    0x3, 0xf, 0x4a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x16, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x19, 0xb, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x1e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x21, 0xb, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x26, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x29, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x31, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x38, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x41, 0xa, 0x8, 
    0xc, 0x8, 0xe, 0x8, 0x44, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x2, 0x2, 0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x2, 0x4, 0x3, 0x2, 0x5, 0x6, 0x3, 0x2, 0x7, 0x8, 0x2, 0x49, 0x2, 0x12, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x6, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x30, 0x3, 0x2, 0x2, 0x2, 0xa, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x12, 0x17, 0x5, 0x4, 0x3, 0x2, 0x13, 0x14, 
    0x9, 0x2, 0x2, 0x2, 0x14, 0x16, 0x5, 0x4, 0x3, 0x2, 0x15, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1f, 0x5, 0x6, 0x4, 0x2, 
    0x1b, 0x1c, 0x9, 0x3, 0x2, 0x2, 0x1c, 0x1e, 0x5, 0x6, 0x4, 0x2, 0x1d, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x27, 0x5, 0x8, 
    0x5, 0x2, 0x23, 0x24, 0x7, 0x9, 0x2, 0x2, 0x24, 0x26, 0x5, 0x8, 0x5, 
    0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0x7, 0x5, 0x2, 0x2, 0x2b, 0x31, 0x5, 0x8, 0x5, 0x2, 0x2c, 0x2d, 0x7, 
    0x6, 0x2, 0x2, 0x2d, 0x31, 0x5, 0x8, 0x5, 0x2, 0x2e, 0x31, 0x5, 0xe, 
    0x8, 0x2, 0x2f, 0x31, 0x5, 0xa, 0x6, 0x2, 0x30, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x9, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x38, 0x5, 0xc, 0x7, 0x2, 0x33, 0x34, 0x7, 0x3, 0x2, 0x2, 0x34, 0x35, 
    0x5, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x4, 0x2, 0x2, 0x36, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x32, 0x3, 0x2, 0x2, 0x2, 0x37, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0xb, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0xe, 0x2, 
    0x2, 0x3a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x10, 0x9, 0x2, 
    0x3c, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x42, 0x5, 0x2, 0x2, 0x2, 0x3e, 
    0x3f, 0x7, 0xb, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x2, 0x2, 0x2, 0x40, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x4, 0x2, 
    0x2, 0x46, 0xf, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0xd, 0x2, 0x2, 
    0x48, 0x11, 0x3, 0x2, 0x2, 0x2, 0x8, 0x17, 0x1f, 0x27, 0x30, 0x37, 0x42, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

calculatorParser::Initializer calculatorParser::_init;
