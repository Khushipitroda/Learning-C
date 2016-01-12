// Example Program #2 from Chapter 29 of Beginner's Guide to C
// File Chapter29ex2.c


/*	The program opens the file created in the first program of the chapter and changes one of the letters to an *.
	It then prints the new list with the altered list of letters.	*/


#include <stdio.h>
#include <stdlib.h>
FILE * fptr // Declares file pointer....	 

int main()
{


	char letter;
	int  i;

	fptr = fopen("//Users//MaxM//Desktop//C_programs//FileReading//letters.txt", "r+");

	if (fptr == 0)
	{
		printf("Error opening file!!\n");
		exit(1);
	}

	printf("Which # letter would you like to change (1-26)? ");
	scanf(" %d", &i);

	// Seeks that position from the beginning of the file
	fseek(fptr, (i-1), SEEK_SET); 				//Subtract 1 from the position because array starts at 0


	// Write an * over the letter in that positon
	fputc('*', fptr);


	// Now jump back to the beginning of the array and print it out

	fseek(fptr, 0, SEEK_SET); 
	printf("Here is the file now: \n");
	for (i=0; i < 26; i++)
	{
		letter = fgetc(fptr);
		printf("The next letter is %c. -- (%d)\n", letter, (i+1);


	}

}