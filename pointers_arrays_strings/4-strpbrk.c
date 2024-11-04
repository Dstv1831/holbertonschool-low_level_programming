#include "main.h"

/**
 * _strpbrk - function that locates
 * the first occurrence in the string "1"
 * of any of the bytes in the string "2"
 *
 * @s: String 1.
 * @accept: String 2
 *
 * Return: pointer to the byte in s
 * that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
		i++;
	}
	return ('\0');
}
