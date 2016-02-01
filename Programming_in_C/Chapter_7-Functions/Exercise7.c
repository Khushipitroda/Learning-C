// Program uses a function that raises an integer to a positive integer power..
// IE : x is passed. Function returns x^2.

#include <stdio.h>

int main (void)
{
	//type declerations
	int x_to_the_n(int x);

    int result1, result2, result3, result4;

	result1 = x_to_the_n(5);
	result2 = x_to_the_n(2);
	result3 = x_to_the_n(10);
	result4 = x_to_the_n(-25);

    printf("5^2 = %i.\n", result1);
    printf("2^2 =  %i.\n", result2);
    printf("10^2 =  %i.\n", result3);
    printf("25^2 = %i.\n", result4);


}

int x_to_the_n(int x)
{
	if (x < 0)
	{
		x = -x;	// sets negative to positive
	}

	x *= x;	// Sets power of x to x.


	return x;
}
