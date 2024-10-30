#include "main.h"

/**
 * puts_half - function that prints half
 * of a string, followed by a new line.
 * @str: String parameter.
 */

void puts_half(char *str)
{
	int i = 0, len = 0, n = 0;

	while (str[i++])
		len++;

	n = len / 2;
	if (len % 2 != 0)
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
