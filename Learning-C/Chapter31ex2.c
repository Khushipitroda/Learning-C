// Example Program #2 from Chapter 31 of Beginner's Guide to C
// File Chapter31ex2.x

/*	The program demonstrates passing an array to a function.	*/


#include <stdio.h>
#include <string.h>

int main()
{


	char name[15] = "Michael Hatton";

	change(name);

	printf("Back in main(), the name is now %s.\n", name);


	return (0); // Ends program

}

/*********************************************************************/

/*	Sometimes putting dividers like the one above is a nice break between your different functions.	*/

change(char name[15])	// receives the value of i
{

	strcpy(name, "XXXXXXXXXXXXXX")
	return; //Returns to main()

}