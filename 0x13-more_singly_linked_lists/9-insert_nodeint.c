#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index.
 *
 * @head: A pointer to the head of the listint_t list.
 * @idx: index to where the node should be.
 * @n: Integer to be inserted.
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *v, *tmp;

	v = malloc(sizeof(listint_t));
	if (v == NULL)
		return (NULL);
	v->n = n;

	if (idx == 0)
	{
		v->next = (*head);
		(*head) = v;
		return (v);
	}
	tmp = *head;
	while (j < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		j++;
	}
	v->next = tmp->next;
	tmp->next = v;
	return (v);

}
