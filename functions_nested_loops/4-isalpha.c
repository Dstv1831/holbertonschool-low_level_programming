#include "main.h"

/**
 * _isalpha - function that checks for alphabetic characters
 * regardless if they are lowercase or UPPERCASE
 * @c: Key entered by user.
 *
 * Return: 1 if c is an alphabetic character, 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
