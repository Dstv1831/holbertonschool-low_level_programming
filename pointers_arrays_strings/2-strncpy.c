#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Write a function that copies a string.
 *
 * @src: First string.
 * @dest: Copy of the string.
 * @n: Number of characters to copy
 *
 * Return: Pointer to the resulting string "dest"
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  j = 0, src_length;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	src_length = j;

	for (j = src_length; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
