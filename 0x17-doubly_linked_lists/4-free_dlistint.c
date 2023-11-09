#include "lists.h"

/**
 * free_dlistint - doubly linked free.
 * @head: pointer to pointer to the head.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		head = head->next;
		temp = head;
		free(temp);
	}
}