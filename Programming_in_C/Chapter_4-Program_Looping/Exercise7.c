// Program will be used to mess around with printf field specifications... yay!

#include <stdio.h>

int main (void)
{

	int dollars, cents, count;

	for (count = 0; count <= 10; count++)
	{
		printf("Enter dollars:  ");
		scanf("%i", &dollars);
		printf("Enter cents:  ");
		scanf("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);


	}
	return 0;


}