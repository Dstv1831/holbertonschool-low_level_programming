#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - assess if a random number is positive
 * negative or zero
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%u is positive\n", n);
	else if (n < 0)
		printf("%u is negative\n", n);
	else
		printf("%u is zero\n", n);

	return (0);
}

