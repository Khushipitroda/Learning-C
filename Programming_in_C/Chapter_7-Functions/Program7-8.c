// Function calculates the absolute value of a number.
// Then Program uses a function to determine the square root of said number..

#include <stdio.h>

float absoluteValue (float x)
{

	if (x < 0)
		x = -x;

	return (x);

}



// Function to compute square root.

float squareRoot(float x)
{

	const float epsilon = .00001;
	float 		guess 	= 1.0;
																// if x = 25...
	while ( absoluteValue (guess * guess - x) >= epsilon )		// 1.0 * 1.0 = 2.0 - 25 = -23. then absolut val is run.. 23 is > than .00001. Continue loop!
	{
																// if guess has reached 5...
																// 5 * 5 = 25 - 25 = 0... 0 >= 0.00001. 0 is less than epsilon.. stop loop. return guess..

		guess = (x / guess + guess ) / 2.0;						// This is actual piece of algorythm..
	}

	return guess;

}

int main (void)
{

	printf("squareRoot (2.0) = %f.\n", squareRoot(2.0));	// Implicitly calls squareRoot.
	printf("squareRoot (144.0) = %f.\n", squareRoot(144.0));
	printf("squareRoot (17.5) = %f.\n", squareRoot(17.5));

	printf("squareRoot (25.00) = %f.\n", squareRoot(25.00));

	return (0);

}