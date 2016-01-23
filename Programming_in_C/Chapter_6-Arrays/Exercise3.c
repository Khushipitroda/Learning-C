// Program takes 6-2.c and modifies it so that user can input any number of responses.

// program 6-2 >>	// Program uses an array to input many pieces of data. data is a rating 1 - 10

#include <stdio.h>

int main (void)
{

	int i, response, numResponse;


	printf("How many Responses do you have? :  ");
	scanf("%i", &numResponse);

	if (numResponse <= 0 || numResponse >= 1000)
	{
		printf("You either put too many, or too less. Try again.\n");
		return (1);
	}

	int ratingCount[numResponse];			// Sets array size to inputted value..


	for (i = 1; i <= 10; i++)
	{
		ratingCount[i] = 0;					// this puts 0 as the response for every part of array.. except sub [0]
	}

	printf("Enter your responses\n");

	for (i = 1; i <= numResponse; i++)
	{
		printf("Response # %i:   ", i);
		scanf("%i", &response);


		if ( response < 1 || response > 10 )
		{
			printf("Bad response: %i\n", response);
		}	// end of if

		else
		{
			++ratingCount[response];					// Adds one to the current rating. if response is 4, will add 1 to [4].
		}												// This tell us how many we have.

	} // end for

	printf("\n\nRating Number of Responses\n");
	printf("------ -------------------\n");

	for ( i = 1; i <= 10; i++ )
	{
		printf("%4i%13i\n", i, ratingCount[i]);			// Displays the amount a certain rating showed up.. %13i sets character space to 13..
	}

	return (0);

}



