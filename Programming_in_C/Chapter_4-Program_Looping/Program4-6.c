// Program to introduce the while statement

#include <stdio.h>

int main(void)
{

	int count = 1;

	while (count <= 5)					// (expression) if TRUE execute statments in loop. after check again..  
	{
		printf("%i \n", count);			// printf this to terminal.. 

		count++;						// increment count by 1

	}									// Go back to line 10, and evaluate expression again. 

	return (0);

}