// Program to find the greates common devisor of two given numbers

#include <stdio.h>

int main(void)
{

	int u, v, temp; 		// Temp will be used to store a var for var swapping


	printf("Please type in two nonnegative numbers. \n");
	scanf(" %i%i", &u, &v);	// first num is u second is v

	while (v != 0)
	{
		temp = u % v; 		// assigns temp to the modulus value of u by v.. or the remainder...
		u = v;
		v = temp;

	}	// end of while

	printf("")

	return 0;
}