//Example Program #1 from Chapter 22 of Absolute beginner's Guide to C
//File Chapter22ex1.c


	/*	This program takes an ID number from the user and then checks the ID against a list of customers in the database.
		If the customer exists, it uses that array element to check thier current balance, if the user
		warns the user if the balance is more than 100.	*/



#include <stdio.h>

int main()
{

	int ctr; // Loop counter
	int idSearch; // Customer to look for (the key)
	int found = 0; // Will be 1 or (true) if customer is found


	// Defines the 10 elements in the two parallel arrays

	int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};

	float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};


	/*	Interact with the user looking for a balance.	*/
	printf("\n\n*** Customer Balance Lookup ***\n");
	printf("What customer number do you need to check?\n");
	scanf(" %d", &idSearch);


	/*	Search to see that the customer ID exists in the array	*/
	for (ctr = 0; ctr < 10; ctr++)
	{
		if(idSearch == custID[ctr])
		{
			found = 1; // set found to true if this executes....
			break; // So we don't stop for loop here
		}	//end if

	}	// end of for loop


	if (found)
	{
		if (custBal[ctr] > 100.00)
		{
			printf("\n** That customer's balance is $%.2f.\n", custBal[ctr]);
			printf(" No additional credit.\n");

		} // end if
		else
		{
			printf("\n** The customer's credit is good!\n");
		}
	}	else // if found == 0
	{
		printf("** Cusomer ID %3d was not found.\n", idSearch);

	}

	return (0);

}
