#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()

{



        char line[100];
        FILE *file = fopen("/Users/MaxM/Desktop/C_programs/dReceipt.txt", "r");
            while(fgets(line, sizeof(line), file) != NULL)       //read each line of the file
                {
                    if (line[1] == "_")
                    {
                        continue;
                    }
                    else
                    {
                        printf(line);
                    }
                }

}
