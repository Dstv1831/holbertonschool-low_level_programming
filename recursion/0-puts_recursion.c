#include "main.h"

/**
 * _puts_recursion - Functions that prints a string
 * using recursion
 *
 * @s: Strign to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
