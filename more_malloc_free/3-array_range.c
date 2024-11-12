#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates and array of integers.
 *
 * @min: number of elements in the array.
 * @max: size of each element.
 *
 * Return: Pointer with the newly created array..
 */

void *array_range(int min, int max)
{
	int index, size = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index <= size; index++)
		ptr[index] = min++;

	return (ptr);
}
