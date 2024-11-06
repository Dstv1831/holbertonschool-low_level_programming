#include "main.h"

/**
 * division_factor - The method used is to try and divide
 * through every number below "n/2"
 *
 * @n: number to check
 * @div: factor to check and increase by "1"
 *
 * Return: return 0, it mean "n" is not a be a prime number
 */

int division_factor(int n, int div)
{
	if (n % div == 0)
		return (0);
	else if (div == n / 2)
		return (1);
	return (division_factor(n, div + 1));
}

/**
 * is_prime_number - Function that identify
 * integers as prime numbers or not
 *
 * @n: Integer to be classified.
 *
 * Return: '1' if "n" is a prime number
 * otherwise retun "0"
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	return (division_factor(n, 2));
}

