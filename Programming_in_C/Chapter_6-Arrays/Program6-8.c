// Generate fibonnaci numbers using variable- length arrays.
// First sub-script refers to a row, second refers to column inside such row.

#include <stdio.h>


int main (void)
{

	int i, numFibs;

	printf("How many fibonnaci numbers do you want (between 1 and 75)?  ");
	scanf("%i", &numFibs);

	if (numFibs < 1 || numFibs > 75)
	{
		printf("Bad number. Please try again.\n");
		return 1;
	}

	unsigned long long int Fibonnaci[numFibs];

	Fibonnaci[0] = 0;		// By definition
	Fibonnaci[1] = 1;		// same

	for (i = 2; i < numFibs; ++i)
	{
		Fibonnaci[i] = Fibonnaci[i - 2] + Fibonnaci[i - 1];			// Calcs next fib number. by 2 prev plus i prev inside array
	}

	for (i = 0; i < numFibs; ++i)
	{
		printf("%llu, ", Fibonnaci[i]);
	}


	printf("\n");

	return (0);
}