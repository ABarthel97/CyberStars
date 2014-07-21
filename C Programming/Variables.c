#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	//Declared Variables
	//Primitives types: char, int, float, double
	int IntVariable = 0;
	char CharVariable = 'C';

	//fractional primitives (floating point)
	float FloatVariable = 0;

	//Variable naming - letters numbers and underscore - can't start with a digit

	//Let's do some basic math

	//@todo: add two numbers, store it in a variable

	/*How do we print? Fomrat specifiers we'll use: 
		%d - integer types
		%f - floating point
		%c - prints a character based off of ascii table
		%s - strings
	*/
	printf("%d\n", (2+2));

	//Now print a variable
	printf("%d\n", IntVariable);

	//How do we capture a value?
	puts("Enter a numeric value:");
	printf("? ");
	scanf("%d", &IntVariable);

	printf("You entered: %d\n", IntVariable);

	//Aggragate variables

	//Array: a single variable that can hold multiple values
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	//Let's use a function to print the array
	//PrintArray(array, 10);
}