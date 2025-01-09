#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculate the number of
 * elements in a linked list_t list
 * @h: Pointer to the list_t list.
 *
 * Return: Number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("-> 0 elements\n");
		else
			elements++;

		h = h->next;
	}
	return (elements);
}
