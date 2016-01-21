// Program accepts two integers from user, then divides first by second. checks for division by 0.

#include <stdio.h>

int main (void)
{

	float value1, value2, ans;

	printf("Please enter the values you want divised. :  ");
	scanf("%f %f", &value1, &value2);


	if (value2 == 0)
	{
		printf("Can't divide by 0. Automatically set number to 1... \n");
		value2 = 1;
	}


	ans = value1 / value2;

	printf("\n%.2f divided by %.2f = %.3f.\n", value1, value2, ans);


	return 0;

}
