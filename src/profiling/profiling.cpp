#include <iostream>
#include "../math/GenericMathLib.cpp"

int main() {
	GenericMathLib genericMath;
	double array[1024];
	unsigned int enteredNumbers = 0;
	while (std::scanf("%lf", &array[enteredNumbers]) == 1) {
		enteredNumbers++;
	}
	double arrayDouble[1024];
	for (unsigned int k = 0; k < enteredNumbers; k++) {
		arrayDouble[k] = array[k];
	}
	double sumOfSquares = 0;
	double average = 0;
	for (unsigned int i = 0; i < enteredNumbers; i++) {
		double elementSquared = genericMath.pow(arrayDouble[i], 2.0);
		sumOfSquares = genericMath.add(sumOfSquares, elementSquared);
		average = genericMath.add(average, arrayDouble[i]);
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