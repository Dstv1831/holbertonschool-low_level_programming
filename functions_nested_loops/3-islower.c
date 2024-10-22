#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: Key entered by user.
 *
 * Return: 1 if c is lowercase, 0 if c is UPPERCASE.
 */

int _islower(int c)
{
	if (c >= 'a' && c =< 'z')
		return (1);

	return (0);
}
