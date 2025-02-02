#include "lists.h"

/**
 * free_dlistint - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
