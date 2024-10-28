#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar ('0' + i / 10);
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		j++;
	}
}
