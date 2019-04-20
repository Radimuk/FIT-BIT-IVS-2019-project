#include <iostream>
#include <vector>
#include "../math/GenericMathLib.cpp"

/**
 * Calculate sample standard deviation
 * @return execution status
 */
int main() {
	GenericMathLib genericMath;
	std::vector<double> array;
	double item;
	while (std::scanf("%lf", &item) == 1) {
		array.push_back(item);
	}
	if (array.size() <= 1) {
		std::cerr << "Unable to count the deviation out of zero or one number." << std::endl;
		return 1;
	}
	double sumOfSquares = 0;
	double average = 0;
	for (double const &element: array) {
		double elementSquared = genericMath.pow(element, 2.0);
		sumOfSquares = genericMath.add(sumOfSquares, elementSquared);
		average = genericMath.add(average, element);
	}
	average = genericMath.mul(average, genericMath.div(1.0, array.size()));
	average = genericMath.pow(average, 2.0);
	average = genericMath.mul(average, array.size());
	double result = genericMath.sub(sumOfSquares, average);
	result = genericMath.div(result, genericMath.sub(array.size(), 1.0));
	result = genericMath.root(2.0, result);
	std::cout << result << std::endl;
	return 0;
}
