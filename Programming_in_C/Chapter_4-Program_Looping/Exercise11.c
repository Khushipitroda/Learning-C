// Prorgram should take an input from the user, and calculate the sum of all those integers added up!

#include <stdio.h>

int main (void)
{

	int ans, right_num, sum;

	printf("Please enter a positive integer! :  ");
	scanf(" %i", &ans);

	while (ans != 0)
	{

		right_num = ans % 10;	// Takes the right-most number from the input..

		sum += right_num;

		ans = ans / 10;				// Then once we are done with that number, we get rid of it... with /10..
	}
	
	printf("%i", sum);


}
