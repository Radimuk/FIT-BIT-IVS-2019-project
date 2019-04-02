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

#include <math.h>

/**
 * Percentage math library
 */
class PercentageMathLib {


public:

	/**
	 * Adds percentage to a numbers
	 * @param addend Numeric addend
	 * @param percentage Percentage addend
	 * @return Sum of a number and percentage
	 */
	double add(double addend, double percentage);

	/**
	 * Subtracts a number and a percentage
	 * @param minuend Numeric minuend
	 * @param percentage Percentage subtrahend
	 * @return Difference of a number and percentage
	 */
	double sub(double minuend, double percentage);

	/**
	 * Multiplies a number and a percentage
	 * @param factor Numeric factor
	 * @param percentage Percentage factor
	 * @return Product of a number and percentage
	 */
	double mul(double factor, double percentage);

	/**
	 * Divides a number and a percentage
	 * @param dividend Numeric divident
	 * @param percentage Percentage divisor
	 * @return Quotient of a number and percentage
	 */
	double div(double dividend, double percentage);
};
