#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the listint_t list.
 * @n: The int to be added to the listint_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *v;
	listint_t *tmp;

	tmp = *head;
	v = malloc(sizeof(listint_t));
	if (v == NULL)
		return (NULL);
	v->n = n;
	if (*head == NULL)
		*head = v;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = v;
	}
	return (*head);
}
