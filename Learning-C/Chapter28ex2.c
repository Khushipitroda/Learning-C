// Example Program #2 from Chapter 28 of Absolute Beginner's Guide to C
// File Chapter28ex2.c

/*	The program takes the book info file from the first example, from chpter 28.
	also reads each line from the file and outputs it to the screen.	*/

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;	// Declare file pointer variable outside of main so it's global..


int main()
{

	char fileLine[100]; //Will hold each line of input
	fptr = fopen("//Users//MaxM//Desktop//C_programs//FileReading//bookinfo.txt", "r");

	if (fptr != 0)	// Makes sure file could be opened...
	{
		while (!feof(fptr))	// feof returns true if last line of file was read.. 
		{
			fgets(fileLine, 100, fptr);	// Gets a line from the file, and puts said line in an array. array will hold characters sequentially...
			if (!feof(fptr))
			{
				puts(fileLine);

			}

		}



	}
	else {
		printf("\nError opening file!\n");
	}
	fclose(fptr);
	return (0);


}