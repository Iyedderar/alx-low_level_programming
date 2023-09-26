#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index.
 *
 * @head: A pointer to the head of the listint_t list.
 * @index: index to where the node should be.
 * Return: 1 if success -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *v;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			head = NULL;
			return (1);
		}
		else
		{
			tmp = *head;
			(*head) = (*head)->next;
			free(tmp);
			return (1);
		}
	}
	tmp = (*head);
	while (j < (index - 1))
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		j++;
	}
	v = tmp->next;
	tmp->next = v->next;
	free(v);
	return (1);
}
