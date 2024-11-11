#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c: Character for the array
 *
 * Return: Pointer to the Array if success
 * "NULL" if it fails or size = "0"
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *list;

	list = malloc(size * sizeof(char));

	if (list == NULL || size == 0)
		return ("NULL");

	while (i < size)
	{
		list[i] = c;
		i++;
	}
	return (list);
}
