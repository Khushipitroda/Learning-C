// Example Program #1 from Chapter 27 of Absolute Beginner's Guide to C
// File Chapter27ex1.c

/*	The program gets the bookInfo structure and asks the user to fill in three structures and then
	prints them. So we can see exactly what structures do.	*/

// I will include the header file here, for simplicity. 

struct bookInfo {
	char title[40];
	char author[25];
	float price;
	int pages;
};


// And now for the example program...

#include <stdio.h>	// for malloc


int main()
{

	int ctr;
	struct bookInfo books[3];	// Array of three structure variables.. will be used to put data into struct.
								// We define an array outside of the struct, so we can retrieve, manipulate, and add data to the struct here.
								// To choose which struct member we want to use, we use ourvariable.structmember. ourvariable here is books[ctr]



	// Get the information about each book from the user

	for (ctr = 0; ctr < 3; ctr++)
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


	// Print a header line and then loop through and print the info

	printf("\n\nHere is the collection of books: \n");
	for (ctr = 0; ctr < 3; ctr++)
	{
		printf("#%d: by %s", (ctr+1), books[ctr].title, books[ctr].author);
		printf("\nIt is %d pages and costs $%.2f.", books[ctr].pages, books[ctr].price);
		printf("\n\n");

	}

	return (0);
}
