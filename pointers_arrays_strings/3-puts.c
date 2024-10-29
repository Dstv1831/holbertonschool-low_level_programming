#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 * @str: String parameter.
 */

void _puts(char *str)
{
	/**
	 * this condition (*str) is iqual to (*str = '\0')
	 * where '\0' is the last value of every string
	 * also '\0' in ASCII is of value 0
	 */
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
