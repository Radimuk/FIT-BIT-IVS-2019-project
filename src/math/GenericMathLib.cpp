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

#include "GenericMathLib.h"

double GenericMathLib::add(double addendA, double addendB) {
	return addendA + addendB;
}

double GenericMathLib::sub(double minuend, double subtrahend) {
	return minuend - subtrahend;
}

double GenericMathLib::mul(double factorA, double factorB) {
	return factorA * factorB;
}

double GenericMathLib::div(double dividend, double divisor) {
	if (divisor == 0) {
		throw std::domain_error("Division by zero.");
	}
	return dividend / divisor;
}

double GenericMathLib::mod(double dividend, double divisor) {
	if (divisor == 0) {
		throw std::domain_error("Division by zero.");
	}
	return std::fmod(dividend, divisor);
}

double GenericMathLib::abs(double x) {
	return std::fabs(x);
}

double GenericMathLib::fact(int x) {
	if (x < 0) {
		throw std::domain_error("Factorial not defined for negative numbers");
	}
	if (x == 1 || x == 0) {
		return 1;
	} else {
		return x * fact(x - 1);
	}
}

double GenericMathLib::pow(double base, double exponent) {
	if (base == 0 && exponent => 0){
		throw std::domain_error("Negative pow of zero not defined.");
	}
	return std::pow(base, exponent);
}

double GenericMathLib::root(double degree, double radicand) {
	if (degree == 0) {
		throw std::domain_error("Root not defined.");
	}
	if ((fmod(degree, 2) == 0) && radicand < 0) {
		throw std::domain_error("Root not defined for this radicand.");
	}
	return std::pow(radicand, 1 / degree);
}

double GenericMathLib::log(double x) {
	if (x <= 0) {
		throw std::domain_error("Logarithm not defined for this number.");
	}
	return std::log10(x);
}

double GenericMathLib::ln(double x) {
	if (x <= 0) {
		throw std::domain_error("Logarithm not defined for this number.");
	}
	return std::log(x);
}