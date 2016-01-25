// This program tests the variable length array system.

#include <stdio.h>

int main (void)
{

	int ans, i;

	printf("How many cats do you own?\n");
	scanf(" %i", &ans);

	int catRatings[ans];

	for (i = 0; i < ans; i++)
	{
		printf("What would you rate the cat(1-5)?   :  ");
		scanf("%i", &catRatings[i]);
	}

	for (i = 0; i < ans; i++)
	{
		printf("Cat #: %2i   Rating: %2i.\n", i, catRatings[i]);
	}

}
