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

#include <cmath>
#include <stdexcept>

/**
 * Generic math library
 */
class GenericMathLib {

public:

	/**
	 * Adds two numbers
	 * @param addendA First addend
	 * @param addendB Second addend
	 * @return Sum of two numbers
	 */
	double add(double addendA, double addendB);

	/**
	 * Subtracts two numbers
	 * @param minuend Minuend
	 * @param subtrahend Subtrahend
	 * @return Difference of two numbers
	 */
	double sub(double minuend, double subtrahend);

	/**
	 * Multiplies two numbers
	 * @param factorA First factor
	 * @param factorB Second factor
	 * @return Product of two numbers
	 */
	double mul(double factorA, double factorB);

	/**
	 * Divides two numbers
	 * @param dividend Divident
	 * @param divisor Divisor
	 * @return Quotient of two numbers
	 */
	double div(double dividend, double divisor);

	/**
	 * Returns the remainder of the Euclidean division of two numbers
	 * @param dividend Dividend
	 * @param divisor Divisor
	 * @return Remainder of the Euclidean division of two numbers
	 */
	double mod(double dividend, double divisor);

	/**
	 * Returns the absolute value of a number
	 * @param x Number
	 * @return The absolute value of a number
	 */
	double abs(double x);

	/**
	 * Returns the factorial of a number
	 * @param x Number
	 * @return Factorial of a number
	 */
	double fact(int x);

	/**
	 * Returns power of exponent with a base
	 * @param base Base
	 * @param exponent Exponent
	 * @return Power of exponent with a base
	 */
	double pow(double base, double exponent);

	/**
	 * Returns a nth root of a number
	 * @param degree Degree
	 * @param radicand Radicand
	 * @return Nth root of a number
	 */
	double root(double degree, double radicand);

	/**
	 * Returns a decimal logarithm of a number
	 * @param x Number
	 * @return Decimal logarithm of a number
	 */
	double log(double x);

	/**
	 * Returns a natural logarithm of a number
	 * @param x Number
	 * @return Natural logarithm of a number
	 */
	double ln(double x);
};
