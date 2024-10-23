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
			_putchar('0' + ans);
			_putchar(',' + ans);
			_putchar(' ' + ans);
		}
		_putchar('\n');
	}
}
