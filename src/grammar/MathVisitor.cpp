/*
 * Copyright (C) 2019 Radim Lipka <xlipka02@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Roman Ondráček <xondra58@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Pavel Raur <xraurp00@stud.fit.vutbr.cz>
 * Copyright (C) 2019 David Reinhart <xreinh00@stud.fit.vutbr.cz>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "MathVisitor.h"

antlrcpp::Any MathVisitor::visitNumber(calculatorParser::NumberContext *context) {
	return std::stod(context->getText());
}

antlrcpp::Any MathVisitor::visitInput(calculatorParser::InputContext *context) {
	return visit(context->expression());
}

antlrcpp::Any MathVisitor::visitPlus(calculatorParser::PlusContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.add(a, b);
}

antlrcpp::Any MathVisitor::visitMinus(calculatorParser::MinusContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.sub(a, b);
}

antlrcpp::Any MathVisitor::visitTimes(calculatorParser::TimesContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.mul(a, b);
}

antlrcpp::Any MathVisitor::visitDiv(calculatorParser::DivContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.div(a, b);
}

antlrcpp::Any MathVisitor::visitMod(calculatorParser::ModContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.mod(a, b);
}

antlrcpp::Any MathVisitor::visitAbs(calculatorParser::AbsContext *context) {
	double a = visit(context->expression());
	return genericMath.abs(a);
}

antlrcpp::Any MathVisitor::visitPow(calculatorParser::PowContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.pow(a, b);
}

antlrcpp::Any MathVisitor::visitFunction(calculatorParser::FunctionContext *context) {
	std::string func = visit(context->funcName());
	double ex = visit(context->expression(0));
	if (func == "sin") {
		return trigonometricMath.sin(ex);
	} else if (func == "cos") {
		return trigonometricMath.cos(ex);
	} else if (func == "tan" || func == "tg") {
		return trigonometricMath.tan(ex);
	} else if (func == "abs") {
		return genericMath.abs(ex);
	} else if (func == "log") {
		return genericMath.log(ex);
	} else if (func == "ln") {
		return genericMath.ln(ex);
	} else {
		return 0.0;
	}
}

antlrcpp::Any MathVisitor::visitFuncName(calculatorParser::FuncNameContext *context) {
	std::string result = context->getText();
	std::transform(result.begin(), result.end(), result.begin(), ::tolower); 
	return result;
}


antlrcpp::Any MathVisitor::visitFactorial(calculatorParser::FactorialContext *context) {
	double result = std::round(static_cast<double>(visit(context->expression())));
	return genericMath.fact(static_cast<int>(result));
}

antlrcpp::Any MathVisitor::visitRoot(calculatorParser::RootContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.root(a, b);
}

antlrcpp::Any MathVisitor::visitSqrt(calculatorParser::SqrtContext *context) {
	double a = visit(context->expression());
	return genericMath.root(2, a);
}

antlrcpp::Any MathVisitor::visitPercentageTimes(calculatorParser::PercentageTimesContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return percentageMath.mul(a, b);
}

antlrcpp::Any MathVisitor::visitPercentageDiv(calculatorParser::PercentageDivContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return percentageMath.div(a, b);
}

antlrcpp::Any MathVisitor::visitPercentagePlus(calculatorParser::PercentagePlusContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return percentageMath.add(a, b);
}

antlrcpp::Any MathVisitor::visitPercentageMinus(calculatorParser::PercentageMinusContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return percentageMath.sub(a, b);
}

antlrcpp::Any MathVisitor::visitSignedExpression(calculatorParser::SignedExpressionContext *context) {
	double number = visit(context->expression());
	if (context->MINUS()) {
		return -1.0 * number;
	}
	return number;
}

antlrcpp::Any MathVisitor::visitParenthesis(calculatorParser::ParenthesisContext *context) {
	return visit(context->expression());
}
