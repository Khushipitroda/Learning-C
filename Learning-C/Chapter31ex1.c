// Example program #1 from Chapter 31 of Beginner's Guide to C
// File Chapter31ex1.c

/*	The program demonstrates passing a variable to a function by value.	*/

#include <stdio.h>

int main()
{

	int i; // we will pass this variable to half
	char a;
	printf("Please enter an integer... ");
	scanf(" %d", &i);


	// Now call the function, passing the value of i

	printf("Type H to halve the input....");
	scanf(" %c", &a);

	if (a == 'H')
	{
		half(i);	// Calls a function that halves i
	}
	else
	{
		printf("What did you say??\n");
	}


	// Shows that the function did not alter i's value
	printf("In main(), i is still %d.\n", i);

	return (0);

}	// End of main function..

half(int i)			// Receives the value of i
{

	i = i / 2;
	printf("Your value halved is %d.\n",i);
	return(0); //Returns to main()


}
