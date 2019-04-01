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
#include "../../src/math/TrigonometricMathLib.h"

namespace FitCalcTests {

	class TrigonometricMathLibTest : public ::testing::Test {
	protected:
		TrigonometricMathLib mathLib;
	};

	TEST_F(TrigonometricMathLibTest, sin) {
		ASSERT_EQ(0, this->mathLib.sin(0));
		ASSERT_EQ(1, this->mathLib.sin(90));
		ASSERT_EQ(0.00872654, this->mathLib.sin(0.5));
	}

	TEST_F(TrigonometricMathLibTest, cos) {
		ASSERT_EQ(0, this->mathLib.cos(90));
		ASSERT_EQ(1, this->mathLib.cos(0));
		ASSERT_EQ(0.99996192, this->mathLib.cos(0.5));
	}

	TEST_F(TrigonometricMathLibTest, tan) {
		ASSERT_EQ(0, this->mathLib.tan(0));
		ASSERT_EQ(1, this->mathLib.tan(45));
		ASSERT_EQ(0.00872687, this->mathLib.tan(0.5));
	}
}
