// Program to convert a positive number to another base

#include <stdio.h>

int main (void)
{

	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };					// Const variables will never be altered or changed by the program. only read.

	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;









	// Get the number and the base

	printf("Number to be converted?  :  ");
	scanf("%ld", &numberToConvert);

	printf("Base? ");
	scanf("%i", &base);









	// Convert to the indicated base

	do
	{
		convertedNumber[index] = numberToConvert % base;	// this part does all the work. Adds number to conversion.

		++index;											// For next loop.

		numberToConvert = numberToConvert / base;			// So next loop is different. 

	} while (numberToConvert != 0 );







	// Display the results in reverse order


	printf("Converted number =  ");


	for (--index; index >= 0; --index)		// The first --index only happens once, as it is initializer. then after loop runs index is only decremented by 1.
	{
		nextDigit = convertedNumber[index];	
		printf("%c", baseDigits[nextDigit]);	// This part applies the a-f in base digits if necessary. since nextdigit is set to n[index].

	}



	printf("\n");




	return (0);

}
