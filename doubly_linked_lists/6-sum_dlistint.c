#include "lists.h"

/**
 * sum_dlistint - Sum all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head pointer of the dlistint_t list.
 *
 * Return: The value of the sum, otherwise, 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
