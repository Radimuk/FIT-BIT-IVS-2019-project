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

#pragma once

#include "calculatorBaseVisitor.h"
#include "../math/GenericMathLib.h"
#include "../math/TrigonometricMathLib.h"
#include "../math/PercentageMathLib.h"
#include <iostream>
#include <algorithm>
#include <cmath>

class MathVisitor : public calculatorBaseVisitor {
public:

	/**
	 * Calls functions for temporary results calculation
	 * @param context
	 * @return result of the calculation
	 */
	antlrcpp::Any visitInput(calculatorParser::InputContext *context) override;

	/**
	 * Calls sum function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return sum of numbers obtained form context expressions
	 */
	antlrcpp::Any visitPlus(calculatorParser::PlusContext *context) override;

	/**
	 * Calls sub function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return diference of numbers obtained form context expressions
	 */
	antlrcpp::Any visitMinus(calculatorParser::MinusContext *context) override;

	/**
	 * Calls mul function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return product of numbers obtained form context expressions
	 */
	antlrcpp::Any visitTimes(calculatorParser::TimesContext *context) override;

	/**
	 * Calls div function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return quotient of numbers obtained form context expressions
	 */
	antlrcpp::Any visitDiv(calculatorParser::DivContext *context) override;

	/**
	 * Calls mod function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return remainder of euclidean division of numbers obtained form context expressions
	 */
	antlrcpp::Any visitMod(calculatorParser::ModContext *context) override;

	/**
	 * Calls abs function from generic math library with number obtained from context as param
	 * @param context
	 * @return absolute value of number obtained form context expression
	 */
	antlrcpp::Any visitAbs(calculatorParser::AbsContext *context) override;

	/**
	 * Calls pow function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return power of exponent (second number) with base (first number) obtained from context
	 */
	antlrcpp::Any visitPow(calculatorParser::PowContext *context) override;

	/**
	 * Extracts number form given context
	 * @param context
	 * @return number obtained form context expression
	 */
	antlrcpp::Any visitNumber(calculatorParser::NumberContext *context) override;

	/**
	 * Calls function from generic math library with number obtained from context as param
	 * For getting function name calls visitFuncName
	 * @param context
	 * @return result of the called function
	 */
	antlrcpp::Any visitFunction(calculatorParser::FunctionContext *context) override;

	/**
	 * Returns name of function (sin, cos, tan, ...), obtained from context
	 * @param context
	 * @return name of function obtained form context
	 */
	antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *context) override;

	/**
	 * Calls fac function from generic math library with number obtained from context as param
	 * @param context
	 * @return factorial of number obtained form context expression
	 */
	antlrcpp::Any visitFactorial(calculatorParser::FactorialContext *context) override;

	/**
	 * Calls root function from generic math library with numbers obtained from context as params
	 * @param context
	 * @return result of root with first number as degree and second as radicant
	 */
	antlrcpp::Any visitRoot(calculatorParser::RootContext *context) override;

	/**
	 * Calls root function from generic math library with number obtained from context as param
	 * @param context
	 * @return square root of number obtained form context
	 */
	antlrcpp::Any visitSqrt(calculatorParser::SqrtContext *context) override;

	/**
	 * Calls mul function from percentage math library with numbers obtained from context as params
	 * @param context
	 * @return product of the first number and percentage represented by second number
	 */
	antlrcpp::Any visitPercentageTimes(calculatorParser::PercentageTimesContext *context) override;

	/**
	 * Calls div function from percentage math library with numbers obtained from context as params
	 * @param context
	 * @return quotient of the first number and percentage represented by second number
	 */
	antlrcpp::Any visitPercentageDiv(calculatorParser::PercentageDivContext *context) override;

	/**
	 * Calls sum function from percentage math library with numbers obtained from context as params
	 * @param context
	 * @return sum of the first number and percentage represented by second number
	 */
	antlrcpp::Any visitPercentagePlus(calculatorParser::PercentagePlusContext *context) override;

	/**
	 * Calls sub function from percentage math library with numbers obtained from context as params
	 * @param context
	 * @return diference of the first number and percentage represented by second number
	 */
	antlrcpp::Any visitPercentageMinus(calculatorParser::PercentageMinusContext *context) override;

	/**
	 * Extracts number with sig form given context
	 * @param context
	 * @return signed number obtained form context expression
	 */
	antlrcpp::Any visitSignedExpression(calculatorParser::SignedExpressionContext *ctx) override;

	/**
	 * Extracts and evaluates expression in parentesis
	 * @param context
	 * @return result of expression in parentesis
	 */
	antlrcpp::Any visitParenthesis(calculatorParser::ParenthesisContext *context) override;

	/**
	 * Returns value of euler constant from C++ library
	 * @param context
	 * @return value of euler constant from C++ library
	 */
	antlrcpp::Any visitEuler(calculatorParser::EulerContext *context) override;

	/**
	 * Returns value of ludolph number constant from C++ library
	 * @param context
	 * @return value of ludolph number constant from C++ library
	 */
	antlrcpp::Any visitPi(calculatorParser::PiContext *context) override;
private:
	GenericMathLib genericMath;
	TrigonometricMathLib trigonometricMath;
	PercentageMathLib percentageMath;
};
