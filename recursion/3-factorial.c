#include "main.h"

/**
 * factorial - Functions that returns
 * the factorial of a given number
 *
 * @n: Integer to work on.
 *
 * Return: Result integer of the factorial of "n"
 */

int factorial(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
