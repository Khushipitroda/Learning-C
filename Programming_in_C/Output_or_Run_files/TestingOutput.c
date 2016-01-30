#include <stdio.h>


int main (void)
{

	// Prototype Declarations
	int mainMenu(void);	// returns int, sent nothing
	int whereToGo(int response);

	// main vars
	int response;


	response = mainMenu();
	whereToGo(response);	// This function sends user to desired sub-menu, passes user's response



	return (0);
}



int mainMenu()
{

	int response;

	printf("\tWelcome!");
	printf("New York Pizzeria POS!\n");

	printf("1. New Order\n");
	printf("2. Phone Order\n");
	printf("3. View Orders\n");
	printf("4. Clock In\n");
	printf("5. Pin\n");
	printf("6. Manager Menu\n");
	scanf(" %i", &response);

	return response;

}

int whereToGo(int response)
{

	// Type declarations
	void orderMenu(void);
	void phoneMenu(void);
	void orderDir(void);
	void timeClock(void);
	void pinMenu(void);
	void managerMenu(void);


	if (response == 1)
	{
		orderMenu();
	}
	if (response == 2)
	{
		phoneMenu();
	}
	if (response == 3)
	{
		orderDir();
	}
	if (response == 4)
	{
		timeClock();
	}
	if (response == 5)
	{
		pinMenu();
	}
	if (response == 6)
	{
		managerMenu();
	}
	else
		printf("Wrong Response.\n");

    return(2);
}

void orderMenu(void)
{

	int orderMenuDecision(int subResponse);


	int subResponse;
	char name;

	printf("Does the customer want, 1).  Dine-in? or 2).  Take-out?\n");
	scanf(" %i", &subResponse);

	printf("What is the customer's name? :   ");
	scanf(" %c", &name);

	orderMenuDecision(subResponse); // could pass name to make sure employee entered correct name. Prob have to use pointers

}

int orderMenuDecision(subResponse)
{

	if (subResponse == 1)
	{

	}
	if (subResponse == 2)
	{

	}
	else
		printf("Wrong response.\n");
    return(1);
}

