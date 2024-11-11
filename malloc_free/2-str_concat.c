#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: String 1 to concatenate
 * @s2: String 2 to concatenate
 *
 * Return: Pointer to the new space of memory
 * that hold the copy of "str"
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0, counter = 0, i;

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[counter++] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[counter++] = s2[i];
	return (ptr);
}
