#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes
 * a function given as a paremeter on each
 * elements of an array.
 *
 * @array: pointer to an array of
 * @size: Size of the array
 * @action: pointer to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
