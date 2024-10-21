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
	ld = n % 10;
	greater_5[] = "and is greater than 5";
	zero[] = "and is 0";
	less_6[] = "and is less than 6 and not 0";
	if (ld > 5)
		printf("Last digit of %d is %d %s\n", n, ld, greater_5);
	else if (ld == 0)
		printf("Last digit of %d is %d %s\n", n, ld, zero);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d %s\n", n, ld, less_6);

	return (0);
}
