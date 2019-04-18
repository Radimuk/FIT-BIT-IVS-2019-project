
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
    setState(14);
    expression(0);
    setState(15);
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

//----------------- DivContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::DivContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::DivContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::DivContext::DIV() {
  return getToken(calculatorParser::DIV, 0);
}

calculatorParser::DivContext::DivContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::ModContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::ModContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::ModContext::MOD() {
  return getToken(calculatorParser::MOD, 0);
}

calculatorParser::ModContext::ModContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TimesContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::TimesContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::TimesContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::TimesContext::TIMES() {
  return getToken(calculatorParser::TIMES, 0);
}

calculatorParser::TimesContext::TimesContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::TimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::PowContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::PowContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::PowContext::POW() {
  return getToken(calculatorParser::POW, 0);
}

calculatorParser::PowContext::PowContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExpressionContext ------------------------------------------------------------------

calculatorParser::SignedAtomContext* calculatorParser::NumberExpressionContext::signedAtom() {
  return getRuleContext<calculatorParser::SignedAtomContext>(0);
}

calculatorParser::NumberExpressionContext::NumberExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::NumberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitNumberExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::PlusContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::PlusContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::PlusContext::PLUS() {
  return getToken(calculatorParser::PLUS, 0);
}

calculatorParser::PlusContext::PlusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::MinusContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::MinusContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::MinusContext::MINUS() {
  return getToken(calculatorParser::MINUS, 0);
}

calculatorParser::MinusContext::MinusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::ExpressionContext* calculatorParser::expression() {
   return expression(0);
}

