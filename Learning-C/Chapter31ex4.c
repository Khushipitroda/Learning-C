// Example Program #4 from Chapter 31 of Beginner's Guide to C
// File Chapter31ex4.c

/*	The program demonstrates passing multiple variables to functions.	*/

#include <stdio.h>

// The following statement will be explained in chapter 32
changeSome(int i, float *newX, int iAry[5]);

int main()
{

	int i = 10;
	int ctr;
	float x = 20.5;


	int iAry[] = {10, 20, 30, 40, 50};

	puts("Here are main()'s variables before the function: ");
	printf("\ni is %d\n", i);
	printf("x is %.1f\n", x);
	for (ctr = 0; ctr < 5; ctr++)
	{
		printf("iAry[%d] is %d\n", ctr ,iAry[ctr]);
	}

	// Now we call the change some function, passing the value of i and the adress of x (hence, the &)

	changeSome(&i, &x, iAry);

	puts("Here are main()'s variables before the function: ");
	printf("\ni is %d\n", i);
	printf("x is %.1f\n", x);
	for (ctr = 0; ctr < 5; ctr++)
	{
		printf("iAry[%d] is %d\n", ctr ,iAry[ctr]);
	}

	return(0); // Ends program..
}

/****************************************************************************************************************************************/

changeSome(int *i, float *newX, int iAry[5])
{

	// All variables are changes, but only the float and the array remain changed when the program returns to main()

	int j;

	i = 47;
	*newX = 97.6; // Same location as x in main

	for (j = 0; j < 5; j++)
	{
		iAry[j] = 100 + 100*j;
	}

	return(0); // Should return to main()


}






