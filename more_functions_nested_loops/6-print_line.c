#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * with its lenght base on the value of n.
 * @n: number of timers the character _ should be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i <= n; i++)
			putchar('_');
	_putchar('\n');
}
