// Program solves quadratic equations
// things we need to think about:
									/*	1). imaginary numbers
										2). is passed three numbers
										3). 1x^2 + 2x + 3 is recipe.
										4) to find the roots we need to use
											x = -b |+-| square root b^2 - 4(a)(c) / 2 (a)


										*/

#include <stdio.h>

int main (void)
{

	// prototype Declaration
	void quadraticFunc(float a, float b, float c);
    float a,b,c;
	//variables
	float result;
	printf("What??\n");
	quadraticFunc(4, -17, -15);	// equates to 3x^2 + 5x + 10

	printf("Enter the next quadratic function:  ");
	scanf("%f %f %f", &a, &b, &c);

	quadraticFunc(a,b,c);


	return (0);
}


void quadraticFunc(float a,float b,float c)
{

	// Prototype defs
	float squareRoot(float x);




	//variables
	float absoluteB;			// This is inverted b
	float discriminant;				// This is 4(a)(c)
	float division;			// This is 2(a)
	float result1;			// first root
	float result2;			// second root
	float temp;

	// could break into seperate functions
		absoluteB = -b;	// Gets abs value.



	// the 4 (a) (c)


	discriminant = (b * b) - (4 * (a * c));

	discriminant = squareRoot(discriminant);

	division = a * 2;

	// Fuck. Before we can do this step, we need to find the square root of the discriminant. we could call sep funct
	result1 = ( absoluteB + discriminant ) / division;

	result2 = ( absoluteB - discriminant ) / division;


	printf("Calculated: %1fx^2 +or- %1fx +or- %1fx = 0.\n", a,b,c);
	printf("\nfirst root = %f.\n", result1);
	printf("Second root = %f.\n", result2);
	printf("\n\n");

}

float absoluteValue (float x)
{

	if (x < 0)
		x = -x;

	return (x);

}



// Function to compute square root.

float squareRoot(float x)
{
	float absoluteValue(float x);

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


