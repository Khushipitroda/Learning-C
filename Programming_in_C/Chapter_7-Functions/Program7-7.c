// Function to calculate the absolute value

#include <stdio.h>

float absoluteValue(float x)			// This function has 1 argument. a float variable.
{

	if (x < 0)
		x = -x;					// Sets to positive if negative

	return (x);					// Sends the result back to main()
}

int main (void)
{

	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int i1 = -716;
	float result;			// Recieves return(); from function

	result = absoluteValue(f1);
	printf("Result = %.2f.\n", result);
	printf("f1 = %2f.\n", f1);

	printf("\n\n");

	result = absoluteValue(f2) + absoluteValue(f3);			// This translates to result = floatvar + floatvar. never mind the function.
	printf("Result = %.2f.\n", result);

	printf("\n\n");

	result = absoluteValue((float) i1 ); 					// (float) var. typecasts integer to float. result = 716.000
	printf("Result = %.2f.\n", result);

	result = absoluteValue(i1);
	printf("Result = %.2f.\n", result);						// Somehow fucntion still prints value...

	printf("\n\n");

	printf("%.2f.\n", absoluteValue (-6.0) / 4 );			// Implicitly calls function.. this should still work. just doesn't use result var!


	return (0);

}
