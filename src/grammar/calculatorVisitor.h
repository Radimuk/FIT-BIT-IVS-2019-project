
// Generated from calculator.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calculatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calculatorParser.
 */
class  calculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calculatorParser.
   */
    virtual antlrcpp::Any visitExpression(calculatorParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyingExpression(calculatorParser::MultiplyingExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPowExpression(calculatorParser::PowExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSignedAtom(calculatorParser::SignedAtomContext *context) = 0;

    virtual antlrcpp::Any visitAtom(calculatorParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitNumber(calculatorParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitFunc(calculatorParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *context) = 0;


};

