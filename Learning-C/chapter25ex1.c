// Example Program #1 from Chapter 25 of Beginner's Guide to C
// File chapter25ex1.c

	/*	This program declares and initializes an array of character pointers and then asks for ratings associated. 	*/

#include <stdio.h>



int main()
{

	int i; // iterator
	int ctr = 0;
	char ans;


	// Declaring our array of 9 characters and then initializing them
	char * movies[9] = {"Amour", "Argo",
								"Beasts of the Southern Wild",
								"Django Unchained",
								"Les Miserables",                                           /*	This array doesn't contiain strings of movies..	*/
								"Life of Pi",												/*	It only contains addresses for strings that have names	*/
								"Lincoln",													/*	It actually looks like movies[9] = "9934", "4325", "5678"	*/
								"Silver Linnings Playbook",									/*	where 9934 is defined as "Argo", and 4325 is Beast of Southrn */
								"Zero Dark Thirty"};

	int movieratings[9]; 	// A corresponding array of 9 integers for movie ratings


		char * tempmovie = "This will be used to sort rated movies";
		int outer, inner, didSwap, temprating; // for the sort loop...

		printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
		printf("Time to rate this year's best picture nominees: \n");




		for (i=0; i < 9; i++)
		{
			printf("Did you see %s? (Y/N): ", movies[i]);
			scanf(" %c", &ans);

			if ((toupper(ans)) == 'Y')			 // Set answer to uppercase.. and check answer
			{
				printf("\nWhat was your rating on a scale of 1-10: ");
				scanf(" %d", &movieratings[i]);	// Used iterator on ratings array.
                printf("\n");
				ctr++; 							// This will be used to print only movies you've actually seen
				continue;						// Restart loop...

			} else
			{
				movieratings[i] = -1; // If ans is N, ignore that iteration...

			}

		}// end for loop over i

		// Now sort the movies by rating (the unseen will go to the bottom)



		// BUBBLE SORT TIME!
		for (outer = 0; outer < 8; outer++)
		{
			didSwap = 0; 											// didSwap checks if we are done yet...
			for (inner = outer; inner < 9; inner++)					//This will check if the current outer loop [i] value is less than next part of array
			{
				if (movieratings[inner] > movieratings[outer])
				{
					tempmovie = movies[inner]; // Set temp vars for swapping vars
					temprating = movieratings[inner];

					movies[inner] = movies[outer];
					movieratings[inner] = movieratings[outer];

					movies[outer] = tempmovie;
					movieratings[outer] = temprating;

					didSwap = 1;

				}	//end of if
			}	// end inner.. inc++


			if (didSwap == 0)
			{

				break;
			}

		}	// end outer loop


		// BUBBLE SORTING DONE


		// Now to print the movies you saw in order
		printf("\n\n** Your Movie Ratings for the 2012 Oscar Contenders **\n");
		for (i = 0; i < ctr; i++)	//used ctr, so we know when to stop...
		{
			printf("%s rated a %d!\n", movies[i], movieratings[i]);
		}

		return 0;
}
