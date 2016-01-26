// Program to sort an array of integers into ascending order

#include <stdio.h>


void sort (int a[], int n)
{
	int i, j, temp;


	for ( i = 0; i < n - 1; ++i )
	{
		for ( j = i + 1; j < n; ++j )
		{
			if ( a[i] > a[j] )
			{
				temp = a[i];
				a[i] = a[j];			// Swap so lowest is at top.
				a[j] = temp;		// set inner loop to a[i]
			}

		}	// inner loop
	}	// outer loop
}


int main (void)
{
	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9,
					  12, 17, 22, 6, 11 };
	// PROTOTYPE DEC
	void sort (int a[], int n);


	printf("The array before the sort:\n");

	for (i = 0; i < 16; i++)
	{
		printf("%3i ", array[i]);
	}

	sort (array, 16);

	printf("\n\n\nThe array after the sort:\n");

	for (i = 0; i < 16; i++)
	{
		printf("%3i ", array[i]);
	}

	printf("\n\n");


	return (0);
}
