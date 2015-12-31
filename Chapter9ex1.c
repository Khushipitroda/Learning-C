//Example program #1 from chapter 9 of absolut beginners guide to c
//File chapter9ex1.c

//This program is meant just to demonstrate C's mathing capabilities

#include <stdio.h>

int main()

{
	//Two sets of equivalent variables, with one set 
	//Floating point and the other integer

	float a = 19.0;
	float b = 5.0;
	float floatAnswer;

	int x = 19;
	int y = 5;
	int intAnswer;

	//Using two float variables creates an answer of 3.8
	floatAnswer = a / b;
	printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

	floatAnswer = x /y; //Take 2 creates an answer of 3.0
	printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

	//This wil also be 3, as it truncates and doesn't round up
	intAnswer = a / b;
	printf("%1.f divided by %1.f equals %d\n", a, b, intAnswer);

	intAnswer = x % y; //This is used to calculate remainders in this case, (4)
	printf("%d modulus (i.e. remainder of) %d equals %d", x, y, intAnswer);

	return 0;
}