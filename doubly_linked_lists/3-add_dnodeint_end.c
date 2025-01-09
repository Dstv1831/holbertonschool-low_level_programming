#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * of a dlistint_t list.
 * @head: Pointer to the head pointer of the dlistint_t list.
 * @n: The string to be added to the dlistint_t list.
 *
 * Return: NULL If the function fails, Otherwise,
 * the address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev  = last;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
