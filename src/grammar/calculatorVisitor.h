
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
    virtual antlrcpp::Any visitInput(calculatorParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitDiv(calculatorParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitMod(calculatorParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitTimes(calculatorParser::TimesContext *context) = 0;

    virtual antlrcpp::Any visitPow(calculatorParser::PowContext *context) = 0;

    virtual antlrcpp::Any visitNumberExpression(calculatorParser::NumberExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPlus(calculatorParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitMinus(calculatorParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitSignedAtom(calculatorParser::SignedAtomContext *context) = 0;

    virtual antlrcpp::Any visitAtom(calculatorParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitNumber(calculatorParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitFunc(calculatorParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *context) = 0;


};

