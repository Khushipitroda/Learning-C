//Example Program from Chapter 18 example 2 of beginner's guide to c
//File chapter18ex2.c

/* This Program is nothing more than an simple doemonstration of the getchar() function. */

// getchar() id defined in stdio.h, but string.h is needed for the strlen() function

#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char msg[25];

	printf("Type up to 25 characters and then press Enter....\n");
	for (i = 0; i < 25; i++)
	{
		msg[i] = getchar();	// Outputs a single character..
		if (msg[i] == '\n')
		{
			i--;
			break;
		}

	}

	putchar('\n'); // One line break after the loop is done.





	for (; i >= 0; i--)
	{
		putchar(msg[i]);
	}

	putchar('\n');


	return (0);

}
