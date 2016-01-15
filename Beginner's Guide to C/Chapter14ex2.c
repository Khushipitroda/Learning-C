// Example program from beginner's guide to c
// File Chapter14ex2.c

/*	This program will multiply two numbers and display the result for as
	 long as the user wants. Answering "N" will break the loop.	*/

#include <stdio.h>

int main()
{
	float num1, num2, result;
	char choice;

	do {
		printf("Enter your first number to multiply: ");
		scanf(" %f", &num1);

		printf("Enter your second nubmer to multiply: ");
		scanf(" %f", &num2);

		result = num1 * num2;
		printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
		printf("Do you want to enter another pair of numbers to multiply? (Y/N): ");
		scanf(" %c", &choice);
		//if the user enters a lowercase n, this if statement will convert it to uppercase
		if (choice == 'n')
			{
				choice = 'N';
			} 

	} while choice != 'N'; //We out the while condition at the closing brace of the do.. 
						   //function, to complete the do....while loop

	return 0;

}