#include "main.h"

/**
 * times_table - Print the 9 times table
 * starting form 0
 *
 * Return: Every minute in a new line.
 */

void times_table(void)
{
	int i, j, ans;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;
			if (ans <= 9)
				_putchar(' ');
			else
				_putchar('0' + (ans / 10));

			_putchar('0' + (ans % 10));
			if (j != 9)
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
