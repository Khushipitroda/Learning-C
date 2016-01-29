 // Program generates a factorial by number with a recursive function

#include <stdio.h>


int main(void)
{

	unsigned int j;
	unsigned long int factorial(unsigned int);		// Prototype declaration


	for (j = 0; j < 11; j ++)
	{
		printf("%2u! = %lu.\n", j, factorial(j) );	// Print j, and factorial of j.
	}




}



// Recursive function to calculate the factorial of a positive integer

unsigned long int factorial(unsigned int n)
{

	unsigned long int result;


	if (n == 0)
	{
		result = 1;
	}
	else 
	{
		result = n * factorial (n - 1);		// This function calls on itself. It's recursive.. it keeps calling itself until n == 0.. 
											// This is a very effiecient way to do things like get a factorial of n
	}


	return (result);

}

