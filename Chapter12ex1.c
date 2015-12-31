//Example program #1 from Chapter12 of Absolute beginner's guide to c
//File Chapter12ex1.c

/* 	This Program defines a series of variables and expressions
 	and then uses both relational and logical operators to
 	 test them against each other	*/

#include <stdio.h> 

int main(int argc, char const *argv[])
	{
		//set up some common integers for the program
		int planets = 8;
		int friends = 6;
		int potterBooks = 7;
		int starWars = 6;
		int months = 12;
		int beatles = 4;
		int avengers = 6;
		int baseball = 9;
		int basketball = 5;
		int football = 11;

		// The first logical statement uses AND operator
		// to test wether the cast of Friends and the Beatles 
		// would have enough people to field a football team, and the friends and avengers. if both statements are true, we will
		// execute the if statement, if one or both is false, we will execute the else.
		// in seudo code, this program should evaluate this expression to be true, thus display the if part of the program...


		if ((friends + beatles >= baseball) && (friends + avengers >= football)
		{
			printf("The cast of Friends and the Beatles could make a baseball team,\n");
			printf("AND the cast of Friends plus the Avengers could make a football team.\n");
		}
		else 
		{

			printf("Either the Friends cannot make a baseball team with the Fab Four, \n");
			printf("OR they can't make a Girdiron Gang with the Avengers (or both!)\n");

		}

		//THis second statement uses the OR logical operator to test wether the number of 
		//Star Wars movies is less than months in the year Or the number of harry potter 
		//books is less than months in the year. If either statement is true, the statements will print.

		if ((starWars <= months) || (potterBooks <= months))
		{
			printf("You could read one Harry Potter book a month, and finish them all in less than a year,\n");
			printf("OR you could see one StarWars movie a month, and finish them all in less than a year. \n");

		}
		else 
		{
			printf("Neither can happen--too many books or movies, Not enough time!\n\n ");

		}

		/*	This Final logical statement uses the NOT operator to test wether the number of baseball players on a team 
			added to the number of basketball players on a team is NOT freater than the number of
			football players on a team. If so, the statements will print. */

		if (!(baseball + basketball > football))
		{
			printf("There are fewer baseball and basketball players combined than football players.\n");
		}
		else
		{
			printf("There are more baseball and basketball players combined than football players.\n");

		}

		return 0;
	}	