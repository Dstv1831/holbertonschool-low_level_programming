#include "main.h"

/**
 * _print_rev_recursion - Functions that prints a string
 * in reverse using recursion
 *
 * @s: Strign to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
