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
	double result = std::stod(context->getText());
	return result;
}

antlrcpp::Any MathVisitor::visitInput(calculatorParser::InputContext *context) {
	double result = visit(context->expression());
	return result;
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

antlrcpp::Any MathVisitor::visitPow(calculatorParser::PowContext *context) {
	double a = visit(context->expression(0));
	double b = visit(context->expression(1));
	return genericMath.pow(a, b);
}

antlrcpp::Any MathVisitor::visitSignedAtom(calculatorParser::SignedAtomContext *context) {
	if (context->func() != nullptr) {
		return visit(context->func());
	}
	double result = std::stod(context->getText());
	return result;
}

antlrcpp::Any MathVisitor::visitAtom(calculatorParser::AtomContext *context) {
	double result = std::stod(context->getText());
	return result;
}

antlrcpp::Any MathVisitor::visitFunc(calculatorParser::FuncContext *context) {
	std::string func = visit(context->funcName());
	double ex = visit(context->expression(0));
	if (func == "sin") {
		return trigMath.sin(ex);
	} else if (func == "cos") {
		return trigMath.cos(ex);
	} else if (func == "tan") {
		return trigMath.tan(ex);
	} else {
		return 0.0;
	}
}

antlrcpp::Any MathVisitor::visitFuncName(calculatorParser::FuncNameContext *context) {
	std::string result = context->getText();
	return result;
}
