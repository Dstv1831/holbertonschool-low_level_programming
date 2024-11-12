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
	int index, counter = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (index = min; index <= max; index++)
	{
		ptr[counter] = index;
		counter++;
	}

	ptr[counter] = '\0';

	return (ptr);
}
