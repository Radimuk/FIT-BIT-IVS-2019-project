
// Generated from calculator.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  calculatorParser : public antlr4::Parser {
public:
  enum {
    LPAREN = 1, RPAREN = 2, PLUS = 3, MINUS = 4, TIMES = 5, DIV = 6, MOD = 7, 
    POW = 8, COMMA = 9, POINT = 10, SIN = 11, COS = 12, TAN = 13, LOG = 14, 
    LN = 15, NUMBER = 16, WHITESPACE = 17
  };

  enum {
    RuleInput = 0, RuleExpression = 1, RuleMultiplyingExpression = 2, RulePowExpression = 3, 
    RuleSignedAtom = 4, RuleAtom = 5, RuleNumber = 6, RuleFunc = 7, RuleFuncName = 8
  };

  calculatorParser(antlr4::TokenStream *input);
  ~calculatorParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InputContext;
  class ExpressionContext;
  class MultiplyingExpressionContext;
  class PowExpressionContext;
  class SignedAtomContext;
  class AtomContext;
  class NumberContext;
  class FuncContext;
  class FuncNameContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EOF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberExpressionContext : public ExpressionContext {
  public:
    NumberExpressionContext(ExpressionContext *ctx);

    MultiplyingExpressionContext *multiplyingExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusContext : public ExpressionContext {
  public:
    PlusContext(ExpressionContext *ctx);

    std::vector<MultiplyingExpressionContext *> multiplyingExpression();
    MultiplyingExpressionContext* multiplyingExpression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusContext : public ExpressionContext {
  public:
    MinusContext(ExpressionContext *ctx);

    std::vector<MultiplyingExpressionContext *> multiplyingExpression();
    MultiplyingExpressionContext* multiplyingExpression(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();

  class  MultiplyingExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplyingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MultiplyingExpressionContext() = default;
    void copyFrom(MultiplyingExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public MultiplyingExpressionContext {
  public:
    DivContext(MultiplyingExpressionContext *ctx);

    std::vector<PowExpressionContext *> powExpression();
    PowExpressionContext* powExpression(size_t i);
    antlr4::tree::TerminalNode *DIV();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModContext : public MultiplyingExpressionContext {
  public:
    ModContext(MultiplyingExpressionContext *ctx);

    std::vector<PowExpressionContext *> powExpression();
    PowExpressionContext* powExpression(size_t i);
    antlr4::tree::TerminalNode *MOD();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimesContext : public MultiplyingExpressionContext {
  public:
    TimesContext(MultiplyingExpressionContext *ctx);

    std::vector<PowExpressionContext *> powExpression();
    PowExpressionContext* powExpression(size_t i);
    antlr4::tree::TerminalNode *TIMES();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberMultiplyintExpressionContext : public MultiplyingExpressionContext {
  public:
    NumberMultiplyintExpressionContext(MultiplyingExpressionContext *ctx);

    PowExpressionContext *powExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MultiplyingExpressionContext* multiplyingExpression();

  class  PowExpressionContext : public antlr4::ParserRuleContext {
  public:
    PowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PowExpressionContext() = default;
    void copyFrom(PowExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PowContext : public PowExpressionContext {
  public:
    PowContext(PowExpressionContext *ctx);

    std::vector<SignedAtomContext *> signedAtom();
    SignedAtomContext* signedAtom(size_t i);
    antlr4::tree::TerminalNode *POW();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberPowExpressionContext : public PowExpressionContext {
  public:
    NumberPowExpressionContext(PowExpressionContext *ctx);

    SignedAtomContext *signedAtom();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PowExpressionContext* powExpression();

  class  SignedAtomContext : public antlr4::ParserRuleContext {
  public:
    SignedAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    SignedAtomContext *signedAtom();
    antlr4::tree::TerminalNode *MINUS();
    FuncContext *func();
    AtomContext *atom();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedAtomContext* signedAtom();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncNameContext *funcName();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  FuncNameContext : public antlr4::ParserRuleContext {
  public:
    FuncNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncNameContext* funcName();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

