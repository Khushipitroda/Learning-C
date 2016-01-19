// Re-write programs 4.2 through 4.5, replacing all uses of the for loop with while loops. Outputs must be identical... FUck

// Re - Program 4.2



#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	triangularNumber = 0;

	n = 1;
	while (n <= 200)
	{
		triangularNumber += n;
		n++;
	}

	printf("The 200th triangular number is %i.\n", triangularNumber);

	return 0;


}

// End of program 4.2


// Re - Program 4.3

#include <stdio.h>

int main (void)
{


	int n, triangularNumber;

	printf("TABLE OF TRIANGULAR NUMBER'S\n\n");
	printf(" n       Sum from 1 to n\n");
	printf("---       --------------\n");

	triangularNumber = 0;
	n = 1;
	while (n < 10)
	{
		triangularNumber += n;
		printf(" %i           %i\n", n , triangularNumber);
		n++;
	}
	
	return 0;

}

// End of program 4.3

// Re - Program 4.4

// Program uses scanf() function to get user input for triangle number program

#include <stdio.h>

int main (void)
{

	int n, number, triangleNumber;

	printf("\nWhat triangular number do you want?\n");
	scanf(" %i", &number);

	triangleNumber = 0;


	n = 1;
	while (n <= number)
	{
		triangleNumber += n;
		n++;

	}

	printf("Trangular number %i is %i.\n", number, triangleNumber);

	return (0);

	


}

// End of Program 4.4





