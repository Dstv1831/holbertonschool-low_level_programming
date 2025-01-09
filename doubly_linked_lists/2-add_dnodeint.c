#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a dlistint_t list.
 * @head: Pointer to the head pointer of the dlistint_t list.
 * @n: The int value be added to the dlistint_t list.
 *
 * Return: "NULL" If the function fails, Otherwise,
 * the address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
