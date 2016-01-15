// Example Program #3 from Chapter 28 of Absolute Beginner's Guide to C
// File Chapter28ex3.c

/*	The program opens an existing book info file from teh first example of chatper 28
	and adds a line to the end.	*/

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{

	fptr = fopen("//Users//MaxM//Desktop//C_programs//FileReading//bookinfo.txt", "a");


	if (fptr == 0)
	{
		printf("Error opening file!");
		exit(1);
	}

	//Adds the line at the end
	fprintf(fptr, "\nMore books to come!\n");

	fclose(fptr);
	return 0;

}
