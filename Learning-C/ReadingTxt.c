
// I am gonna use this file, and hopefully use enough comments to explain how file editing, and reading in C functionls.
// You always need <stdio.h> for files
#include <stdio.h>
#include <stdlib.h>

int main()
{



	// fopen just opens a file, for windows syntax is: "C:\\Users\\Max\\Desktop\\example.txt

	FILE *file = fopen("/Users/MaxM/Desktop/C_programs/dReceipt.txt", "r");

//	printf("%c\n", fgetc(file));		// First, we use printf to print to out current program...
										// Then, we use fgetc to get a character from specified program.




	char c;

	do
	{

		c = fgetc(file);	//When this is done, it will return EOF, or end of file constant.



        if (isdigit(c))
		{
			printf("%c",c);
		}
		else
        {
            continue;
        }



	} while (c != EOF);







	fclose(file); 						// fclose when we are done using the File. with the arument of the file.

	return (0);
}
