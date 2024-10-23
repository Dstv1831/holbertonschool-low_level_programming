#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @c: Number entered by user.
 *
 * Return: Value of the last digit in a number
 */

int print_last_digit(int c)
{
	int ld;

	ld = c % 10;

	if (ld < 0)
		ld = ld * -1;

	_putchar('0' + ld);

	return (ld);
}
