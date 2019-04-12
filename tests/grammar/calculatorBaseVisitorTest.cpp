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
#include "../../src/grammar/MathVisitor.h"
#include "../../src/grammar/calculatorLexer.h"
#include "../../src/grammar/calculatorParser.h"

namespace FitCalcTests {

	class calculatorBaseVisitorTest : public ::testing::Test {
	protected:
		double error = 1e-6;
	};

	TEST_F(calculatorBaseVisitorTest, add) {
		antlr4::ANTLRInputStream input("1.0 + 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		auto actual = visitor.visit(expresion);
		double expected = 3.0;
		EXPECT_EQ(expected, static_cast<double>(actual));
	}

	TEST_F(calculatorBaseVisitorTest, sub) {
		antlr4::ANTLRInputStream input("1.0 - 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = -1.0;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, mul) {
		antlr4::ANTLRInputStream input("1.0 * 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 2.0;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, div) {
		antlr4::ANTLRInputStream input("2.0 / 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 1.0;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, mod) {
		antlr4::ANTLRInputStream input("9.0 mod 2");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 1.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, abs) {
		antlr4::ANTLRInputStream input("|-9.0|");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 9.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, fact) {
		antlr4::ANTLRInputStream input("5.0!");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 120.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, pow) {
		antlr4::ANTLRInputStream input("2.0^3");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 8.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, log) {
		antlr4::ANTLRInputStream input("log 100.0");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 2.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, ln) {
		antlr4::ANTLRInputStream input("ln 10.0");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = M_LN10;
		EXPECT_NEAR(expected, actual, this->error);
	}


	TEST_F(calculatorBaseVisitorTest, sin) {
		antlr4::ANTLRInputStream input("sin 0");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 0.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, cos) {
		antlr4::ANTLRInputStream input("cos 0");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 1.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, tan) {
		antlr4::ANTLRInputStream input("tan 0");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 0.0;
		EXPECT_NEAR(expected, actual, this->error);
	}

	TEST_F(calculatorBaseVisitorTest, addPercentage) {
		antlr4::ANTLRInputStream input("10.0 + 20%");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 12.0;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, subPercentage) {
		antlr4::ANTLRInputStream input("10.0 - 20%");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 8.0;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, mulPercentage) {
		antlr4::ANTLRInputStream input("18.0 * 10%");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 1.8;
		EXPECT_EQ(expected, actual);
	}

	TEST_F(calculatorBaseVisitorTest, divPercentage) {
		antlr4::ANTLRInputStream input("18.0 / 20%");
		calculatorLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		calculatorParser::InputContext* expresion = parser.input();
		MathVisitor visitor;
		double actual = visitor.visit(expresion);
		double expected = 90.0;
		EXPECT_EQ(expected, actual);
	}
}
