#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head pointer of the dlistint_t list.
 * @idx: the position to insert the new node.
 * @n: The integer data fo the new node.
 *
 * Return: The address of the new node, otherwise,
 * NULL if the function fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0) /* Insert at the beginning */
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current && i < idx - 1; i++) /* Traverse to the node before idx */
		current = current->next;

	if (current == NULL) /* If idx is out of range */
	{
		free(new);
		return (NULL);
	}

	/* Insert new node between current and current->next */
	new->next = current->next;
	new->prev = current;
	if (current->next) /* Update the next node's prev pointer if it exists */
		current->next->prev = new;
	current->next = new;

	return (new);
}