calculatorParser::ExpressionContext* calculatorParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calculatorParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  calculatorParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, calculatorParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(18);
    signedAtom();
    _ctx->stop = _input->LT(-1);
    setState(40);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(38);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(20);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(21);
          match(calculatorParser::POW);
          setState(22);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(23);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(24);
          match(calculatorParser::TIMES);
          setState(25);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(26);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(27);
          match(calculatorParser::DIV);
          setState(28);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(29);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(30);
          match(calculatorParser::MOD);
          setState(31);
          expression(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(32);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(33);
          match(calculatorParser::PLUS);
          setState(34);
          expression(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(35);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(36);
          match(calculatorParser::MINUS);
          setState(37);
          expression(3);
          break;
        }

        } 
      }
      setState(42);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
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
  enterRule(_localctx, 4, calculatorParser::RuleSignedAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        match(calculatorParser::PLUS);
        setState(44);
        signedAtom();
        break;
      }

      case calculatorParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        match(calculatorParser::MINUS);
        setState(46);
        signedAtom();
        break;
      }

      case calculatorParser::ABS:
      case calculatorParser::SIN:
      case calculatorParser::COS:
      case calculatorParser::TAN:
      case calculatorParser::LOG:
      case calculatorParser::LN: {
        enterOuterAlt(_localctx, 3);
        setState(47);
        func();
        break;
      }

      case calculatorParser::LPAREN:
      case calculatorParser::NUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(48);
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
  enterRule(_localctx, 6, calculatorParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(51);
        number();
        break;
      }

      case calculatorParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(52);
        match(calculatorParser::LPAREN);
        setState(53);
        expression(0);
        setState(54);
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
  enterRule(_localctx, 8, calculatorParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
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
  enterRule(_localctx, 10, calculatorParser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    funcName();
    setState(61);
    match(calculatorParser::LPAREN);
    setState(62);
    expression(0);
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calculatorParser::COMMA) {
      setState(63);
      match(calculatorParser::COMMA);
      setState(64);
      expression(0);
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(70);
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

tree::TerminalNode* calculatorParser::FuncNameContext::ABS() {
  return getToken(calculatorParser::ABS, 0);
}

tree::TerminalNode* calculatorParser::FuncNameContext::SIN() {
  return getToken(calculatorParser::SIN, 0);
}

tree::TerminalNode* calculatorParser::FuncNameContext::COS() {
  return getToken(calculatorParser::COS, 0);
}

tree::TerminalNode* calculatorParser::FuncNameContext::TAN() {
  return getToken(calculatorParser::TAN, 0);
}

tree::TerminalNode* calculatorParser::FuncNameContext::LOG() {
  return getToken(calculatorParser::LOG, 0);
}

tree::TerminalNode* calculatorParser::FuncNameContext::LN() {
  return getToken(calculatorParser::LN, 0);
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
  enterRule(_localctx, 12, calculatorParser::RuleFuncName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << calculatorParser::ABS)
      | (1ULL << calculatorParser::SIN)
      | (1ULL << calculatorParser::COS)
      | (1ULL << calculatorParser::TAN)
      | (1ULL << calculatorParser::LOG)
      | (1ULL << calculatorParser::LN))) != 0))) {
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

bool calculatorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calculatorParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> calculatorParser::_decisionToDFA;
atn::PredictionContextCache calculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calculatorParser::_atn;
std::vector<uint16_t> calculatorParser::_serializedATN;

std::vector<std::string> calculatorParser::_ruleNames = {
  "input", "expression", "signedAtom", "atom", "number", "func", "funcName"
};

std::vector<std::string> calculatorParser::_literalNames = {
  "", "'('", "')'", "'+'", "'-'", "'*'", "", "", "'^'", "','", "'.'"
};

std::vector<std::string> calculatorParser::_symbolicNames = {
  "", "LPAREN", "RPAREN", "PLUS", "MINUS", "TIMES", "DIV", "MOD", "POW", 
  "COMMA", "POINT", "ABS", "SIN", "COS", "TAN", "LOG", "LN", "NUMBER", "WHITESPACE"
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
    0x3, 0x14, 0x4d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x29, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x2c, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x34, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3b, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x44, 
    0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x47, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x2, 0x3, 0x4, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x2, 0x3, 0x3, 0x2, 0xd, 0x12, 0x2, 0x50, 0x2, 0x10, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 
    0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 0x7, 0x2, 0x2, 0x3, 0x12, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x14, 0x8, 0x3, 0x1, 0x2, 0x14, 0x15, 0x5, 0x6, 
    0x4, 0x2, 0x15, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0xc, 0x9, 0x2, 
    0x2, 0x17, 0x18, 0x7, 0xa, 0x2, 0x2, 0x18, 0x29, 0x5, 0x4, 0x3, 0xa, 
    0x19, 0x1a, 0xc, 0x8, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x7, 0x2, 0x2, 0x1b, 
    0x29, 0x5, 0x4, 0x3, 0x9, 0x1c, 0x1d, 0xc, 0x7, 0x2, 0x2, 0x1d, 0x1e, 
    0x7, 0x8, 0x2, 0x2, 0x1e, 0x29, 0x5, 0x4, 0x3, 0x8, 0x1f, 0x20, 0xc, 
    0x6, 0x2, 0x2, 0x20, 0x21, 0x7, 0x9, 0x2, 0x2, 0x21, 0x29, 0x5, 0x4, 
    0x3, 0x7, 0x22, 0x23, 0xc, 0x5, 0x2, 0x2, 0x23, 0x24, 0x7, 0x5, 0x2, 
    0x2, 0x24, 0x29, 0x5, 0x4, 0x3, 0x6, 0x25, 0x26, 0xc, 0x4, 0x2, 0x2, 
    0x26, 0x27, 0x7, 0x6, 0x2, 0x2, 0x27, 0x29, 0x5, 0x4, 0x3, 0x5, 0x28, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x28, 0x19, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x25, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x2e, 0x34, 0x5, 0x6, 0x4, 0x2, 0x2f, 
    0x30, 0x7, 0x6, 0x2, 0x2, 0x30, 0x34, 0x5, 0x6, 0x4, 0x2, 0x31, 0x34, 
    0x5, 0xc, 0x7, 0x2, 0x32, 0x34, 0x5, 0x8, 0x5, 0x2, 0x33, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x3b, 0x5, 0xa, 0x6, 0x2, 0x36, 0x37, 0x7, 0x3, 0x2, 0x2, 
    0x37, 0x38, 0x5, 0x4, 0x3, 0x2, 0x38, 0x39, 0x7, 0x4, 0x2, 0x2, 0x39, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 
    0x13, 0x2, 0x2, 0x3d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0xe, 
    0x8, 0x2, 0x3f, 0x40, 0x7, 0x3, 0x2, 0x2, 0x40, 0x45, 0x5, 0x4, 0x3, 
    0x2, 0x41, 0x42, 0x7, 0xb, 0x2, 0x2, 0x42, 0x44, 0x5, 0x4, 0x3, 0x2, 
    0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 
    0x4, 0x2, 0x2, 0x49, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x9, 0x2, 
    0x2, 0x2, 0x4b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7, 0x28, 0x2a, 0x33, 0x3a, 
    0x45, 
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
