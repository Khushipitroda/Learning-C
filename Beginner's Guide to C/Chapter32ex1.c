// Example Program #1 from Chapter 32 of Beginner's guide to C
// file Chapter32ex1.c

/*	The program demonstrates functions returning a vlue by passing three floating- point
	numbers (grades) and calculating the average of three.	*/

#include <stdio.h>

float gradeAve(float test1, float test2, float test3);

int main()
{

	float grade1, grade2, grade3;
	float average;

	printf("What was the grade on the first test?\n");
	scanf(" %f", &grade1);

	printf("What was the grade on the second test?\n");
	scanf(" %f", &grade2);

	printf("What was the grade on the third test?\n");
	scanf(" %f", &grade3);




	// Pass the three grades to the function and return the average
	average = gradeAve(grade1, grade2, grade3);	//Average variable will be set to the number gradeAve returns.... the average... 

	printf("\nWith those three test scores, the average is %.2f", average);



	return 0;

}


/***********************************************************************************************/

float gradeAve(float test1, float test2, float test3)
{

	float localAverage;

	localAverage = (test1+test2+test3)/3;

	return (localAverage); // Returns the average to main



}



