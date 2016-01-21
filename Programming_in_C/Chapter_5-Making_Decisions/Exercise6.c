// Program should translate digits into words.. if user types 12, program will read one two.

#include <stdio.h>

int main (void)
{

	int number,current_num, newNum;


	printf("Please type the numbers :  ");
	scanf("%i", &number);



    if (number > 9999)
    {
        current_num = number / 10000;
        number = number % 10000;

				switch (current_num)
				{

					case 1 : printf("One ");
							 break;


					case 2 : printf("Two ");
							 break;

					case 3 : printf("Three ");
							 break;

					case 4 : printf("Four ");
							 break;

					case 5 : printf("Five ");
							 break;

					case 6 : printf("Six ");
							 break;

					case 7 : printf("Seven ");
							 break;

					case 8 : printf("Eight ");
							 break;


					case 9 : printf("Nine ");
							 break;

					case 0 : printf("Zero ");
							 break;



					default : printf("I don't know that number.");
							 break;


				}	// end of switch

    }

	if (number > 999 )
    {

    	current_num = number / 1000;
        number = number % 1000;

				switch (current_num)
				{

					case 1 : printf("One ");
							 break;


					case 2 : printf("Two ");
							 break;

					case 3 : printf("Three ");
							 break;

					case 4 : printf("Four ");
							 break;

					case 5 : printf("Five ");
							 break;

					case 6 : printf("Six ");
							 break;

					case 7 : printf("Seven ");
							 break;

					case 8 : printf("Eight ");
							 break;


					case 9 : printf("Nine ");
							 break;

					case 0 : printf("Zero ");
							 break;



					default : printf("I don't know that number.");
							 break;


				}	// end of switch

    }

	if (number > 99)
    {

        current_num = number / 100;
		number = number % 100;


				switch (current_num)
				{

					case 1 : printf("One ");
							 break;


					case 2 : printf("Two ");
							 break;

					case 3 : printf("Three ");
							 break;

					case 4 : printf("Four ");
							 break;

					case 5 : printf("Five ");
							 break;

					case 6 : printf("Six ");
							 break;

					case 7 : printf("Seven ");
							 break;

					case 8 : printf("Eight ");
							 break;


					case 9 : printf("Nine ");
							 break;

					case 0 : printf("Zero ");
							 break;



					default : printf("I don't know that number.");
							 break;


				}	// end of switch
    }

    if (number > 9)
    {
    	current_num = number / 10;
    	number = number % 10;

				switch (current_num)
				{

					case 1 : printf("One ");
							 break;


					case 2 : printf("Two ");
							 break;

					case 3 : printf("Three ");
							 break;

					case 4 : printf("Four ");
							 break;

					case 5 : printf("Five ");
							 break;

					case 6 : printf("Six ");
							 break;

					case 7 : printf("Seven ");
							 break;

					case 8 : printf("Eight ");
							 break;


					case 9 : printf("Nine ");
							 break;

					case 0 : printf("Zero ");
							 break;



					default : printf("I don't know that number.");
							 break;


				}	// end of switch


    }

    if (number > 0)
    {
        current_num = number;
    	number = 0;



				switch (current_num)
				{

					case 1 : printf("One ");
							 break;


					case 2 : printf("Two ");
							 break;

					case 3 : printf("Three ");
							 break;

					case 4 : printf("Four ");
							 break;

					case 5 : printf("Five ");
							 break;

					case 6 : printf("Six ");
							 break;

					case 7 : printf("Seven ");
							 break;

					case 8 : printf("Eight ");
							 break;


					case 9 : printf("Nine ");
							 break;

					case 0 : printf("Zero ");
							 break;



					default : printf("I don't know that number.");
							 break;


				}	// end of switch

    }

	printf("\n");

	return (0);

}
