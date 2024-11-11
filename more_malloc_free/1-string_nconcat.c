#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: First String.
 * @s2: Second String.
 * @n: Number of bytes from "s2" to concatenate.
 *
 * Return: Pointer with the allocated memory and the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int counter = 0;
	unsigned int len_s1 = 0, len_s2 = 0, index;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	if (n < len_s2)
		len_s2 = n;

	new_string = malloc(len_s1 + len_s2 + 1);

	if (new_string == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
	{
		new_string[counter] = s1[index];
		counter++;
	}

	for (index = 0; index < len_s2; index++)
	{
		new_string[counter] = s2[index];
		counter++;
	}

	new_string[counter] = '\0';

	return (new_string);
}
