#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *
 * @str: String to be copied
 *
 * Return: Pointer to the new space of memory
 * that hold the copy of "str"
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	ptr = malloc(sizeof(char) * length + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	ptr[i + 1] = '\0';
	return (ptr);
}
