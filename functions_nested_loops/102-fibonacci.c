#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long a, b, sum;

	count = 1;
	sum = 0;
	a = 0;
	b = 1;

	while (count < 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (count == 50)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
		count++;

	}

	return (0);

}

