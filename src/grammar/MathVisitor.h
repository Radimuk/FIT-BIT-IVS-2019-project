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

	antlrcpp::Any visitPlus(calculatorParser::PlusContext *context) override;

	antlrcpp::Any visitMinus(calculatorParser::MinusContext *context) override;

	antlrcpp::Any visitTimes(calculatorParser::TimesContext *context) override;

	antlrcpp::Any visitDiv(calculatorParser::DivContext *context) override;

	antlrcpp::Any visitMod(calculatorParser::ModContext *context) override;

	antlrcpp::Any visitAbs(calculatorParser::AbsContext *context) override;

	antlrcpp::Any visitPow(calculatorParser::PowContext *context) override;

	antlrcpp::Any visitNumber(calculatorParser::NumberContext *context) override;

	antlrcpp::Any visitFunction(calculatorParser::FunctionContext *context) override;

	antlrcpp::Any visitFuncName(calculatorParser::FuncNameContext *context) override;

	antlrcpp::Any visitFactorial(calculatorParser::FactorialContext *context) override;

	antlrcpp::Any visitRoot(calculatorParser::RootContext *context) override;

	antlrcpp::Any visitSqrt(calculatorParser::SqrtContext *context) override;

	antlrcpp::Any visitPercentageTimes(calculatorParser::PercentageTimesContext *context) override;

	antlrcpp::Any visitPercentageDiv(calculatorParser::PercentageDivContext *context) override;

	antlrcpp::Any visitPercentagePlus(calculatorParser::PercentagePlusContext *context) override;

	antlrcpp::Any visitPercentageMinus(calculatorParser::PercentageMinusContext *context) override;

	antlrcpp::Any visitSignedExpression(calculatorParser::SignedExpressionContext *ctx) override;

	antlrcpp::Any visitParenthesis(calculatorParser::ParenthesisContext *context) override;

	antlrcpp::Any visitEuler(calculatorParser::EulerContext *context) override;

	antlrcpp::Any visitPi(calculatorParser::PiContext *context) override;
private:
	GenericMathLib genericMath;
	TrigonometricMathLib trigonometricMath;
	PercentageMathLib percentageMath;
};
