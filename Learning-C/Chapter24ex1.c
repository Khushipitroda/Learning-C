// Example program #1 from Chapter 24 of Beginner's Guide to C
// File Chapter24ex1.c

	/*	This program demonstrates pointers by declaring and initializing both regular and pointer variables
		for int, float, and char types and then displays the values of each.									*/

#include <stdio.h>

int main()
{

	int kids;
	int * pKids;
	float price;
	float * pPrice;
	char code;
	char * pCode;


	price = 17.50;
	pPrice = &price;		// Need to initialize pointers before use

	printf("\nHow many kids are you taking to the water park?\n");
	scanf(" %d", &kids);


	pKids = &kids;			// Need to initialize pointers before use

	printf("\n Do you have a discount ticket for the park?\n");
	printf("Enter E for Employee Discount, S for Save-More discount, or N for No Discount: \n");
	scanf(" %c", &code);

	pCode = &code;			// Need to initialize pointers before use

	printf("\n First let's do it with the variables: \n");
	printf("You've got %d kids...\n", kids); // no address operator b/c array
	switch (code)
	{
		case ('E') : printf("The employee discount saves you 25%% on the $%2.f price", price);
					 printf("\nTotal ticket cost: $%.2f.", (price * .75 * kids));
					 break;

		case ('S') : printf("The Save-More discount saves you 15%% on the $%.2f price.", price);
					 printf("\nTotal ticket cost: $%.2f.", (price * .85 * kids));
					 break;

		default : //Either entered N for No Discount or an invalid answer
					 printf("You will be paying full price of $%.2f for your tickets.", price);

	} // end switch

								// Now repeat the same code, but use dereferenced pointers and get the same results
					printf("\n\n\nNow let's do it with the pointers: \n");
					printf("You've got %d kids...\n", *pKids);
					switch(*pCode)
					{
						case ('E') : printf("The employee discount saves you 25%% on the $%2.f price\n", *pPrice);
									 printf("Total ticket cost: $%.2f.\n", (*pPrice * .75 * *pKids));
									 break;

						case ('S') : printf("The Save-More discount saves you %%15 on the $%.2f price.", *pPrice);
									 printf("\nTotal ticket cost: $%.2f.\n", (*pPrice * .85 * *pKids));
									 break;

						default : // Will execute if N is entered, or any non existant keys....
									 printf("You will be paying the full price of $%.2f for your tickets.\n", *pPrice);
									 // default needs no break;

					}	//end pointer switch


	return 0;

}
