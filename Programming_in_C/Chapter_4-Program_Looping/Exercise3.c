// Program should generate a table of triangular numbers. The table should contain triangular numbers for 5 - 50, but only every 5th number...
// should make use of (trianglenum = n (n + 1) \ 2 )

#include <stdio.h>

int main (void)
{

	int triNum; // Short for triangular number
	int n;

	for (n = 5; n < 55; n += 5)
	{
		triNum = (n * (n + 1)) / 2;	// Should input n and calc the correct tri num...
		printf("%i.\n", triNum);

	}


}
