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
			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				ans = i * j;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
