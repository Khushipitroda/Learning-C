// Revised program to reverse th e digits of a number



	/*	The point of this program is to show the difference between the do, and just the while loops...
		The do from this program is actually better, because we know the loop is gonna get executed at least once, no matter what.
		While the while loop by itself, is only gonna execute when the expression is FIRST evaluated... and teturned true.	*/


#include <stdio.h>

int main(void)
{

	int number, right_digit;


	printf("Enter your number.\n");
	scanf(" %i", &number);

	do 
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;

	} while (number !=0 );

	printf("\n");






}