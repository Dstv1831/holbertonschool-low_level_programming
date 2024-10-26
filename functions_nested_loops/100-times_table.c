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
				ans = i * j;
				if (ans <= 9 && j > 0)
					_putchar(' ');
				else if (ans > 9)
					_putchar('0' + (ans / 10));

				_putchar('0' + (ans % 10));
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
