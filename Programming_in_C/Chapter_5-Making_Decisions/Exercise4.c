//Program acts as a "printing" calculator... performs basic evaluations...


#include <stdio.h>
#include <ctype.h>


int main()
{

	float accumulator = 0, value1, value2;
	char oper = '1';



	do
	{

		printf("Type in your calculation.\n");
		if (accumulator != 0)
		{
			printf("Acumulator: %f.\n", accumulator);
		}
		scanf("%f %c", &value1, &oper);

		switch (oper)
		{

			case 's' :
			case 'S' :
					   printf("accumulator set to %f\n", value1);
					   accumulator = value1;
					   break;



			case '+' :
					   printf("Adding %f to %f.\n", value1, accumulator);
					   accumulator += value1;
					   break;

			case '-' : printf("Subtracting %f from %f.\n", value1, accumulator);
					   accumulator -= value1;
					   break;

			case '*' : printf("Multiplying %f by %f.\n", value1, accumulator);
					   accumulator *= value1;
					   break;

			case '/' :
				if (value1 == 0)
				{
					printf("Cannot divide by 0.\n");
				}
				else
				{
				printf("Dividing %f by %f", accumulator, value1);
				accumulator /= value1;
				}
				break;

		default :
			printf("Unknown operator.\n");
			continue;

		}
	} while ((oper != 'e') && (oper != 'E'));	// end of while loop
	return (0);

}
