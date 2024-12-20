#include "main.h"

/**
 * _strlen_recursion - Functions that returns
 * the length of a string using recursion
 *
 * @s: Strign to be measured.
 *
 * Return: Lenght of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);

	}
	return (length);
}
