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

	if (c < 0)
		c = c * -1;
	ld = c % 10;

	return (ld);

}
