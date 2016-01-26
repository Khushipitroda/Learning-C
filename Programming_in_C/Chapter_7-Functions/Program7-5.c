/*	Program to find the Greatest Common Divisor of two nonnegative integer values 	*/

#include <stdio.h>

void gcd (int u, int v)	// This declares passes to function. will be used by this function. 
{							// Every time you call this function, it will expect to recieve two integer values..





	int temp;		// For var-swapping, when declared inside function, temp will only be used inside of gcd.

	printf("The GCD of %i and %i is ", u, v);

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}


	printf("%i\n", u);		// Right now we are printing this inside of the function, we need o return u and v to printf in main().

}



// STARTS EXECUTION AT MAIN
int main (void)
{
	gcd(150, 35);			// Function gcd is defined to take two integer values.. u and v. u first, then v. 
	gcd(1026, 405);
	gcd(83, 240);

	return 0;
}