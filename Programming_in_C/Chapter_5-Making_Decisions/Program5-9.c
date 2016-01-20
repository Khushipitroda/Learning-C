// Program to evaluate simple expressions, this one utillizes switch statements.

#include <stdio.h>

int main (void)
{

	float value1, value2;
	char oper;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &oper, &value2);

	switch (oper)
	{
		case '+' : printf("%.2f.\n", value1 + value2);
				   break;

		case '-' : printf("%.2f.\n", value1 - value2); 
				   break;

		case '*' : printf("%.2f.\n", value1 * value2);
				   break;

		case '/' : 
			if (value2 == 0)
			{
				printf("Cannot divide by 0.\n");
			}
			else
			{
			printf("%.2f.\n", value1 / value2);
			}
			break;

	default : 
		printf("Unknown operator.\n");
		break;

	}

	return (0);

}