// Example Program #3 from Chapter 31 of Beginner's Guide to C
// File Chapter31ex3.c

/*	The program demonstates passing a variable to a function by address.	*/

#include <stdio.h>

int main()
{


	int i;

	printf("Please enter an integer... \n");
	scanf(" %d", &i);

	// Now call the half function, passing the adress of i

	half(&i);
	// Shows that function did actually alter i's value..
	printf("\nIn main(), i is now %d.\n", i);

	return (0); // End program dur..

}

/**********************************************************************/

/* Sometimes putting this divider makes reading through functions a lot nicer */

int half(int *i)	// Receives memory adress of i.
{

	// The adress of i = the adress of i / two... pseudo code.

	*i = *i / 2;
	printf("Your value is halved is %d.\n", *i);
	return(0);
}
