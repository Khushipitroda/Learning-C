// Program checks if value entered is divisible by second value entered...

#include <stdio.h>

int main (void)
{

	int value1, value2;


	printf("Enter two values for evaluation. :  ");
	scanf("%i %i", &value1, &value2);

	if (value1 % value2 == 0)
		printf("It is divisible.\n");
	else
		printf("Definitely not divisible.\n");



	return (0);

}