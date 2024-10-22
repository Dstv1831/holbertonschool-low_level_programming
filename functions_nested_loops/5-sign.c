#include "main.h"

/**
 * print_sign - function that checks if a number
 * is positive, negative or value 0.
 * @c: Number entered by user.
 *
 * Return: 1,0 or -1 and +,0,- depending the input value.
 */

int print_sign(int c)
{
	if (c < 0)
	{
		_putchar('+');
		return (-1);
	}
	else if (c > 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

