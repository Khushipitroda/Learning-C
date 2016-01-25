// Program should calc the avg, of an array of 10 floating-point numbers...

#include <stdio.h>


int main (void)
{
	float array[10] = {10.5, 14.5, 19.5, 10.45, 11.69, 90.12, 45.63, 14.32, 27.97, 10.11};	// 10 floating points
	float total, average;
    int i;


	for (i = 0; i < 10; i++)
	{
		total += array[i];

	}




	average = total / 10;		// because

	printf("Total sum of all numbers:  %2f.\nAverage:  %2f.\n", total, average);


	return (0);
}
