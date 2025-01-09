#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the list_t list.
 *
 * Return: Number of nodes in h.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{

		printf("[%d]", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
