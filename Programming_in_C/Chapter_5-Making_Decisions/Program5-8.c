// Program to evaluate simple expressions of the form number operator number

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
		printf("%.2f.\n", value1 / value2);
	}

	return (0);

}