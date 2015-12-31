// Example program #1 from Chapter 7 of Absoulute beginners guide to programming
// File Chapter7ex1.c   this is the actual c file, which will utilize the header file we made with the same name...


/* This is a sample program that lists three kids and thier school supply needs as well as cost to buy the supplies */


#include <stdio.h>
#include <string.h>
#include "chapter7ex1.h"

main()

{
	int age;
	char childname[14] = "Thomas";

	printf("\n%s have %d kids.\n", FAMILY, KIDS);


	age = 11;
	printf("The oldest, %s, is %d.\n", childname, age);

	age = 6;
	strcpy(childname, "Christopher"); 					// strcpy comes from string.h, allows us to assign strings to arrays easily
	printf("The middle child, %s, is %d.\n", childname, age);

	age = 3;
	strcpy(childname, "Benjamin");
	printf("The youngest, %s, is %d.\n", childname, age);

	return 0;

}