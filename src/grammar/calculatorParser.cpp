
// Generated from calculator.g4 by ANTLR 4.7.1


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


//----------------- InputContext ------------------------------------------------------------------

calculatorParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::ExpressionContext* calculatorParser::InputContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::InputContext::EOF() {
  return getToken(calculatorParser::EOF, 0);
}


size_t calculatorParser::InputContext::getRuleIndex() const {
  return calculatorParser::RuleInput;
}

antlrcpp::Any calculatorParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::InputContext* calculatorParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, calculatorParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    expression();
    setState(19);
    match(calculatorParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

calculatorParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calculatorParser::ExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleExpression;
}

void calculatorParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlusContext ------------------------------------------------------------------

std::vector<calculatorParser::MultiplyingExpressionContext *> calculatorParser::PlusContext::multiplyingExpression() {
  return getRuleContexts<calculatorParser::MultiplyingExpressionContext>();
}

calculatorParser::MultiplyingExpressionContext* calculatorParser::PlusContext::multiplyingExpression(size_t i) {
  return getRuleContext<calculatorParser::MultiplyingExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::PlusContext::PLUS() {
  return getTokens(calculatorParser::PLUS);
}

tree::TerminalNode* calculatorParser::PlusContext::PLUS(size_t i) {
  return getToken(calculatorParser::PLUS, i);
}

calculatorParser::PlusContext::PlusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

std::vector<calculatorParser::MultiplyingExpressionContext *> calculatorParser::MinusContext::multiplyingExpression() {
  return getRuleContexts<calculatorParser::MultiplyingExpressionContext>();
}

calculatorParser::MultiplyingExpressionContext* calculatorParser::MinusContext::multiplyingExpression(size_t i) {
  return getRuleContext<calculatorParser::MultiplyingExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::MinusContext::MINUS() {
  return getTokens(calculatorParser::MINUS);
}

tree::TerminalNode* calculatorParser::MinusContext::MINUS(size_t i) {
  return getToken(calculatorParser::MINUS, i);
}

calculatorParser::MinusContext::MinusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}
calculatorParser::ExpressionContext* calculatorParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, calculatorParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ExpressionContext *>(_tracker.createInstance<calculatorParser::PlusContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(21);
      multiplyingExpression();
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == calculatorParser::PLUS) {
        setState(22);
        match(calculatorParser::PLUS);
        setState(23);
        multiplyingExpression();
        setState(28);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ExpressionContext *>(_tracker.createInstance<calculatorParser::MinusContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(29);
      multiplyingExpression();
      setState(34);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == calculatorParser::MINUS) {
        setState(30);
        match(calculatorParser::MINUS);
        setState(31);
        multiplyingExpression();
        setState(36);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
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

//----------------- MultiplyingExpressionContext ------------------------------------------------------------------

calculatorParser::MultiplyingExpressionContext::MultiplyingExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calculatorParser::MultiplyingExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleMultiplyingExpression;
}

void calculatorParser::MultiplyingExpressionContext::copyFrom(MultiplyingExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

std::vector<calculatorParser::PowExpressionContext *> calculatorParser::DivContext::powExpression() {
  return getRuleContexts<calculatorParser::PowExpressionContext>();
}

calculatorParser::PowExpressionContext* calculatorParser::DivContext::powExpression(size_t i) {
  return getRuleContext<calculatorParser::PowExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::DivContext::DIV() {
  return getTokens(calculatorParser::DIV);
}

tree::TerminalNode* calculatorParser::DivContext::DIV(size_t i) {
  return getToken(calculatorParser::DIV, i);
}

calculatorParser::DivContext::DivContext(MultiplyingExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TimesContext ------------------------------------------------------------------

std::vector<calculatorParser::PowExpressionContext *> calculatorParser::TimesContext::powExpression() {
  return getRuleContexts<calculatorParser::PowExpressionContext>();
}

calculatorParser::PowExpressionContext* calculatorParser::TimesContext::powExpression(size_t i) {
  return getRuleContext<calculatorParser::PowExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::TimesContext::TIMES() {
  return getTokens(calculatorParser::TIMES);
}

tree::TerminalNode* calculatorParser::TimesContext::TIMES(size_t i) {
  return getToken(calculatorParser::TIMES, i);
}

calculatorParser::TimesContext::TimesContext(MultiplyingExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::TimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitTimes(this);
  else
    return visitor->visitChildren(this);
}
calculatorParser::MultiplyingExpressionContext* calculatorParser::multiplyingExpression() {
  MultiplyingExpressionContext *_localctx = _tracker.createInstance<MultiplyingExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, calculatorParser::RuleMultiplyingExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<MultiplyingExpressionContext *>(_tracker.createInstance<calculatorParser::TimesContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(39);
      powExpression();
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == calculatorParser::TIMES) {
        setState(40);
        match(calculatorParser::TIMES);
        setState(41);
        powExpression();
        setState(46);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<MultiplyingExpressionContext *>(_tracker.createInstance<calculatorParser::DivContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(47);
      powExpression();
      setState(52);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == calculatorParser::DIV) {
        setState(48);
        match(calculatorParser::DIV);
        setState(49);
        powExpression();
        setState(54);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
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

//----------------- PowExpressionContext ------------------------------------------------------------------

calculatorParser::PowExpressionContext::PowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calculatorParser::PowExpressionContext::getRuleIndex() const {
  return calculatorParser::RulePowExpression;
}

void calculatorParser::PowExpressionContext::copyFrom(PowExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PowContext ------------------------------------------------------------------

std::vector<calculatorParser::SignedAtomContext *> calculatorParser::PowContext::signedAtom() {
  return getRuleContexts<calculatorParser::SignedAtomContext>();
}

calculatorParser::SignedAtomContext* calculatorParser::PowContext::signedAtom(size_t i) {
  return getRuleContext<calculatorParser::SignedAtomContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::PowContext::POW() {
  return getTokens(calculatorParser::POW);
}

tree::TerminalNode* calculatorParser::PowContext::POW(size_t i) {
  return getToken(calculatorParser::POW, i);
}

calculatorParser::PowContext::PowContext(PowExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
calculatorParser::PowExpressionContext* calculatorParser::powExpression() {
  PowExpressionContext *_localctx = _tracker.createInstance<PowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, calculatorParser::RulePowExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<PowExpressionContext *>(_tracker.createInstance<calculatorParser::PowContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(57);
    signedAtom();
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::POW) {
      setState(58);
      match(calculatorParser::POW);
      setState(59);
      signedAtom();
      setState(64);
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
  enterRule(_localctx, 8, calculatorParser::RuleSignedAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(65);
        match(calculatorParser::PLUS);
        setState(66);
        signedAtom();
        break;
      }

      case calculatorParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(67);
        match(calculatorParser::MINUS);
        setState(68);
        signedAtom();
        break;
      }

      case calculatorParser::T__0:
      case calculatorParser::T__1:
      case calculatorParser::T__2:
      case calculatorParser::T__3:
      case calculatorParser::T__4: {
        enterOuterAlt(_localctx, 3);
        setState(69);
        func();
        break;
      }

      case calculatorParser::LPAREN:
      case calculatorParser::NUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(70);
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
  enterRule(_localctx, 10, calculatorParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(78);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(73);
        number();
        break;
      }

      case calculatorParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(74);
        match(calculatorParser::LPAREN);
        setState(75);
        expression();
        setState(76);
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
  enterRule(_localctx, 12, calculatorParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
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
  enterRule(_localctx, 14, calculatorParser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    funcName();
    setState(83);
    match(calculatorParser::LPAREN);
    setState(84);
    expression();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::COMMA) {
      setState(85);
      match(calculatorParser::COMMA);
      setState(86);
      expression();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
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
  enterRule(_localctx, 16, calculatorParser::RuleFuncName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << calculatorParser::T__0)
      | (1ULL << calculatorParser::T__1)
      | (1ULL << calculatorParser::T__2)
      | (1ULL << calculatorParser::T__3)
      | (1ULL << calculatorParser::T__4))) != 0))) {
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
std::vector<dfa::DFA> calculatorParser::_decisionToDFA;
atn::PredictionContextCache calculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calculatorParser::_atn;
std::vector<uint16_t> calculatorParser::_serializedATN;

std::vector<std::string> calculatorParser::_ruleNames = {
  "input", "expression", "multiplyingExpression", "powExpression", "signedAtom", 
  "atom", "number", "func", "funcName"
};

std::vector<std::string> calculatorParser::_literalNames = {
  "", "'sin'", "'cos'", "'tan'", "'ln'", "'log'", "'('", "')'", "'+'", "'-'", 
  "'*'", "", "'^'", "'='", "','", "'.'"
};

std::vector<std::string> calculatorParser::_symbolicNames = {
  "", "", "", "", "", "", "LPAREN", "RPAREN", "PLUS", "MINUS", "TIMES", 
  "DIV", "POW", "EQ", "COMMA", "POINT", "NUMBER", "WHITESPACE"
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
    0x3, 0x13, 0x63, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1b, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x1e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x23, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x26, 0xb, 0x3, 0x5, 0x3, 0x28, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x2d, 0xa, 0x4, 0xc, 
    0x4, 0xe, 0x4, 0x30, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
    0x35, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x38, 0xb, 0x4, 0x5, 0x4, 0x3a, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x3f, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x42, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4a, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x51, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x5a, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0x5d, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x2, 0x2, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x2, 0x3, 0x3, 0x2, 0x3, 0x7, 0x2, 0x65, 0x2, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 0x6, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0xe, 0x52, 0x3, 0x2, 0x2, 0x2, 0x10, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x60, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 
    0x4, 0x3, 0x2, 0x15, 0x16, 0x7, 0x2, 0x2, 0x3, 0x16, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x1c, 0x5, 0x6, 0x4, 0x2, 0x18, 0x19, 0x7, 0xa, 0x2, 
    0x2, 0x19, 0x1b, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x28, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x24, 0x5, 0x6, 0x4, 0x2, 0x20, 0x21, 0x7, 
    0xb, 0x2, 0x2, 0x21, 0x23, 0x5, 0x6, 0x4, 0x2, 0x22, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x26, 0x3, 0x2, 0x2, 0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 0x17, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2e, 
    0x5, 0x8, 0x5, 0x2, 0x2a, 0x2b, 0x7, 0xc, 0x2, 0x2, 0x2b, 0x2d, 0x5, 
    0x8, 0x5, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x36, 0x5, 0x8, 0x5, 0x2, 0x32, 0x33, 0x7, 0xd, 0x2, 0x2, 0x33, 
    0x35, 0x5, 0x8, 0x5, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x29, 0x3, 0x2, 0x2, 0x2, 0x39, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x40, 0x5, 0xa, 0x6, 0x2, 
    0x3c, 0x3d, 0x7, 0xe, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0xa, 0x6, 0x2, 0x3e, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 0xa, 
    0x2, 0x2, 0x44, 0x4a, 0x5, 0xa, 0x6, 0x2, 0x45, 0x46, 0x7, 0xb, 0x2, 
    0x2, 0x46, 0x4a, 0x5, 0xa, 0x6, 0x2, 0x47, 0x4a, 0x5, 0x10, 0x9, 0x2, 
    0x48, 0x4a, 0x5, 0xc, 0x7, 0x2, 0x49, 0x43, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x51, 0x5, 
    0xe, 0x8, 0x2, 0x4c, 0x4d, 0x7, 0x8, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x4, 
    0x3, 0x2, 0x4e, 0x4f, 0x7, 0x9, 0x2, 0x2, 0x4f, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0xd, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x12, 0x2, 0x2, 0x53, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0x12, 0xa, 0x2, 0x55, 0x56, 
    0x7, 0x8, 0x2, 0x2, 0x56, 0x5b, 0x5, 0x4, 0x3, 0x2, 0x57, 0x58, 0x7, 
    0x10, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x4, 0x3, 0x2, 0x59, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x9, 0x2, 0x2, 0x5f, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x9, 0x2, 0x2, 0x2, 0x61, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x1c, 0x24, 0x27, 0x2e, 0x36, 0x39, 0x40, 0x49, 
    0x50, 0x5b, 
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
