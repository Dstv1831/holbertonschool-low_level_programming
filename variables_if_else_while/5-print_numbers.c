#include <stdio.h>

/**
 * main - Prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: Alaways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10;)
		printf("%d", i++);
	printf('\n');

	return (0);
}
