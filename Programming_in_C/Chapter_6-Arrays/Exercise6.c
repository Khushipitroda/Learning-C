// Program generates fibonacci sequence without using an array of any sort

#include <stdio.h>

int main (void)
{

	int prev = 0, current = 1, next;			// next = next number in sequence
	int i; 											// counter




	for (i = 1; i < 15; i++)
	{

	next = prev + current;

	prev = current;

	current = next;						// Set current to the current value of next, for next iteration.


	printf("%i", next);

	}




	return (0);

}
