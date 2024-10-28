#include "main.h"

/**
 * _isupper - function that checks if the
 * input c is an uppercase character.
 *
 * @c: Input letter by user
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	else
		return (0);
}
