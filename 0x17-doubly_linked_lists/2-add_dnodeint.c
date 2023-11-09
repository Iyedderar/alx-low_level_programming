#include "lists.h"

/**
 * add_dnodeint - doubly linked add node.
 * @head: pointer to pointer to the head.
 * @n: parameter to be inserted.
 *
 * Return: the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *v;

	v = malloc(sizeof(dlistint_t));
	if (v == NULL)
		return (NULL);

	v->n = n;
	v->next = *head;
	v->prev = NULL;
	if (*head != NULL)
		(*head)->prev = v;
	*head = v;
	return (v);
}
