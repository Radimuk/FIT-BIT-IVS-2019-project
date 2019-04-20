
// Generated from calculator.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calculatorVisitor.h"


/**
 * This class provides an empty implementation of calculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calculatorBaseVisitor : public calculatorVisitor {
public:

  virtual antlrcpp::Any visitInput(calculatorParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMod(calculatorParser::ModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoot(calculatorParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrt(calculatorParser::SqrtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercentageTimes(calculatorParser::PercentageTimesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercentageDiv(calculatorParser::PercentageDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(calculatorParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorial(calculatorParser::FactorialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(calculatorParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesis(calculatorParser::ParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercentageMinus(calculatorParser::PercentageMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbs(calculatorParser::AbsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(calculatorParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimes(calculatorParser::TimesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPow(calculatorParser::PowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(calculatorParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(calculatorParser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedExpression(calculatorParser::SignedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPercentagePlus(calculatorParser::PercentagePlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *ctx) override {
    return visitChildren(ctx);
  }


};

