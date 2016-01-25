// Program calc's triangular numbers as a functions output.

#include <stdio.h>

void calculateTriangularNumber (int n)
{

	int i, triangularNumber = 0;

	for (i = 1; i <= n; i++)
	{
		triangularNumber += i;
	}

	printf("Triangular number %2i is %2i\n\n\n", n, triangularNumber);

}

int main (void)
{


	calculateTriangularNumber(10);
	calculateTriangularNumber(20);
	calculateTriangularNumber(50);
	calculateTriangularNumber(100);

	return (0);

}
