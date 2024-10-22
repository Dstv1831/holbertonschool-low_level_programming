#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: Key entered by user.
 *
 * Return: 1 if c is lowercase, 0 if c is UPPERCASE.
 */

int _islower(int c)
{
	int answer;

	answer = 0;

	if (c > 'a' && c < 'z')
		answer = 1;

	return (answer);
}
