// Program to detemine if a number is even or odd

#include <stdio.h>

int main (void)
{

	int number_to_test, remain;

	printf("Enter your number to be tested.:  ");
	scanf(" %i", &number_to_test);

	remain = number_to_test % 2;


	if (remain == 0)
	{
		printf("The number is even.\n");
	}
	if (remain != 0)
	{
		printf("The number is odd.\n");
	}

	return (0);

}

