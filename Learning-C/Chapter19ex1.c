//Example Program from Chapter 19 example 1 of beginner's guide to c
//File Chapter19ex1.c

/*	This program asks a user for a username and a password. It tests wether their password has an uppercase letter,
 lowercase letter, and a digit. If it does, the program congratulates their slection. If not, it suggests they might
  want to consider a password with some more variety for the sake of security.	*/

 //stdio.h is needed for printf() and scanf()
 //string.h is needed for strlen()
 //cytpe.h is needed for isdigit, isupper, and islower

 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>

 int main()
 {
 	int i; //declare iterators on a seperate int line, for readability
 	int hasUpper, hasLower, hasDigit;
 	char user[25], password[25];

 	//initialize all three test variables to 0 i.e. flase

 	hasUpper = hasLower = hasDigit = 0;

 	printf("What is you username? \n");
 	scanf(" %s", user);		 //no & b/c of string

 	printf("Please create a password: ");
 	scanf(" %s", password);

 	//This loop goes through each character of the password, and tests wether it is a digit, uppercase, then lowercase.


 	for (i = 0; i < strlen(password); i++)
 	{
 		if (isdigit(password[i]))
 		{
 			hasDigit = 1;
 			continue; //I believe this cointinue makes sure the rest of the code doesn't execute, and returns us to the for loop immediately, incrementing i...
 		}
 		if (isupper(password[i]))
 		{
 			hasUpper = 1;
 			continue;
 		}
 		if (islower(password[i]))
 		{
 			hasLower = 1;
 		}
 	} //end for

 	/*	The if portion will only execute if all three variables below are 1,
 		and the variables will only equal 1 if the appropriate characters where each found.	*/


 	if ((hasDigit) && (hasUpper) && (hasLower))
 	{
 		printf("\n\nExcellent work, %s, \n", user);
 		printf("One that uses upper and lowercase letters and a number.");
 		printf("\nYou will probably never be hacked. You pussy fuck. ");

 	} else
 	{
 		printf("\n\nYou should consider a new password, %s, \n", user);
 		printf("Maybe one that uses uppercase, lowercase letters, and a number.");
 	}

 	return (0);

 }
