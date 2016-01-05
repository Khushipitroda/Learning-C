//This program will be used to calculate how much driver's owe at the end of a shift...
//Will ask for total amount owed... then will ask how many deliveries the driver took.
//2) then will ask user to input all prepaids
//3) then will ask user to input all credits
//4) then will ask user for any other payments made... (poker chips, grocery store runs, etc..)
//5) program will then add all of these values into a total.
//6) program will subtract total from the amount owed....
//7) program will eventualy be able to list all data entered back to the driver, so they can easily double, and triple check everything...
#include <stdio.h>
#include <string.h>


int main()
{

	// All variables will be declared here!!!! =================================================
	float owed = 0.00, total = 0.00, finalTotal, deliveries, credit, prepaid, other;
	int numPrepaid, numCredit, numOther;
	char driver[20];
	// All variables will be declared here!!!! =================================================



	//Program starts executing here!

	printf("Welcome! please type in your first name!\n");
	scanf(" %s", driver);

	//How much driver owes pizzeria
	printf("Hi, %s! Please enter the total amount you owe the pizzeria!\n", driver);
	scanf(" %f", &owed);

	//Used for calculating amnt pizzeria needs to pay for gas..
	printf("Now, please enter the amount of deliveries you took today!\n");
	scanf(" %f", &deliveries);

	//Now we add all the prepaids the drive took to the total sum
	printf("Now please enter the totals for all of your prepaid tickets!\n(NOT THE TOTAL ON THE TICKET, THE TOTAL ON THE FAX RECEIPT.)\n");
	printf("==========================================================================================================================\n");

	for (numPrepaid = 0; numPrepaid < 30; numPrepaid++)
	{
		if (numPrepaid == 0)
		{
		scanf(" %f", &prepaid);

		}
		else
		{
		printf("=============================================================================================================");
		printf("\nThanks! enter the next prepaid total!\n");
		printf("When you are done, type any number less than 1, to move on.\n");
		printf("=============================================================================================================\n");

		scanf(" %f", &prepaid);
		}

		if (prepaid < 0.00)
		{
			break;

		} // end if
		total += prepaid;
	} //end of numprepaid loop

	printf("\nSweet! looks like you have $%.2f prepaids all together!\n", total);





	//and Now we will add all of the credit card tips the driver recieved
	printf("Please enter all of your credit card tips!(just type the tip, not subtotal.)\n");
	printf("==========================================================================================================================\n");

	for (numCredit = 0; numCredit < 30; numCredit++)
	{
		if (numCredit == 0)
		{
			scanf(" %f", &credit);
		}
		else
		{
			printf("=============================================================================================================");
			printf("\nThanks! enter another credit card tip! please do not include the subtotal, just the tip..\n");
			printf("=============================================================================================================\n");
			scanf(" %f", &credit);
		}

		if (credit < 0.00)
		{
			break;
		} // end if

		total += credit;
	} // end of numCredit loop

	printf("Okay, if we add together all your prepaid, and tips we now get $%.2f\n", total);






	//Just incase driver has poker chips, or someone else assigned a delivery to the wrong driver..
	printf("If there are any other items you paid for today, please enter them now!\n");
	for (numOther = 0; numOther < 30; numOther++)
	{
		if (numOther == 0)
		{
			scanf(" %f", &other);

		}
		else
		{
			printf("=============================================================================================================");
			printf("\nEnter other charges now!\n");
			scanf(" %f", &other);
		}


		if (other < 0.00)
		{
			break;
		}
		total += other;
	} //end of numother loop


	//We need to calculate the gas the drive is owed... so we will add the amnt of deliveries to the total here...
	total += deliveries;
	printf("\n\n\n\n------------------------------------------------------------------------------------------------------------");
	printf("\nYou took %.0f deliveries. The pizzeria pays out $1.00 for every delivery you take to account for gas.\n", deliveries);
	printf("So we will add $%.0f to the total...\n", deliveries);
	printf("Okay %s, when we add all of your charges together we get $%.2f.\n", driver, total);
	printf("That includes your prepaids, your credits, your gas, and any other deductions..\n");
	printf("You owed the pizzeria $%.2f, so we will subtract your $%.2f from the total amount owed.\n", owed, total);

	//This is how much the driver needs to put in or take out of the till at the end of the day...
	finalTotal = owed - total;

	printf("Final: %.2f - %.2f = %.2f\n", owed, total, finalTotal);
	printf("Put $%.2f in the till, and finalize all your credits! :), good night!\n", finalTotal);

	return 0;
}