#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Function that appends two strings,
 * overwriting the terminating null byte (\0) on the second string,
 * and then adds a new terminating null byte.
 *
 * @src: First string.
 * @dest: String destination to be overwritten.
 *
 * Return: Pointer to the resulting string "dest"
 */

char *_strcat(char *dest, char *src)
{
	int  i = 0, j = 0, length = 0;

	while (dest[i++])
		length++;

	while (src[j] != '\0')
	{
		dest[length + j] = src[j];
		j++;
	}
	return (dest);
}
