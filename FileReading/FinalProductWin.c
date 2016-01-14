#include <stdio.h>
int main()
{

	FILE *fp;
	char str[200];
    char str2[200];	// Cash Amount
    char str3[200];	// Due Amount
    char str4[200];	// Driver's Name
    char str5[200];	// Delivery Amount
    char str6[200];
    char cashAmnt[7];
    char dueAmnt[7];
    char deliveryAmnt[7];
    char driverName[20];
    int check;
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
	if( fgets (str4, 200, fp)!=NULL ) {
	    puts(str4);     //DRIVER NAME
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	    puts(str); //This line shouws a dash... could start loop here..

	} //end if
	check = 0;
	do {

      	fgets (str, 100, fp);
      		for (int i = 0; i < 100; i++)
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


	if( fgets (str, 200, fp)!=NULL ) {
	    //puts(str);
	} //end if


	if( fgets (str3, 200, fp)!=NULL ) {

	  puts(str3);

	} //end if


	if( fgets (str2, 200, fp)!=NULL ) {
        puts(str2);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);

	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);

	} //end if


	if( fgets (str5, 200, fp)!=NULL ) {

	  puts(str5);

	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
        //puts(str);
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {

	  //puts(str);


	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
        //puts(str);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	} //end if

	fclose(fp);




    for (int i = 5; i < strlen(str2); i++)      //Starts at five to ignore time data....
    {
        if ((isdigit(str2[i])) || (str2[i] == '.'))
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
        if ((isdigit(str3[i])) || (str3[i] == '.'))
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
    for (int i=0; i < strlen(str4); i++)		// For array with driver's name...
    {
        if (isalpha(str4[i]))
    	{
    		driverName[x] = str4[i];
    		x++;
    	} else
    	{
    		continue;
    	}
    }




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


    printf("\n\n\nname: %c%c%c%c%c%c%c%c", driverName[0], driverName[1], driverName[2], driverName[3], driverName[4], driverName[5], driverName[6], driverName[7]);
    printf("\ncash: %c%c%c%c", cashAmnt[0], cashAmnt[1], cashAmnt[2], cashAmnt[3]);
    printf("\ndue: %c%c%c%c%c%c", dueAmnt[0], dueAmnt[1], dueAmnt[2], dueAmnt[3], dueAmnt[4], dueAmnt[5]);
    printf("\nDeliv#: %c%c\n", deliveryAmnt[0], deliveryAmnt[1]);







    // Converting arrays to int and float...
    int n;
    sscanf(deliveryAmnt, "%d", &n);
    printf("\n\n\nDelivery amnt as int variable: %d\n", n);


    float c;
    sscanf(cashAmnt,"%f",&c);
    printf("Cash amnt var: %.2f\n", c);

    float d;
    sscanf(dueAmnt, "%f",&d);
    printf("Due amnt var: %.2f\n", d);




    // Start program ui here:
    char ansA, ansB, ansC;

    printf("\n\n\n\nWelcome! DriverName!!");
    printf("\nYou took %d deliveries today! good job!!", n);
    printf("\nIs this number correct? (Y)/(N) answer plz...\n");
    scanf(" %c", &ansA);
    if (ansA == 'N')
    {
    	printf("\nPlease enter the correct number.\n");
    	scanf(" %d", &n);
    	printf("\nNew delivery number is now: %d", n);
    }

    printf("\nYou Owe the Pizzeria a total of :  $0.00\n");
    // Need to convert array into float data.. Fuck



	return(0);
	}

