#include <stdio.h>

/**
 * main - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded),
 *  followed by a new line.
 *
 * Return: Always 0 Succes
 */

int main(void)
{
	int counter, total;

	counter = 0;
	total = 0;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			total += counter;
		counter++;
	}
	printf("%d\n", counter);
	
	return (0);
}
