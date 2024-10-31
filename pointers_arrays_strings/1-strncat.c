#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Function that appends two strings,
 * adding the amount of characters specified on the parameters
 *
 * @src: First string.
 * @dest: String destination to be overwritten.
 * @n: Number of characters to append
 *
 * Return: Pointer to the resulting string "dest"
 */

char *_strncat(char *dest, char *src, int n)
{
	int  i = 0, j = 0, length = 0;

	while (dest[i++])
		length++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[length + j] = src[j];

	return (dest);
}
