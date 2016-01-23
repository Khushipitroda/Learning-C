// Program uses an array to input many pieces of data. data is a rating 1 - 10

#include <stdio.h>

int main (void)
{

	int ratingCount[11], i, response;

	for (i = 1; i <= 10; i++)
	{
		ratingCount[i] = 0;					// this puts 0 as the response for every part of array.. except sub [0]
	}

	printf("Enter your responses\n");

	for (i = 1; i <= 20; i++)
	{
		printf("Response # %i:   ", i);
		scanf("%i", &response);


		if ( response < 1 || response > 10 )
		{
			printf("Bad response: %i\n", response);
		}	// end of if

		else
		{
			++ratingCounters[response];
		}

	} // end for

	printf("\n\nRating Number of Responses\n");
	printf("------ -------------------\n");

	for ( i = 1; i <= 10; i++ )
	{
		printf("%4i%4i\n", i, ratingCounters[i]);
	}

	return (0);

}