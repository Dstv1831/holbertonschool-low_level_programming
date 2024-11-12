#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements in the array.
 * @size: size of each element.
 *
 * Return: Pointer with the allocated memory and the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < nmemb; index++)
		ptr[index] = '\0';

	return (ptr);

}
