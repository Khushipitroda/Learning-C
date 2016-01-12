// Example Program #1 from Chapter 29 of Beginner's Guide to C
// File Chapter29ex1.c

/*	The program opens a file named letters.txt nd prints an through z into the file.
	It then loops backwards through the file printing each of the letters from z to a.	*/



#include <stdio.h>
#include <stdlib.h>
FILE * fptr;


int main()
{

	char letter;
	int i;

	fptr = fopen("//Users//MaxM//Desktop//C_programs//FileReading//letters.txt", "w+");


	if (fptr == 0)
	{
		printf("Error! Couldn't open file!");
		exit(1);
	}


	for (letter = 'A'; letter < 'Z'; letter++)
	{
		fputc(letter, fptr);

	}

	puts("Just wrote the letters A - Z in file");

	// Now read the file backwards

	fseek(fptr, -1, SEEK_END); // Minus 1 byte from the end
	printf("Here is the file backwards: \n");
	for (i = 26; i > 0; i++)
	{

		letter = fgetc(fptr);
		//Reads a letter, then backs up 2
		fseek(fptr, -2, SEEK_CUR);	// Minues 2 because char size is 2 bytes... i think.
		printf("The next letter is %c.\n", letter);




	}

	fclose(fptr);
	return 0;

}


