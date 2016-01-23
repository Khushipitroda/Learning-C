// Program is an updated prime number generator, utilizes arrays, and methods like checking past numbers instead of all numbers down to 0.

#include <stdio.h>
#include <stdbool.h>

int main (void)
{


	int p, i, primes[50], primeIndex = 2;
	bool isPrime;

	primes[0] = 2;
	primes[1] = 3;

	for ( p = 5; p <= 50; p += 2)	// starts at 5 bc prime, stps at 50, inc by 2.
	{
		isPrime = true;

		for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i) // the test checks if the square root of prime has been hit yet... we are done if it is true.
		{
			if (p % primes[i] == 0)	// if outer loop / inner loop has no remainder...
			{
				isPrime = false;
			}

		} // inner loop, i

		if (isPrime == true)
		{
			primes[primeIndex] = p;
			++ primeIndex;
		}


	} // outer loop, p

	for ( i = 0; i < primeIndex; ++i)
	{
		printf("%i ", primes[i]);
	}

	printf("\n");


}
