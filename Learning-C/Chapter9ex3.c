#include <stdio.h>

main()
{
	int grade1, grade2, grade3, grade4;
	float averageGrade, gradeDelta, percentDiff


	//This student got 88 on first, and third test.. 

	grade1 = grade3 = 88;

	grade2 = 79;

	//The user needs to enter the fourth date...
	printf("Please enter the grade for your fourth test...\n");
	printf("input an integer between 0 and 100 please..\n");
	scanf(" %d", &grade4);

	averageGrade = (grade1+grade2+grade3+grade4)/4;

	printf("Your average grade is %d.\n", averageGrade);


	gradeDelta = 95 - averageGrade;
	percentDiff = 100 * ((95-averageGrade)/95);

	printf("Your grade is %d points lower than the highest in the class(95).\n", gradeDelta); 
	printf("You are %.1f behind that grade.", percentDiff)


	return 0;
	
}

