#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms,
 * that not exced 4000000, of the fibonacci series
 * followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int total;
	unsigned long a, b, sum;

	total = 0;
	sum = 0;
	a = 0;
	b = 1;

	while (sum  <= 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			total += sum;
	}

	printf("%d\n", total);

	return (0);

}

