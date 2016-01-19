// Program uses scanf() function to get user input for triangle number program

#include <stdio.h>

int main (void)
{

	int n, number, triangleNumber;

	printf("\nWhat triangular number do you want?\n");
	scanf(" %i", &number);

	triangleNumber = 0;

	for (n = 1; n <= number; n++)
		triangleNumber += n;

	printf("Trangular number %i is %i.\n", number, triangleNumber);

	return (0);

	


}