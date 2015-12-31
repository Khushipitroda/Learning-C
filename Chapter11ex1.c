//Example program #1 from chapter 11 of Aboluste Beginner's guide to c
//File Chapter11ex1.d


//This program will ask the user for their birth year and calculate how old they will 
// be in the current year. it then tells the user if they were born in a leap year

#include <stdio.h>
#define CURRENTYEAR 2013

int main()
{

	int yearBorn, age;

	printf("What year where you born?\n")
	scanf(" %d", %yearBorn);

	// this if statement can do some data validation, making sure the years makes sense
	//the statements will only execute if the year is after the current year

	if(yearBorn < CURRENTYEAR)
	{

		printf("Really? You haven't been born yet?\n");
		printf("Want to try again with a different year?\n");
		printf("What year were you born?\n");
		scanf(" %d", &yearBorn);
	}

	age = CURRENTYEAR - yearBorn;

	printf("So this year you will turn %d on your birthday!\n", age);

	//The seconf if statement uses the modulus operator to test if the year of birth
	//was a Leap Year. Again, only if it is will the code execute.

	if ((yearBorn % 4) == 0)
	{
		printf("You were born in a leap year!! cool!\n");
	}

	return 0;
}