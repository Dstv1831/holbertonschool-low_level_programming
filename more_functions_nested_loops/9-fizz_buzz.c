#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: 0 Always success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			printf("Fizz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
