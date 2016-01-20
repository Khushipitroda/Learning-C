// Program should test if user's input is negative, if so it will make it positive... absolute number generator

#include <stdio.h>

int main (void)
{

	int number;

	printf("Type in your number:  ");
	scanf(" %i", &number);


	if (number < 0)
	{
		number = -number;
	}

	printf("The absolute value of your number, is : %i.\n", number);


	return (0);
}
