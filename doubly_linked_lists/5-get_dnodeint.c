#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns
 * the nth node of a dlistint_t linked list.
 * of a dlistint_t list.
 * @head: Pointer to the head pointer of the dlistint_t list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);

}
