// Program to illustrate the differences between automatic and static variables in functions

#include <stdio.h>


void auto_static(void)
{

	int autoVar = 1;
	static int staticVar = 1;

	printf("automatic = %i, static = %i.\n", autoVar, staticVar);

	++autoVar;			// Should be reset to 0 every time function is called.
	++staticVar;		// Should increase by 1, everey time function is called.


}



int main (void)
{

	int i;
	void auto_static(void);		// Prototype Declaration

	for (i = 0; i < 5; i++)
	{
		auto_static();			// Calls function 5 times.. fucntion inc and prints.
	}


	return (0);

}
