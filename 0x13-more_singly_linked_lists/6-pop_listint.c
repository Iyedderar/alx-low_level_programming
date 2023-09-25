#include "lists.h"

/**
 * pop_listint - Pops the first node.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: element at the top of the list
 */
int pop_listint(listint_t **head)
{
	int len;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	len = (*head)->n;
	tmp = (*head);
	head = &(tmp->next);
	free(tmp);
	return (len);
}
