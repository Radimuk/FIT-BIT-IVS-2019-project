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
#include "../../src/math/GenericMathLib.h"

namespace FitCalcTests {

	class GenericMathLibTest : public ::testing::Test {
	protected:
		GenericMathLib mathLib;
		double error = 1e-6;
	};

	TEST_F(GenericMathLibTest, add) {
		EXPECT_EQ(5, this->mathLib.add(2, 3));
		EXPECT_EQ(20, this->mathLib.add(0, 20));
		EXPECT_EQ(-1, this->mathLib.add(2, -3));
	}

	TEST_F(GenericMathLibTest, sub) {
		EXPECT_EQ(-1, this->mathLib.sub(2, 3));
		EXPECT_EQ(4, this->mathLib.sub(7, 3));
		EXPECT_EQ(1, this->mathLib.sub(-2, -3));
	}

	TEST_F(GenericMathLibTest, mul) {
		EXPECT_EQ(10, this->mathLib.mul(2, 5));
		EXPECT_EQ(-10, this->mathLib.mul(-2, 5));
		EXPECT_EQ(0, this->mathLib.mul(2, 0));
	}

	TEST_F(GenericMathLibTest, div) {
		EXPECT_EQ(4, this->mathLib.div(12, 3));
		EXPECT_EQ(0.6, this->mathLib.div(12, 20));
		EXPECT_EQ(-24, this->mathLib.div(-12, 0.5));
		EXPECT_ANY_THROW(this->mathLib.div(10, 0));
	}

	TEST_F(GenericMathLibTest, mod) {
		EXPECT_EQ(0, this->mathLib.mod(12, 3));
		EXPECT_EQ(1, this->mathLib.mod(13, 3));
		EXPECT_EQ(5, this->mathLib.mod(15, 10));
		EXPECT_ANY_THROW(this->mathLib.mod(10, 0));
	}

	TEST_F(GenericMathLibTest, abs) {
		EXPECT_EQ(2, this->mathLib.abs(2));
		EXPECT_EQ(4.5, this->mathLib.abs(-4.5));
		EXPECT_EQ(0, this->mathLib.abs(0));
	}

	TEST_F(GenericMathLibTest, fact) {
		EXPECT_EQ(3628800, this->mathLib.fact(10));
		EXPECT_EQ(6, this->mathLib.fact(3));
		EXPECT_EQ(1, this->mathLib.fact(0));
	}

	TEST_F(GenericMathLibTest, pow) {
		EXPECT_EQ(8, this->mathLib.pow(2, 3));
		EXPECT_EQ(7776, this->mathLib.pow(6, 5));
		EXPECT_EQ(4, this->mathLib.pow(2, 2));
	}

	TEST_F(GenericMathLibTest, root) {
		EXPECT_EQ(3, this->mathLib.root(2, 9));
		EXPECT_NEAR(1.414213562, this->mathLib.root(2, 2), this->error);
		EXPECT_NEAR(3.107232506, this->mathLib.root(3, 30), this->error);
	}

	TEST_F(GenericMathLibTest, log) {
		EXPECT_EQ(2, this->mathLib.log(100));
		EXPECT_NEAR(1.079181246, this->mathLib.log(12), this->error);
		EXPECT_NEAR(-0.301029996, this->mathLib.log(0.5), this->error);
		EXPECT_ANY_THROW(this->mathLib.log(-2));
	}

	TEST_F(GenericMathLibTest, ln) {
		EXPECT_NEAR(M_LN10, this->mathLib.ln(10), this->error);
		EXPECT_NEAR(M_LN2, this->mathLib.ln(2), this->error);
		EXPECT_NEAR(-M_LN2, this->mathLib.ln(0.5), this->error);
		EXPECT_ANY_THROW(this->mathLib.ln(-2));
	}


}
