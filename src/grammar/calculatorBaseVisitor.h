
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

  virtual antlrcpp::Any visitPlus(calculatorParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(calculatorParser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimes(calculatorParser::TimesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(calculatorParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPow(calculatorParser::PowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedAtom(calculatorParser::SignedAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(calculatorParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(calculatorParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(calculatorParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *ctx) override {
    return visitChildren(ctx);
  }


};

