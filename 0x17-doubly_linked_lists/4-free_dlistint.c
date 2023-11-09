#include "lists.h"

/**
 * free_dlistint - doubly linked free.
 * @head: pointer to pointer to the head.
 *
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
