// Function to find the minimum value in an array

#include <stdio.h>



int minimum(int values[10])
{

	int minValue, i;

	minValue = values[0];

	for (i = 0; i < 10; i++)
	{

		if (values[i] < minValue)
			minValue = values[i];

	}


	return (minValue);
}






int main (void)
{

	int scores[10], i, minScore;
	int minimum (int values[10]);	// Prototype declaration. tells compiler, minimum returns an int, and takes array of 10 integers.

	printf("Enter 10 scores :\n");

	for (i = 0; i < 10; i++)
		scanf("%i", &scores[i]);


	minScore = minimum(scores);
	printf("Minimum score is %i.\n", minScore);


	return (0);
}