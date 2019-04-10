
// Generated from calculator.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calculatorVisitor.h"
#include "../math/GenericMathLib.h"


/**
 * This class provides an empty implementation of calculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calculatorBaseVisitor : public calculatorVisitor {
public:

  antlrcpp::Any visitExpression(calculatorParser::ExpressionContext *ctx) override;

  virtual antlrcpp::Any visitMultiplyingExpression(calculatorParser::MultiplyingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExpression(calculatorParser::PowExpressionContext *ctx) override {
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

private:
	GenericMathLib genericMath;

};

