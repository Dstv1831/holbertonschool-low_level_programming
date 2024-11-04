#include "main.h"

/**
 * _strspn - function that gives the number
 * of characters used from the 2 string
 * on the first segment of the 1 string.
 *
 * @s: String 1.
 * @accept: String 2
 *
 * Return: Lenght of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, length = 0;

	while (s[i] != ' ')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				length++;
		i++;
	}
	return (length);
}
