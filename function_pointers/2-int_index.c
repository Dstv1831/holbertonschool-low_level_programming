#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches
 * for an integer.
 *
 * @array: pointer to an array
 * @size: Size of the array
 * @cmp: pointer to the function
 *
 * Return: The index of the first element
 * for which the "cmp" function does not return 0
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned long int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
