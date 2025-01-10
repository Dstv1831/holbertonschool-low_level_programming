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
	dlistint_t *tmp = *head;
	
	if (*head == NULL)
		return (-1);
	
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
