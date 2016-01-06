//Example Program from Chapter 19 Example 2 of Beginner's Guide to C
//File Chapter19ex2.c

/*	This program asks a user for their hometown and the two-letter abbreviation of their home state.
	It then uses string concatenation to build a new string with both town and state and prints it using puts.	*/


#include <stdio.h> // for gets() and puts()
#include <string.h> // for concatenation stcat()

int main()
{

	char city[15];
	// 2 chars for the state abbrev. and one for the null zero
	char st[3];
	char fullLocation[18] = "";

	puts("What town do you live in? ");
	gets(city);

	puts("What state do you live in?");
	gets(st);





	//concatenates the strings
	strcat(fullLocation, city);				// concatenates city
	strcat(fullLocation, ", ");				// concatenates , and space
	strcat(fullLocation, st);				// concatenates state

	puts("You live in ");
	puts(fullLocation);
	return (0);

}
