#include <stdio.h>

/**
 * main - Prints all single digit numbers
 * separated by a coma (,) and space (' ')
 * using the putchar() function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		for (i = 0; i < 9; i++)
			putchar(',');
	}
	return (0)
}
