// Program to determine tomorrow's date, uses struct variables.
// Uses a const var to assign the days per each month to the appropriate struct call
// accounts for end of month + end of year + normal days

#include <stdio.h>


int main (void)
{

	struct date 
	{
		int month;
		int day;
		int year;
	};

	struct date today, tomorrow;

	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

	printf("Enter Today's Date (mm dd yyyy ) :   ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);



	// If we are not at the last day of the month.... 
	if ( today.day != daysPerMonth[today.month - 1])		// every other day
	{
		tomorrow.day   = today.day + 1;	// INC day by 1
		tomorrow.month = today.month;
		tommory.year   = today.year;
	}
	else if (today.month == 12)		// end of year
	{
		tomorrow.day   = 1;
		tomorrow.month = 1;
		tomorrow.year  = today.year + 1;

	}
	else							// end of month
	{
		tomorrow.day   = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year  = today.year;
	}


	printf("Today's date is %i/	%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);


	return (0);
}