#include "armstrong_numbers.h"
#include <math.h>

int is_armstrong_number(int candidate) {

	int numberOfDigits = number_of_digits(candidate);
	int sum = 0;	
	int currentNumber = candidate;

	while(currentNumber > 0) {
		sum += pow(currentNumber % 10, numberOfDigits); // mod 10 to get current digit
		currentNumber /= 10; 				// shift decimal right

	}

	return (sum == candidate);
}

unsigned int number_of_digits(int number) {

	unsigned int numOfDigits = 0;

	while(number != 0) {
		number /= 10;
		numOfDigits++;	
	}

	return numOfDigits;	

}
