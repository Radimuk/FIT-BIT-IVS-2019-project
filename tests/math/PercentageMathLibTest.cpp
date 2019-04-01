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
#include "../../src/math/PercentageMathLib.h"

namespace FitCalcTests {

	class PercentageMathLibTest : public ::testing::Test {
	protected:
		PercentageMathLib mathLib;
	};

	TEST_F(PercentageMathLibTest, add) {
		ASSERT_EQ(12, this->mathLib.add(10, 20));
		ASSERT_EQ(39.6, this->mathLib.add(33, 20));
		ASSERT_EQ(48.15, this->mathLib.add(45, 7));
	}

	TEST_F(PercentageMathLibTest, sub) {
		ASSERT_EQ(80, this->mathLib.sub(100, 20));
		ASSERT_EQ(79.05, this->mathLib.sub(93, 15));
		ASSERT_EQ(10.45, this->mathLib.sub(11, 5));
	}

	TEST_F(PercentageMathLibTest, mul) {
		ASSERT_EQ(20, this->mathLib.mul(100, 20));
		ASSERT_EQ(4.65, this->mathLib.mul(31, 15));
		ASSERT_EQ(1.8, this->mathLib.mul(18, 10));
	}

	TEST_F(PercentageMathLibTest, div) {
		ASSERT_EQ(500, this->mathLib.div(100, 20));
		ASSERT_EQ(60, this->mathLib.div(12, 20));
		ASSERT_EQ(20, this->mathLib.div(20, 100));
		ASSERT_ANY_THROW(this->mathLib.div(100, 0));
	}
}
