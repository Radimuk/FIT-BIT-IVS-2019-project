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

#include <gtest/gtest.h>
#include "antlr4-runtime.h"
#include "../../src/grammar/calculatorBaseVisitor.h"
#include "../../src/grammar/calculatorLexer.h"
#include "../../src/grammar/calculatorParser.h"

namespace FitCalcTests {

	class calculatorBaseVisitorTest : public ::testing::Test {
	};

	TEST_F(calculatorBaseVisitorTest, add) {
		antlr4::ANTLRInputStream input("1.0 + 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::ExpressionContext* expresion = parser.expression();
		calculatorBaseVisitor visitor;
		double actual = visitor.visitExpression(expresion);
		double expected = 3.0;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, sub) {
		antlr4::ANTLRInputStream input("1.0 - 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::ExpressionContext* expresion = parser.expression();
		calculatorBaseVisitor visitor;
		double actual = visitor.visitExpression(expresion);
		double expected = -1.0;
		EXPECT_EQ(expected, actual);
	}

}
