// This program utilizes nested loops

#include <stdio.h>

int main(void)
{

	int n, number, triangularNumber, counter;

	for (counter = 1; counter < 5; counter ++ )
	{
		printf("What triangular number do you want?\n");
		scanf(" %i", &number);

		triangularNumber = 0;

		for ( n = 1; n < number; n++)	// This loop will repeat five times, as it is a nested loop.
		{
			triangularNumber += n;

		} // End of nested loop

		printf("[%i] -- Triangular number %i is %i\n\n", counter, number, triangularNumber);	// The extra [] data just shows the number of triangle's conmputed
	}	// End of outer loop

	return (0);

}
