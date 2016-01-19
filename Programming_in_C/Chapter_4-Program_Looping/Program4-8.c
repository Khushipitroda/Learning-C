// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{

	int number, right_digit;

	printf("Enter your number.\n");
	scanf("%i", &number);

	while (number != 0)
	{
		right_digit = number % 10;			// Gives remainder of the last number... 1234 % 10 = 4 because 1234/10 = 123.4
		printf("%i", right_digit);
		number = number / 10;				// 1234 / 10 in integers is 123... this effectively moves to the next number...

	}

	printf("\n"); 							// \n on here so above loop writes to one line.. then we break 

}