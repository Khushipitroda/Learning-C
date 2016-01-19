// Program should generate, and output first 10 factorials using loops...

#include <stdio.h>

int main (void)
{

	int i;		// Juat counts 1-10
	int temp;	// set to i... so we don't mess up the outer loop with i
	int sum;	// Used to calculate factorial...

	for (i = 1; i <= 10; i++)
	{
		temp = i;	// So we can move on to the next number for calcing...
	    sum = temp;


		while ( temp != 1)
		{
			sum *= (temp - 1);		// Calculating factorials  goes 5! = 5*4*3*2*1 = 120 this attempts to emulate that
			temp--;							// Temp is decremented, so we can move on to the next number in the sequence.

		}				// When we finish sequence.. end the looping aswell... used do loop so we will still run loop for 1.


		printf("%i\n", sum);

	}



}
