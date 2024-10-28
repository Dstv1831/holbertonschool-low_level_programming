#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * with its lenght base on the value of n.
 * @n: number of timers the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n'};
}
