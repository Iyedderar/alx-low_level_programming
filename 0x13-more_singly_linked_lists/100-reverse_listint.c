#include "lists.h"

/**
 * reverse_listint - function to reverse list.
 *
 * @head: A pointer to the head of the listint_t list.
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL, *tmp;


	if (*head == NULL)
		return (NULL);
	while ((*head) != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = v;
		v = *head;
		*head = tmp;
	}
	return (*head = v);
}
