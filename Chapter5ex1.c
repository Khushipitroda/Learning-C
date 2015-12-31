// example program #1 from Chapter 5 of Absolute beginner's Guide to C.
// File Chapter5ex1.c

/* This is an example program that lists three kids and thier school supply needs, as well as cost to buy the supplies. */



#include <stdio.h>

main()
{
	//set up the variables, as well as define a few

	char firstInitial, middleInitial;
	int number_of_pencils;
	int number_of_notebooks;
	int number_of_lunchbox;
	float pencils = 0.23;
	float notebooks = 2.89;
	float lunchbox = 4.99;



	// The information for the first child
	firstInitial = 'J';
	middleInitial = 'R';

	number_of_pencils = 7;
	number_of_notebooks = 4;

	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox);


	//The information for the second child
	firstInitial = 'A';
	middleInitial = 'J';

	number_of_pencils = 10;
	number_of_notebooks = 3;

	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox);


	//The information for the third child
	firstInitial = 'M';
	middleInitial = 'T';

	number_of_pencils = 9;
	number_of_notebooks = 2;
	number_of_lunchbox = 2;

	printf("%c%c needs %d pencils, %d notebooks, and %d lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks, number_of_lunchbox);
	printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + number_of_lunchbox*lunchbox);


	return 0;

}