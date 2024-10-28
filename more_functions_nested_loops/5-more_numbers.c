#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 9)
	{
		for (i = 0; i <= 14; i++)
			_putchar('0' + i);
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
