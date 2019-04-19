
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
    setState(6);
    expression(0);
    setState(7);
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
//----------------- RootContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::RootContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::RootContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::RootContext::SQRT() {
  return getToken(calculatorParser::SQRT, 0);
}

calculatorParser::RootContext::RootContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrtContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::SqrtContext::SQRT() {
  return getToken(calculatorParser::SQRT, 0);
}

calculatorParser::ExpressionContext* calculatorParser::SqrtContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

calculatorParser::SqrtContext::SqrtContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::SqrtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitSqrt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EulerContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::EulerContext::EULER() {
  return getToken(calculatorParser::EULER, 0);
}

calculatorParser::EulerContext::EulerContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::EulerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitEuler(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PercentageTimesContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::PercentageTimesContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::PercentageTimesContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::PercentageTimesContext::TIMES() {
  return getToken(calculatorParser::TIMES, 0);
}

tree::TerminalNode* calculatorParser::PercentageTimesContext::PERC() {
  return getToken(calculatorParser::PERC, 0);
}

calculatorParser::PercentageTimesContext::PercentageTimesContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PercentageTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPercentageTimes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PercentageDivContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::PercentageDivContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::PercentageDivContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::PercentageDivContext::DIV() {
  return getToken(calculatorParser::DIV, 0);
}

tree::TerminalNode* calculatorParser::PercentageDivContext::PERC() {
  return getToken(calculatorParser::PERC, 0);
}

calculatorParser::PercentageDivContext::PercentageDivContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PercentageDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPercentageDiv(this);
  else
    return visitor->visitChildren(this);
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
//----------------- FactorialContext ------------------------------------------------------------------

calculatorParser::ExpressionContext* calculatorParser::FactorialContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::FactorialContext::FACT() {
  return getToken(calculatorParser::FACT, 0);
}

calculatorParser::FactorialContext::FactorialContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::FactorialContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFactorial(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionContext ------------------------------------------------------------------

calculatorParser::FuncNameContext* calculatorParser::FunctionContext::funcName() {
  return getRuleContext<calculatorParser::FuncNameContext>(0);
}

tree::TerminalNode* calculatorParser::FunctionContext::LPAREN() {
  return getToken(calculatorParser::LPAREN, 0);
}

std::vector<calculatorParser::ExpressionContext *> calculatorParser::FunctionContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::FunctionContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::FunctionContext::RPAREN() {
  return getToken(calculatorParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> calculatorParser::FunctionContext::COMMA() {
  return getTokens(calculatorParser::COMMA);
}

tree::TerminalNode* calculatorParser::FunctionContext::COMMA(size_t i) {
  return getToken(calculatorParser::COMMA, i);
}

calculatorParser::FunctionContext::FunctionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::ParenthesisContext::LPAREN() {
  return getToken(calculatorParser::LPAREN, 0);
}

calculatorParser::ExpressionContext* calculatorParser::ParenthesisContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::ParenthesisContext::RPAREN() {
  return getToken(calculatorParser::RPAREN, 0);
}

calculatorParser::ParenthesisContext::ParenthesisContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::ParenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitParenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PercentageMinusContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::PercentageMinusContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::PercentageMinusContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::PercentageMinusContext::MINUS() {
  return getToken(calculatorParser::MINUS, 0);
}

tree::TerminalNode* calculatorParser::PercentageMinusContext::PERC() {
  return getToken(calculatorParser::PERC, 0);
}

calculatorParser::PercentageMinusContext::PercentageMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PercentageMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPercentageMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AbsContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> calculatorParser::AbsContext::ABSPAREN() {
  return getTokens(calculatorParser::ABSPAREN);
}

tree::TerminalNode* calculatorParser::AbsContext::ABSPAREN(size_t i) {
  return getToken(calculatorParser::ABSPAREN, i);
}

calculatorParser::ExpressionContext* calculatorParser::AbsContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

calculatorParser::AbsContext::AbsContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::AbsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitAbs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::NumberContext::NUMBER() {
  return getToken(calculatorParser::NUMBER, 0);
}

calculatorParser::NumberContext::NumberContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
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
//----------------- PiContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::PiContext::PI() {
  return getToken(calculatorParser::PI, 0);
}

calculatorParser::PiContext::PiContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPi(this);
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
//----------------- SignedExpressionContext ------------------------------------------------------------------

calculatorParser::ExpressionContext* calculatorParser::SignedExpressionContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::SignedExpressionContext::PLUS() {
  return getToken(calculatorParser::PLUS, 0);
}

tree::TerminalNode* calculatorParser::SignedExpressionContext::MINUS() {
  return getToken(calculatorParser::MINUS, 0);
}

calculatorParser::SignedExpressionContext::SignedExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::SignedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitSignedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PercentagePlusContext ------------------------------------------------------------------

std::vector<calculatorParser::ExpressionContext *> calculatorParser::PercentagePlusContext::expression() {
  return getRuleContexts<calculatorParser::ExpressionContext>();
}

calculatorParser::ExpressionContext* calculatorParser::PercentagePlusContext::expression(size_t i) {
  return getRuleContext<calculatorParser::ExpressionContext>(i);
}

tree::TerminalNode* calculatorParser::PercentagePlusContext::PLUS() {
  return getToken(calculatorParser::PLUS, 0);
}

tree::TerminalNode* calculatorParser::PercentagePlusContext::PERC() {
  return getToken(calculatorParser::PERC, 0);
}

calculatorParser::PercentagePlusContext::PercentagePlusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any calculatorParser::PercentagePlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPercentagePlus(this);
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

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::PLUS:
      case calculatorParser::MINUS: {
        _localctx = _tracker.createInstance<SignedExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(10);
        _la = _input->LA(1);
        if (!(_la == calculatorParser::PLUS

        || _la == calculatorParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(11);
        expression(20);
        break;
      }

      case calculatorParser::LPAREN: {
        _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(12);
        match(calculatorParser::LPAREN);
        setState(13);
        expression(0);
        setState(14);
        match(calculatorParser::RPAREN);
        break;
      }

      case calculatorParser::SQRT: {
        _localctx = _tracker.createInstance<SqrtContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        match(calculatorParser::SQRT);
        setState(17);
        expression(16);
        break;
      }

      case calculatorParser::ABSPAREN: {
        _localctx = _tracker.createInstance<AbsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(18);
        match(calculatorParser::ABSPAREN);
        setState(19);
        expression(0);
        setState(20);
        match(calculatorParser::ABSPAREN);
        break;
      }

      case calculatorParser::ABSVAL:
      case calculatorParser::SIN:
      case calculatorParser::COS:
      case calculatorParser::TAN:
      case calculatorParser::LOG:
      case calculatorParser::LN: {
        _localctx = _tracker.createInstance<FunctionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(22);
        funcName();
        setState(23);
        match(calculatorParser::LPAREN);
        setState(24);
        expression(0);
        setState(29);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == calculatorParser::COMMA) {
          setState(25);
          match(calculatorParser::COMMA);
          setState(26);
          expression(0);
          setState(31);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(32);
        match(calculatorParser::RPAREN);
        break;
      }

      case calculatorParser::NUMBER: {
        _localctx = _tracker.createInstance<NumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(34);
        match(calculatorParser::NUMBER);
        break;
      }

      case calculatorParser::PI: {
        _localctx = _tracker.createInstance<PiContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(35);
        match(calculatorParser::PI);
        break;
      }

      case calculatorParser::EULER: {
        _localctx = _tracker.createInstance<EulerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(36);
        match(calculatorParser::EULER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(84);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(82);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(39);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(40);
          match(calculatorParser::POW);
          setState(41);
          expression(18);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<RootContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(42);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(43);
          match(calculatorParser::SQRT);
          setState(44);
          expression(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<TimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(45);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(46);
          match(calculatorParser::TIMES);
          setState(47);
          expression(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(48);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(49);
          match(calculatorParser::DIV);
          setState(50);
          expression(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(51);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(52);
          match(calculatorParser::MOD);
          setState(53);
          expression(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(54);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(55);
          match(calculatorParser::PLUS);
          setState(56);
          expression(9);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(57);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(58);
          match(calculatorParser::MINUS);
          setState(59);
          expression(7);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<FactorialContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(60);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(61);
          match(calculatorParser::FACT);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<PercentageTimesContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(62);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(63);
          match(calculatorParser::TIMES);
          setState(64);
          expression(0);
          setState(65);
          match(calculatorParser::PERC);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<PercentageDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(67);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(68);
          match(calculatorParser::DIV);
          setState(69);
          expression(0);
          setState(70);
          match(calculatorParser::PERC);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<PercentagePlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(72);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(73);
          match(calculatorParser::PLUS);
          setState(74);
          expression(0);
          setState(75);
          match(calculatorParser::PERC);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<PercentageMinusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(77);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(78);
          match(calculatorParser::MINUS);
          setState(79);
          expression(0);
          setState(80);
          match(calculatorParser::PERC);
          break;
        }

        } 
      }
      setState(86);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
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

tree::TerminalNode* calculatorParser::FuncNameContext::ABSVAL() {
  return getToken(calculatorParser::ABSVAL, 0);
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
  enterRule(_localctx, 4, calculatorParser::RuleFuncName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << calculatorParser::ABSVAL)
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
    case 0: return precpred(_ctx, 17);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 8);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 18);
    case 8: return precpred(_ctx, 14);
    case 9: return precpred(_ctx, 12);
    case 10: return precpred(_ctx, 9);
    case 11: return precpred(_ctx, 7);

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
  "input", "expression", "funcName"
};

std::vector<std::string> calculatorParser::_literalNames = {
  "", "", "'('", "')'", "'|'", "'+'", "'-'", "'*'", "", "", "'^'", "','", 
  "'.'", "'!'", "'\u221A'", "'%'", "'\u03C0'", "'\u212F'"
};

std::vector<std::string> calculatorParser::_symbolicNames = {
  "", "NUMBER", "LPAREN", "RPAREN", "ABSPAREN", "PLUS", "MINUS", "TIMES", 
  "DIV", "MOD", "POW", "COMMA", "POINT", "FACT", "SQRT", "PERC", "PI", "EULER", 
  "ABSVAL", "SIN", "COS", "TAN", "LOG", "LN", "WHITESPACE"
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
    0x3, 0x1a, 0x5c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x1e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x21, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x28, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x55, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x58, 0xb, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x2, 0x3, 0x4, 0x5, 0x2, 0x4, 0x6, 0x2, 
    0x4, 0x3, 0x2, 0x7, 0x8, 0x3, 0x2, 0x14, 0x19, 0x2, 0x6c, 0x2, 0x8, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 0x6, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x9, 0x5, 0x4, 0x3, 0x2, 0x9, 0xa, 0x7, 0x2, 0x2, 0x3, 
    0xa, 0x3, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x8, 0x3, 0x1, 0x2, 0xc, 0xd, 
    0x9, 0x2, 0x2, 0x2, 0xd, 0x28, 0x5, 0x4, 0x3, 0x16, 0xe, 0xf, 0x7, 0x4, 
    0x2, 0x2, 0xf, 0x10, 0x5, 0x4, 0x3, 0x2, 0x10, 0x11, 0x7, 0x5, 0x2, 
    0x2, 0x11, 0x28, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0x10, 0x2, 0x2, 
    0x13, 0x28, 0x5, 0x4, 0x3, 0x12, 0x14, 0x15, 0x7, 0x6, 0x2, 0x2, 0x15, 
    0x16, 0x5, 0x4, 0x3, 0x2, 0x16, 0x17, 0x7, 0x6, 0x2, 0x2, 0x17, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x5, 0x6, 0x4, 0x2, 0x19, 0x1a, 0x7, 
    0x4, 0x2, 0x2, 0x1a, 0x1f, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x1c, 0x7, 0xd, 
    0x2, 0x2, 0x1c, 0x1e, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 0x5, 0x2, 0x2, 0x23, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x28, 0x7, 0x3, 0x2, 0x2, 0x25, 0x28, 0x7, 
    0x12, 0x2, 0x2, 0x26, 0x28, 0x7, 0x13, 0x2, 0x2, 0x27, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0xe, 0x3, 0x2, 0x2, 0x2, 0x27, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x14, 0x3, 0x2, 0x2, 0x2, 0x27, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x56, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 
    0xc, 0x13, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0xc, 0x2, 0x2, 0x2b, 0x55, 0x5, 
    0x4, 0x3, 0x14, 0x2c, 0x2d, 0xc, 0x11, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x10, 
    0x2, 0x2, 0x2e, 0x55, 0x5, 0x4, 0x3, 0x12, 0x2f, 0x30, 0xc, 0xf, 0x2, 
    0x2, 0x30, 0x31, 0x7, 0x9, 0x2, 0x2, 0x31, 0x55, 0x5, 0x4, 0x3, 0x10, 
    0x32, 0x33, 0xc, 0xd, 0x2, 0x2, 0x33, 0x34, 0x7, 0xa, 0x2, 0x2, 0x34, 
    0x55, 0x5, 0x4, 0x3, 0xe, 0x35, 0x36, 0xc, 0xc, 0x2, 0x2, 0x36, 0x37, 
    0x7, 0xb, 0x2, 0x2, 0x37, 0x55, 0x5, 0x4, 0x3, 0xd, 0x38, 0x39, 0xc, 
    0xa, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x7, 0x2, 0x2, 0x3a, 0x55, 0x5, 0x4, 
    0x3, 0xb, 0x3b, 0x3c, 0xc, 0x8, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x8, 0x2, 
    0x2, 0x3d, 0x55, 0x5, 0x4, 0x3, 0x9, 0x3e, 0x3f, 0xc, 0x14, 0x2, 0x2, 
    0x3f, 0x55, 0x7, 0xf, 0x2, 0x2, 0x40, 0x41, 0xc, 0x10, 0x2, 0x2, 0x41, 
    0x42, 0x7, 0x9, 0x2, 0x2, 0x42, 0x43, 0x5, 0x4, 0x3, 0x2, 0x43, 0x44, 
    0x7, 0x11, 0x2, 0x2, 0x44, 0x55, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0xc, 
    0xe, 0x2, 0x2, 0x46, 0x47, 0x7, 0xa, 0x2, 0x2, 0x47, 0x48, 0x5, 0x4, 
    0x3, 0x2, 0x48, 0x49, 0x7, 0x11, 0x2, 0x2, 0x49, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4b, 0xc, 0xb, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x7, 0x2, 0x2, 
    0x4c, 0x4d, 0x5, 0x4, 0x3, 0x2, 0x4d, 0x4e, 0x7, 0x11, 0x2, 0x2, 0x4e, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0xc, 0x9, 0x2, 0x2, 0x50, 0x51, 
    0x7, 0x8, 0x2, 0x2, 0x51, 0x52, 0x5, 0x4, 0x3, 0x2, 0x52, 0x53, 0x7, 
    0x11, 0x2, 0x2, 0x53, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x32, 0x3, 0x2, 0x2, 0x2, 0x54, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x38, 0x3, 0x2, 0x2, 0x2, 0x54, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x54, 0x40, 0x3, 0x2, 0x2, 0x2, 0x54, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x9, 0x3, 0x2, 0x2, 
    0x5a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f, 0x27, 0x54, 0x56, 
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
