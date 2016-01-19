// Exercise number 2.. Write a program that shows a table of n and n^2, for integers 1 - 10...


#include <stdio.h>

int main (void)
{

	int n;
	char ans;


	printf("Please enter a digit,  (1-10) : ");

	do
	{
		scanf("%i", &n);

		printf("\nNumber you entered:    ");
		printf("%i", n);

		printf("\nThat number squared:   ");
		printf("%i", n * n);

		printf("\n\nType Y to try another number. N to quit.\n");
		scanf(" %c", &ans);

	} while (ans != 'N');





}
