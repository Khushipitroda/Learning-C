#include <stdio.h>
int main()
{

	FILE *fp;
	char str[200];
    char str2[200];
    char str3[200];
    char str4[200];
    char str5[200];
    char str6[200];
    char cashAmnt[5];
    char dueAmnt[5];
    char deliveryAmnt[5];
    int x = 0;
	/* opening file for reading */
	fp = fopen("/Users/MaxM/Desktop/C_programs/FileReading/dFile.txt" , "r");
	if( fgets (str, 200, fp)!=NULL ) {

	} //end if
	if( fgets (str, 200, fp)!=NULL ) {

	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
    if( fgets (str, 200, fp)!=NULL ) {
        //puts(str);    This Line should Have Bank: # for driver
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	    puts(str);     //DRIVE NAME
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	    //puts(str); This line shouws a dash...
	} //end if
	if( fgets (str2, 200, fp)!=NULL ) {
	    puts(str2);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {


	  puts(str);

	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
        puts(str);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {

	  /* writing content to stdout */
	  //puts(str);

	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if


	if( fgets (str3, 200, fp)!=NULL ) {

	  /* writing content to stdout */
	  puts(str3);

	} //end if


	if( fgets (str5, 200, fp)!=NULL ) {
        puts(str5);
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if


	if( fgets (str5, 200, fp)!=NULL ) {

	  //puts(str5);


	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
        puts(str);
	} //end if


	if( fgets (str6, 200, fp)!=NULL ) {
	  /* writing content to stdout */


	} //end if


	fclose(fp);




    for (int i = 5; i < strlen(str2); i++)      //Starts at five to ignore time data....
    {
        if (isdigit(str2[i]))
        {

            cashAmnt[x] = str2[i];
            x++;
        }
        else
        {
            continue;
        }


    }
    x = 0;
    for (int i = 0; i < strlen(str3); i++)
        {
            if (isdigit(str3[i]))
            {
                dueAmnt[x] = str3[i];
                x++;
            } else
            {
                continue;
            }

        }


        // SKIPPED STRING 4... DON'T KNOW IF I NEED CASH AGAIN, LOL






    x = 0;
    for (int i = 0; i < strlen(str5); i++)
    {
    	if (isdigit(str5[i]))
    	{
    		deliveryAmnt[x] = str5[i];
    		x++;
    	} else
    	{
    		continue;
    	}

    }



    printf("\n\n\nstr2: %c%c%c%c", str2[17], str2[18], str2[20], str2[21]);
    printf("\n\n\ncash: %c%c%c%c", cashAmnt[0], cashAmnt[1], cashAmnt[2], cashAmnt[3]);
    printf("\n\ndue: %c%c%c%c", dueAmnt[0], dueAmnt[1], dueAmnt[2], dueAmnt[3]);
    printf("\n\nDeliv#: %c%c", deliveryAmnt[0], deliveryAmnt[1]);
	return(0);
	}

