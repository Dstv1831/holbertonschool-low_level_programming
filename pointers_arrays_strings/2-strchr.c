#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: String to be scanned.
 * @c: Character to be locate
 *
 * Return: Pointer to the first ocurrence of "c" in "s"
 * or "null" if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
