#include <stdio.h>
int main()
{

	FILE *fp;

    char cashAmnt[5];
    char dueAmnt[5];
    char deliveryAmnt[5];
	char str[100];
	int i;	// iterator
	int check;	// Check if line contains end for loop... set 1 if it finds an end key.

	/* opening file for reading */
	fp = fopen("/Users/MaxM/Desktop/C_programs/FileReading/testfile.txt" , "r");


	// Go through lines in file

	if( fgets (str, 100, fp)!=NULL ) {
    	puts(str);
	} //end if
	if( fgets (str, 100, fp)!=NULL ) {
        //puts(str);
	} //end if
	if( fgets (str, 100, fp)!=NULL ) {
        puts(str);
	} //end if
    if( fgets (str, 100, fp)!=NULL ) {
        puts(str);
	} //end if















		// THIS METHOD ONLY PRINTS THE CASH LINE OVER AND OVER AGIAIN... WTF..
	// Start looping here...
	check = 0;
	do {

      	fgets (str, 100, fp);
      		for (i = 0; i < 100; i++)
      		{
      			if (str[i] == '_')
      			{
      				check = 1;	// So we know we are done with loop.
      				break; // Shoud break out of iteration..
      			}
      			else
      			{
      				puts(str);
			      	fgets (str, 100, fp);

      			}	// End of nested if/else
      		} // end of for loop
	} while (check != 1);	// Check will be 1 when we reach the end of our loop. so we will stop loop then.

	// I think we might need to iterate through each seperate string, and check if string contains the end for the loop.


	return(0);
	}

