#include "main.h"

/**
 * print_times_table - Print the n  times table
 * starting form 0
 * @n: Number to make the times table
 */

void print_times_table(int n)
{
	int i, j, ans;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				ans = i * j;

				if (ans <= 99)
					_putchar(' ');
				if (ans <= 9)
					_putchar(' ');

				if (ans >= 100)
				{
					_putchar('0' + (ans / 100));
					_putchar(((ans / 10)) % 10 + '0');
				}
				else if (ans <= 99 && ans >= 10)
				{
					_putchar('0' + (ans / 10));
				}
				_putchar('0' + (ans % 10));
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
