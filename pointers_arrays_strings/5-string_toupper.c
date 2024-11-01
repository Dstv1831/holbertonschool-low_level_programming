#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @str: String to be uppercased.
 *
 * Return: Uppercased string
 */

void *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

	return (str);

}
