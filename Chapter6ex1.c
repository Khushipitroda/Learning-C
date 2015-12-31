// Example program #1 from Chapter 6 of
// Absolute Beginners guide to C
// File Chapter6ex1.c

#include <stdio.h>
#include <string.h>


main()
{
	char Kid1[12];									//kid1 can hold an 11 character name

	char Kid2[] = "Maddie";							//kid2 can hold a 6 character name

	char Kid3[7] = "Andrew";						//kid3 can hold 6 and is very specificly defined

	char Hero1[] = "Batman";							//Hero1 will be 6 characters

	char Hero2[34] = "Spideman";					//Hero2 can hold 33 characters, 9 will be defined, and the rest will be extra space

	char Hero3[25];									//Hero3 can hold 24




		Kid1[0] = 'K';								//We are defining Kid1, character by character... need string.h to skip this
		Kid1[1] = 'a';								//Time waster!!!
		Kid1[2] = 't';
		Kid1[3] = 'i';
		Kid1[4] = 'e';
		Kid1[5] = '\0';								//Null 0, ends string at place 5.


		strcpy(Hero3, "The Incredible Hulk");

		printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
		printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
		printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);


		return 0;


}
