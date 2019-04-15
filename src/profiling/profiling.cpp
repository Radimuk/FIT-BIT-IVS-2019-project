#include <iostream>
#include "../math/GenericMathLib.cpp"

/**
 * Calculate sample standard deviation
 * @return execution status
 */
int main() {
	GenericMathLib genericMath;
	double array[1024];
	unsigned int enteredNumbers = 0;
	while (std::scanf("%lf", &array[enteredNumbers]) == 1) {
		enteredNumbers++;
	}
	double sumOfSquares = 0;
	double average = 0;
	for (unsigned int i = 0; i < enteredNumbers; i++) {
		double elementSquared = genericMath.pow(array[i], 2.0);
		sumOfSquares = genericMath.add(sumOfSquares, elementSquared);
		average = genericMath.add(average, array[i]);
	}
	average = genericMath.mul(average, genericMath.div(1.0, enteredNumbers));
	average = genericMath.pow(average, 2.0);
	average = genericMath.mul(average, enteredNumbers);
	double result = genericMath.sub(sumOfSquares, average);
	result = genericMath.div(result, genericMath.sub(enteredNumbers, 1.0));
	result = genericMath.pow(result, 0.5);
	std::printf("%f\n", result);
	return 0;
}