//This program is meant to be able to read from a .txt file, and edit the data inside it.
//We will be editing a file with fake gpa scores in it. the goal is to delete all scores with less than 65 gpa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	typedef struct
	{
		char *name;
		float gpa;
	} student;


int main()
{
		FILE *originalFile = fopen("~/Desktop/C_programs/file.txt", "r");
		FILE *newFile = fopen("~/Desktop/C_programs/file_temp.txt", "w");

		int studentCount;
		fscanf(originalFile, "%i", &studentCount);

		student *passingStudents = malloc(sizeof(student) * studentCount);

		int passingCount;
		for (int i = 0; i < studentCount; i++)
		{
			int nameLen;

			fscanf(originalFile, "%i", &nameLen);

			char *name = malloc(sizeof(char) * (nameLen + 1));
			name[nameLen] = '\0';
			float gpa;

			fscanf(originalFile, "%s %f", name, &gpa);

			if (gpa >= 65.0)
			{
				passingStudents[passingCount].name = name;
				passingStudents[passingCount].gpa = gpa;

				passingCount++;
			}
		} //end for

		fprintf(newFile, "%i\n", passingCount);

		for (int i = 0; i < passingCount; i++)
			fprintf(newFile,"%i %s %.2f\n", strlen(passingStudents[i].name), passingStudents[i].name, passingStudents[i].gpa);

		fclose(originalFile);
		fclose(newFile);

		// Removing, and deletion of files takes place here:


		printf("Successfully removed all of the failing students.");

		return 0;
}
