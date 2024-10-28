#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * with its lenght base on the value of n.
 * @n: number of timers the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
}
