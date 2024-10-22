#include "main.h"

/**
 * print_alphabet_x10 - Function in charge of
 * printing the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	i = 0;
	x = 'a';

	while (i < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
