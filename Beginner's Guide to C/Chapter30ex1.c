// Example Program #1 from Chapter 30 of Beginner's Guide to C
// File Chapter30ex1.c

/*	The program is a simple demonstration of the difference between global and local variables.	*/

#include <stdio.h>
int g1 = 10;	// global variable #1

int main()
{


	float 11;

	11 = 9.0;

	printf("%d %.2f\n", g1, 11);	//prints the 1st global and first local variable

	prAgain(); // Calls our first function
	return 0;

}

float g2 = 19.00;	// global variable #2

prAgain()
{

	int 12 = 5;

	// Can't print 11-- it is local to main
	printf("%d %.2f %d\n", 12, g2, g1);
	return;
}