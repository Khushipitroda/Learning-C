// Program to evaluate simple expressions of the form number operator number
// Modified A version of program checks for invalid input's and handles them...

#include <stdio.h>


int main (void)
{

	float value1, value2;
	char oper;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &oper, &value2);

	if ( oper == '+' )
	{
		printf("%.2f.\n", value1 + value2);
	}
	else if ( oper == '-')
	{
		printf("%.2f.\n", value1 - value2);
	}
	else if ( oper == '*')
	{
		printf("%.2f.\n", value1 * value2);
	}
	else if (oper == '/')
	{
		if (value2 == 0)
		{
			printf("Division by 0 is not possible...\n");
		}
		else
		{
		printf("%.2f.\n", value1 / value2);
		}
	}
	else
	{
		printf("Invalid operator.\n");
	}

	return (0);

}