#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long a, b, sum;
	unsigned long a1, a2, b1, b2;
	unsigned long fibhalf1, fibhalf2;

	count = 1;
	sum = 0;
	a = 0;
	b = 1;
	while (count < 93)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu, ", sum);
		count++;
	}
	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	while (count < 99)
	{
		fibhalf1 = a1 + b1;
		fibhalf2 = a2 + b2;
		if (a2 + b2 > 999999000)
		{
			fibhalf1 += 1;
			fibhalf2 %= 1000000000;
		}
		printf("%lu%lu", fibhalf1, fibhalf2);
		if (count != 98)
			printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = fibhalf1;
		b2 = fibhalf2;
		count++;
	}
	printf("\n");
	return (0);
}

