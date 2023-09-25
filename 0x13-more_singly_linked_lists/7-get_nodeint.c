#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at index.
 *
 * @head: A pointer to the head of the listint_t list.
 * @index: index of desired node.
 * Return: element at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *v = NULL, *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < (index - 1) && (tmp != NULL)))
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (v);
	else
		return (v = tmp->next);
}
