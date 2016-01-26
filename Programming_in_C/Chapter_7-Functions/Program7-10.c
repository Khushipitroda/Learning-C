// Program is a modified version of 7-9.c, and shows passing a variable-length array to a function.
// Function should... um, function properly no matter how long an array is passed.

#include <stdio.h>


int minimum(int values[], int numberOfElements)
{

	int minValue, i;

	minValue = values[0];

	for (i = 0; i < numberOfElements; i++)
	{
		if (values[i] < minValue)
			minValue = values[i];		// Sets minvalue if < current. 
	}
	return (minValue);
}


int main (void)
{

	int array1[5] = { 157, -28, -37, 26, 10 };
	int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
	int minimum(int values[], int numberOfElements);	// Prototype declaration says HEY, minimum takes two int vars, and returns an int value.

	printf("array1 minimum: %i.\n", minimum(array1, 5));	// minimum() function is seen as a data type to printf() function, and is evaluated. 
	printf("array2 minimum: %i.\n", minimum(array2, 7));	// ditto + array1 is seen in main() as a var, so min sees it as values[]..
	
	return (0);
}