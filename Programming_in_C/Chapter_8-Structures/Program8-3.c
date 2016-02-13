// Program to determine tomorrow's date

#include <stdio.h>
#include <stdbool.h>


struct date
{
	int month;
	int day;
	int year;
};


int main (void)
{

	struct date today, tomorrow; // assign the groupings of struct date, to variables today and tomorrow.
								 	// This way we can call today.month to access that specific val.
										// today and tomorrow are not necesarrily related to eachotehr yet.


	// just a Prototype Dec
	int numberOfDays (struct date d);



	printf("Enter Today's Date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);

	if ( today.day != numberOfDays (today))		// avg day... if does not == the end of the month...
	{
		tomorrow.day   = today.day +1;
		tomorrow.month = today.month;
		tomorrow.year  = today.year;
	}
	else if (today.month == 12)					// end of a year
	{
		tomorrow.day   = 1;
		tomorrow.month = 1;
		tomorrow.year  = today.year + 1;
	}
	else										// end of a month
	{
		tomorrow.day   = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year  = today.year;
	}
	printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);


	return (0);
}

// function to return the number of days in a month
int numberOfDays (struct date d)
{

	int days;	// will be returned
	bool isLeapYear(struct date d);	// will use this function.
	const int daysPerMonth[12] =
				{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


	if ( isLeapYear (d) == true && d.month == 2 )		// calls its own fucntion, and returns true if we have a leap year...
	{
		days = 29;
	}
	else
		days = daysPerMonth[d.month - 1];


	return days;
}


// Function to determine if it's a leap year

bool isLeapYear(struct date d)
{

	bool leapYearFlag;

	if ( ( d.year % 4 == 0 && d.year % 100 != 0 )  ||  d.year % 400 == 0)
	{
		leapYearFlag = true; 	// it's a leap year!
	}
	else
	{
		leapYearFlag = false;
	}



	return (leapYearFlag);
}

