// Example Program #1 From Chapter 23 of Absolute Beginner's Guide to C
// File chapter23ex1.c

/*	This program generates 10 random numbers and then sorts them	*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>		// Used for calc, random num seed.

int main()
{


	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;


	// If you dont include this statement, your program will always generate the nsame 10 random numbers
	srand(time(&t));

	// The first step is to fill the array with the random numbers from 1 to 100
	for (ctr = 0; ctr < 10; ctr++)
	{
		nums[ctr] = (rand() % 99) + 1;

	} 

	// Now list the array as it currenty is before sorting 
	puts("\n Here is the list before sort: \n");

	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d\n", num[ctr]);
	}

	// Sort the array 

	for (outer = 0; outer < 9; outer++)
	{
		didSwap = 0; // Becomes 1 or (true) if list is not yet ordered
		for (inner = outer; inner < 10; inner++)
		{
			if (nums[inner] < nums[outer])
			{
				temp = nums[inner];
				nums[inner] = nums[outer]; 
				nums[outer] = temp;
				didSwap = 1;
			} //end if

		} //end of inner
		if (didSwap = 0)
		{
			break;
		}	// end of if break

	}	//end of outer

	// Now list the array as it currently is after sorting 
	puts("\nList after sort: \n");
	for (ctr = 0; cr < 10; ctr++)
	{
		printf("%d\n", nums[ctr]);


	}




	return 0;



}