#include "lists.h"

/**
 * dlistint_len - calculate the number of
 * elements in a linked dlist_t list
 * @h: Pointer to the dlistint_t list.
 *
 * Return: Number of elements in h.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
