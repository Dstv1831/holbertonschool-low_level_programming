#include "main.h"

/**
 * puts2 - function that reverses a string
 * @str: String parameter.
 */

void puts2(char *str)
{	
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
