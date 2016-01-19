#include <stdio.h>

int main (void)
{

	int i;
	int start;	// Will be used to seperate lines...
	int total;

	total = 0;
	start = 0;

	do
	{

		for (i = start; i < (start + 10); i++)
		{
			printf("%3i", i);
		}
		total++;
		start++;
		printf("\n");

	} while (total != 10);


}
