// Program calc's triangular numbers as a functions output.
// Modified  version returns a value to main, and puts that value in result


#include <stdio.h>

int calculateTriangularNumber (int n)
{

	int i, triangularNumber = 0;

	for (i = 1; i <= n; i++)
	{
		triangularNumber += i;
	}

	return triangularNumber;
}

int main (void)
{

	// Prototype Dec
	int calculateTriangularNumber (int n);
	int result;

	result = calculateTriangularNumber(10);
	printf("Triangular number 10 is %2i\n\n\n", result);

	result = calculateTriangularNumber(20);
	printf("Triangular number 20 is %2i\n\n\n", result);

	result = calculateTriangularNumber(50);
	printf("Triangular number 50 is %2i\n\n\n", result);

	result = calculateTriangularNumber(100);
	printf("Triangular number 100 is %2i\n\n", result);

	return (0);

}
