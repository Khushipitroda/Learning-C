// This program utilizes nested loops

#include <stdio.h>

int main(void)
{

	int number, counter, result;

	int triangularNumber(int n);

	for (counter = 1; counter < 5; counter ++ )
	{
		printf("What triangular number do you want?\n");
		scanf(" %i", &number);

		result = triangularNumber(number);

		printf("[%i] -- Triangular number %i is %i\n\n", counter, number, result);	// The extra [] data just shows the number of triangle's conmputed
	}	// End of outer loop

	return (0);

}

int triangularNumber(int number)
{
	int triangularNumber, n;

	triangularNumber = 0;

	for ( n = 1; n < number; n++)	// This loop will repeat five times, as it is a nested loop.
	{
		triangularNumber += n;

	} // End of nested loop

	return triangularNumber;
}
