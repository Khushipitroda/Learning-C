// Program takes the base number converter from chp6 program 7
// Breaks that program down into 3 functions, and uses 4 global variables to calc result
// Displays how functions can be used im a large program

#include <stdio.h>

/* ======	GLOBAL VARIABLES	 ======*/

int 		convertedNumber[64];
long int 	numberToConvert;
int 		base;
int 		digit = 0;

/* ====================================*/




/*=================================== Function: Get Base + Number =============================================*/
void getNumberAndBase(void)		// Function uses scanf to get data, and assigns to global vars
{

	printf("Number you want converted?  : ");
	scanf(" %li", &numberToConvert);

	printf("\nWhat Base do you want %li to be converted to?  : ", numberToConvert);
	scanf("%i", &base);

	if (base < 2 || base > 16)
	{
		printf("Bad response - base must be a number 2-16.\nTry Again.\n");
		base = 10;
	}
}
/*==================================================================================================*/




/*=================================== Function: Convert Number =============================================*/
void convertNumber(void)
{
	do {

		convertedNumber[digit] = numberToConvert % base;

		++digit;	// This is why we later need to dec digit by 1 before printing. It will ++ then stop.

		numberToConvert /= base;
	}
    while (numberToConvert != 0 );
}
/*==================================================================================================*/






/*=================================== Function: Display Result =============================================*/
void displayConvertedNumber(void)
{
	const char baseDigits[16] =
			{ '0', '1', '2', '3', '4', '5', '6', '7',
			  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	int nextDigit;

	printf("Converted Number  = ");

	for (--digit; digit >= 0; --digit)			// initializes digit by dec 1. then dec 1 every call. stop when 0
	{
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}
	printf("\n\n");
}
/*==================================================================================================*/



int main (void)
{
	// Prototype declarations!
	void getNumberAndBase(void);
	void convertNumber(void);
	void displayConvertedNumber(void);
	//




	getNumberAndBase();
	convertNumber();
	displayConvertedNumber();

	return (0);
}
