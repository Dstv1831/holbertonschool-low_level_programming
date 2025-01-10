#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position.
 * @head: Pointer to the head pointer of the dlistint_t list.
 * @index: the position to insert the new node.
 *
 * Return: The address of the new node, otherwise,
 * -1 if the function fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	/* Traverse to the node before idx */
	for (i = 0; tmp && i < index - 1; i++)
		tmp = tmp->next;

	if (!tmp) /* If idx is out of range */
		return (-1);

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
