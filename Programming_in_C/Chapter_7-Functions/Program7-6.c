/*	Function to find the greatest common divisor of two absolute values. Function then returns the result, and value of u to main	*/

#include <stdio.h>


int gcd(int u, int v)		// Function expects u and v to be passed at calling...
{

	int temp; // Local to gcd 

	while (v != 0)
	{
		temp = u % v;

		u = v;

		v = temp;	// Sets the modulo remainder to u, so u % v at start of function
	}
	return (u);		// This should pass the value of v back to the main() function
}



int main (void)
{

	int result;


	result = gcd(150, 35);		// This is how you can take the result (u), from another function
								// and use that data in main(). result is = (assigned) to the result of gcd. (u)
	printf("The result of 150 and 35 is %i.\n", result);

	result = gcd(1026, 405);
	printf("The result of 1026 and 405 is %i.\n", result);

	result = gcd(83, 240);
	printf("The result of 83 and 240 is %i.\n", result);


	return (0);
}