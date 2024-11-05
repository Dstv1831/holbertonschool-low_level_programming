#include "main.h"

/**
 * _pow_recursion - Function that returns
 * the value of "x" raised to the power of "y"
 *
 * @x: Integer to be raised.
 * @y: Value of the power
 *
 * Return: Integer result of "x" power "y"
 */

int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
