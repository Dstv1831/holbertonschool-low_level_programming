#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Function that appends two strings,
 * overwriting the terminating null byte (\0) on the second string,
 * and then adds a new terminating null byte.
 *
 * @*char: First string.
 * @*dest: String Destination to be overwritten.
 *
 * Return: Pointer to the resulting string "dest"
 */

char *_strcat(char *dest, char *src)
{
	int  i = 0, j = 0, length = 0;
	
	while (dest[i++])
		length ++;


	while (src[j++])
		dest[length+j]= src[j];
				
	return (dest);
}
