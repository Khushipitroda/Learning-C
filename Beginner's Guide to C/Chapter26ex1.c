// Example Program #1 from Chapter 26 of Beginner's Guide to C
// File Chapter26ex1.c

	/*	The program looks for a numver of random integersm allocates an array and fills it with the 
		numbers between 1 and 500 and then loops through all the numbers and figures out the smallst.
		the biggest, and the average. It then frees the memory.	*/

#include <stdio.h>	
#include <stdlib.h>		// Needed for malloc and free
#include <time.h>		// Needed for rand num seed.


int main()
{


	int i, aSize;

	int * randomNums;

	time_t t;

	double total = 0;
	int biggest, smallest;
	float average;

	srand(time(&t)); 	// Random number seeding...

	printf("How many random numbers do you want in your array?\n");
	scanf(" %d", &aSize);


	// Allocate an array of integers equal to the number of elements requested

	randomNums = (int *) malloc(aSize * sizeof(int));

	// Test to ensure that the array allocated properly

	if (!randomNums)
	{
		printf("Random array allocation fucked up!\n");
		printf("Exiting program....");
		exit(1);
	}

	// Loops through the array and assigns a random number between 1 and 500 to each element


	for (i = 0; i < aSize; i++)
	{

		randomNums[i] = (rand() % 500) + 1;

	}

	// Initialize the biggest and smallest number for comparison sake
	biggest = 0;
	smallest = 500;

	// Loop through the now-filled array testing for the random numbers that are biggest,
	// smallest, and adding all numbers together to calc an average num

	for (i = 0; i < aSize; i++)
	{


		total += randomNums[i];
		if (randomNums[i] > biggest)
		{
			biggest = randomNums[i];
		}	//Checks if new biggest.
		if (randomNums[i] < smalest)
		{
			smallest = randomNums[i];
		}	//Checks if new smallest.

	}	// end for loop

	average = ((float)total)/((float)aSize);		// total and aSize are both integers, so we need to typecast to decimal(float).
	printf("The biggest random number is %d.\n", biggest);
	printf("The smallest random number is %d.\n", smallest);
	printf("The average of all the random numbers is %.2f.\n", average);

	// When you use malloc, remember to then use free

	free(randomNums);

	return (0);

}		
		