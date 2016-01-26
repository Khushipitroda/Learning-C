// Program should simply use a function to mulitply the values of a floating-point array by 2

#include <stdio.h>



void multiply(float array[], int n)
{

	int i;

	for (i = 0; i < n; i++)		// N will act as a array-length specifier..
		array[i] *= 2;		// Mulitplies array[i] by two

}


int main (void)
{

	float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
	int	  i;
	void  mulitply(float array[], int n);				// Prototype decleration doesn't specify a return.. will only return to main when funciton finishes.
														// C still changes the values of the local floatVals[] function. Because that is the array we passed it.
														// Not quite sure why we even need to return then... wtf.


	mulitply(floatVals, 4);	// n will be whatever our scanf gave it's adress

	for (i = 0; i < 4; i++ )
	{
		printf("%.2f    \n", floatVals[i]);
	}

	printf("\n\n");


	return (0);
}
