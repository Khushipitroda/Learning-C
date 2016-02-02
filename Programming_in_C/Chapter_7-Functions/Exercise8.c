// Program solves quadratic equations
// things we need to think about:
									/*	1). imaginary numbers
										2). is passed three numbers
										3). 1x^2 + 2x + 3 is recipe.
										4) to find the roots we need to use
											x = -b |+-| square root b^2 - 4(a)(c) / 2 (a)


										*/

#include <stdio.h>



void quadraticFunc(float a,float b,float c)
{

	//variables
	float absoluteB;			// This is inverted b
	float root;				// This is 4(a)(c)
	float division;			// This is 2(a)
	float result1;			// first root
	float result2;			// second root
	float temp;

	// could break into seperate functions
		absoluteB = -b;	// Gets abs value.



	// the 4 (a) (c)

	
	discriminant = (b * b) - (4 * (a * c));

	division = a * 2;

	// Fuck. Before we can do this step, we need to find the square root of the discriminant. we could call sep funct
	result1 = ( absoluteB + discriminant ) / division;

	result2 = ( absoluteB - discriminant ) / division;


	printf("Calculated: %1fx^2 +or- %1fx +or- %1fx = 0.\n", a,b,c);
	printf("\nfirst root = %f.\n", result1);
	printf("Second root = %f.\n", result2);
	printf("\n\n");

}



int main (void)
{

	// prototype Declaration
	void quadraticFunc(float a, float b, float c);
    float a,b,c;
	//variables
	float result;

	quadraticFunc(3, 5, 10);	// equates to 3x^2 + 5x + 10

	printf("Enter the next quadratic function:  ");
	scanf("%f %f %f", &a, &b, &c);

	quadraticFunc(a,b,c);


	return (0);
}
