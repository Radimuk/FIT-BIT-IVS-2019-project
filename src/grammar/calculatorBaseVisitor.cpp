
// Generated from calculator.g4 by ANTLR 4.7.2


#include "calculatorBaseVisitor.h"

antlrcpp::Any calculatorBaseVisitor::visitExpression(calculatorParser::ExpressionContext *context) {
	double left = std::stod(context->left->getText(), nullptr);
	double right = std::stod(context->right->getText(), nullptr);
	if (context->operation->getText() == "+") {
		return genericMath.add(left, right);
	} else {
		return genericMath.sub(left, right);
	}
}
