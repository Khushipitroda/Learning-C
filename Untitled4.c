// Example Program from Chapter 23 of Beginner's Guide to C
// File chapter23ex2.c


/*	This program searches a sorted list of customer IDs in order to get credit totals	*/

#include <stdio.h>

int main()
{


	int ctr;		// Loop counter
	int idSearch;	// Customer to look for
	int found = 0; // true if customer is found

	/*	Defines the 10 elements in each of the parallel arrays	*/
	int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};

	float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};

	int tempID, inner, outer, didSwap, i; // For sorting
	float tempBal;

	// First, sort the arrays by customer IDs
	for (outer = 0; outer < 9; outer++)
	{
		didSwap = 0;

		for (inner = outer; inner < 10; inner++)
		{
			if (custID[inner] < custID[outer])
			{
				tempID = custID[inner];			// Just assign temp vals
				tempBal = custBal[inner];		// We have to swap both id and bal, so we can link arrays...


				custID[inner] = custID[outer];
				custBal[inner] = custBal[outer];
				custID[outer] = tempID;
				custBal[outer] = tempBal;
				didSwap = 1;

			}

		}	//end nested for

		if (didSwap == 0)
		{
			break;
		}
	}

	/*	Interact with the user looking to find a balance 	*/
	printf("\n\n*** Customer Balance Lookup ***\n");
	printf("What is the customer number? \n");
	scanf(" %d", &idSearch);


	// Now, look for the ID in the array
	for (ctr = 0; ctr < 10; ctr++)
	{
		if (idSearch == custID[ctr]) // Do they match?
		{
			found = 1; // Yes, match flag is set to TRUE
			break;
		}
		if (custID[ctr] > idSearch)	// no need to keep searching this little line right is here is the reason for the sorting algorythm...
		{
			break; // I need a break... it's 4:00 in the fking morning.
		}

	}

	// Once the loop has completed, the ID was either found or not (found = 1)..

	if (found)
	{
		if (custBal[ctr] > 100)
		{
			printf("\n** That customer's balance is $%2.f.\n", custBal[ctr]);	// This uses the ctr val our loop gave us, and gives us parralell array value...
			printf("No additional credit.\n");


		} else
		{
			printf("\n** The customer's credit is good! not 100. But good. If you consider 100 good. Which I don't.\n");

		}



	} // end first if
	else
	{
		printf("** You have entered an incorrect customer ID.");
		printf("\n ID %3d was not found in the list.\n", idSearch);

	}

	return 0;

}
