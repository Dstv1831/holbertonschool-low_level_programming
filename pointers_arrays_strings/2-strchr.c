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
	int i = 0;

	while (s[i] != '\0' + 1)
	{
		if (s[i] == c)
			return (s + i);
			/**
			 * *(s + i) = s[i]
			 * different than (s + i) which
			 * means pointer on (s + i positions)
			 */
		i++;
	}
	return ('\0');
}
