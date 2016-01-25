// This program plays with initializing arrays

#include <stdio.h>

int main (void)
{

	int array_values[10] = { 0, 1, 4, 9, 16 };
	int i;

	for ( i = 5; i < 10; i++ )
	{
		array_values[i] = i * i;									// Sets 5 - 10 to iterator muliplied by itself..
	}

	for ( i = 0; i < 10; i++ )
	{
		printf("Array values[%i] = %i.\n", i, array_values[i]);		// Just prints out whole array
	}


	return (0);

}