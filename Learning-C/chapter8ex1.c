//Example program #1 from beginners guide to C...
//File chapter8ex1.c


/* this program will take an input from a user using scanf functions, and do stuff with that input... */

#include <stdio.h>

main()

{
	//initializing variables that scanF will fill...

	char firstInitial;
	char lastInitial;
	int age;
	int favorite_number;

	printf("What letter does your first name begin with?\n");
	scanf(" %c", &firstInitial);

	printf("What letter does your last name begin with?\n");
	scanf(" %c", &lastInitial);

	printf("How old are you?\n");
	scanf(" %d", &age);

	printf("What is your favorite number (integer only) ?\n");
	scanf(" %d", &favorite_number);



	// Now we will display all the values the user just defined for us... 

	printf("\nYour initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
	printf("\nYour favorite number is %d. \n\n", favorite_number);

	return 0;
}