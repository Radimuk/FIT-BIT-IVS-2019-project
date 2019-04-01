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
	};

	TEST_F(GenericMathLibTest, add) {
		ASSERT_EQ(5, this->mathLib.add(2, 3));
		ASSERT_EQ(20, this->mathLib.add(0, 20));
		ASSERT_EQ(-1, this->mathLib.add(2, -3));
	}

	TEST_F(GenericMathLibTest, sub) {
		ASSERT_EQ(-1, this->mathLib.sub(2, 3));
		ASSERT_EQ(4, this->mathLib.sub(7, 3));
		ASSERT_EQ(1, this->mathLib.sub(-2, -3));
	}

	TEST_F(GenericMathLibTest, mul) {
		ASSERT_EQ(10, this->mathLib.mul(2, 5));
		ASSERT_EQ(-10, this->mathLib.mul(-2, 5));
		ASSERT_EQ(0, this->mathLib.mul(2, 0));
	}

	TEST_F(GenericMathLibTest, div) {
		ASSERT_EQ(4, this->mathLib.div(12, 3));
		ASSERT_EQ(0.6, this->mathLib.div(12, 20));
		ASSERT_EQ(-24, this->mathLib.div(-12, 0.5));
	}

	TEST_F(GenericMathLibTest, mod) {
		ASSERT_EQ(0, this->mathLib.mod(12, 3));
		ASSERT_EQ(1, this->mathLib.mod(13, 3));
		ASSERT_EQ(5, this->mathLib.mod(15, 10));
	}

	TEST_F(GenericMathLibTest, abs) {
		ASSERT_EQ(2, this->mathLib.abs(2));
		ASSERT_EQ(4.5, this->mathLib.abs(-4.5));
		ASSERT_EQ(0, this->mathLib.abs(0));
	}

	TEST_F(GenericMathLibTest, fact) {
		ASSERT_EQ(3628800, this->mathLib.fact(10));
		ASSERT_EQ(6, this->mathLib.fact(3));
		ASSERT_EQ(1, this->mathLib.fact(0));
	}

	TEST_F(GenericMathLibTest, pow) {
		ASSERT_EQ(8, this->mathLib.pow(2, 3));
		ASSERT_EQ(7776, this->mathLib.pow(6, 5));
		ASSERT_EQ(4, this->mathLib.pow(2, 2));
	}

	TEST_F(GenericMathLibTest, root) {
		ASSERT_EQ(3, this->mathLib.root(9, 2));
		ASSERT_EQ(1.414213562, this->mathLib.root(2, 2));
		ASSERT_EQ(3.107232506, this->mathLib.root(30, 3));
	}

	TEST_F(GenericMathLibTest, log) {
		ASSERT_EQ(2, this->mathLib.log(100));
		ASSERT_EQ(1.079181246, this->mathLib.log(12));
		ASSERT_EQ(-0.301029996, this->mathLib.log(0.5));
	}

	TEST_F(GenericMathLibTest, ln) {
		ASSERT_EQ(2.302585093, this->mathLib.ln(10));
		ASSERT_EQ(0.693147181, this->mathLib.ln(2));
		ASSERT_EQ(-0.693147181, this->mathLib.ln(0.5));
	}



}
