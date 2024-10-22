#include "main.h"

/**
 * _abs - function that checks the absolute
 * value of a number.
 * @c: Number entered by user.
 *
 * Return: Absoulte value of the number entered.
 */

int _abs(int c)
{
	int abs;

	if (c < 0)
		abs = c * -1;
	else if (c > 0)
		abs = c * 1;
	else
		abs = 0;

	return (abs);
}
