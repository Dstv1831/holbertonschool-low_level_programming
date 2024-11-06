#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function that returns
 * the natural square root of a number
 *
 * @n: Integer to be operated.
 *
 * Return: Square root of "n"
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	/**
	 * Because both "n" and "odd" changes throught the recursion
	 * they both should be parameters of the new function, also
	 * including the condition of return "-1" is is not perfect
	 * square, adds a parameter in the function.
	 */

	return (substraction(n, 1, 0));
}

/**
 * substraction- Function that returns
 * the steps to reach the square root
 * and define if its a perfect square or not
 *
 * @n: Integer to be operated.
 * @odd: odd number to be substracted (method)
 * @counter: Step counter to fin root
 *
 * Return: Square root define by the total of steps
 * by the counter
 */

int substraction(int n, int odd, int counter)
{
	int steps = 0;

	if (n == 0)
		return (counter);
	else if (n < odd)
		return (-1);
	steps = substraction(n - odd, odd + 2, counter + 1);
	return (steps);
}





