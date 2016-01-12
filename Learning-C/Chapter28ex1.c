// Example Program #1 from Chapter 28 of Absolute Beginners' Guide to C
// File Chapter28ex1.c

/*	This program takes the book info program from chapter 27, and writes the info to
	a file named bookinfo.txt.	*/


struct bookInfo {
	char title[40];
	char author[25];
	float price;
	int pages;
};

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;		// defines fptr as file pointer

int main()
{
	int ctr;
	struct bookInfo books[3];	// Array of three structure variables

	// Get book info from user

	for (ctr = 0 ; ctr < 3; ctr++)
	{

		printf("What is the name of the book #%d?\n", (ctr +1));
		gets(books[ctr].title);


		puts("Who is the author? ");
		gets(books[ctr].author);


		puts("How much did the book cost?");
		scanf(" %f", &books[ctr].price);


		puts("How many pages in the book?");
		scanf(" %d", &books[ctr].pages);

		getchar(); //Clears the last newline for next loop \n

	} // end for loop

	// Remember when typing your filename path to to double up the backslashes, or C will
	// think you are putting in a conversion character.

	fptr = fopen("//Users//MaxM//Desktop//C_programs//FileReading//bookinfo.txt", "w");

	// Test to ensure that the file opened:
	if(fptr == 0)
	{
		printf("Error -- file could not be opened, or written to...\n\n");
		exit(1);

	}


	// Print a header line then loop through and print the info to your file,
	// but this time this printout will be in your file and not on the screen.

	fprintf(fptr, "\n\nHere is the collection of books: \n");
	for (ctr = 0; ctr < 3; ctr++)
	{
		fprintf(fptr, "#%d: %s by %s.", (ctr+1), books[ctr].title, books[ctr].author);


		fprintf(fptr, "\nIs %d pages and cost $%.2f.", books[ctr].pages, books[ctr].price);
		fprintf(fptr, "\n\n\n");

	}	// end for loop for printing to file...

	fclose(fptr);
	return 0;


}
