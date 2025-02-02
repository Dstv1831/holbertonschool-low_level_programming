#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list.
 * @head: Pointer to the head pointer of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: NULL If the function fails, Otherwise,
 * the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

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
