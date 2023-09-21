#include "lists.h"


/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *v;
	list_t *tmp;

	tmp = *head;
	v = malloc(sizeof(list_t));
	if (v == NULL)
		return (NULL);
	for (len = 0; str[len];)
		len++;
	v->len = len;
	v->str = strdup(str);
	v->next = NULL;
	if (v->str == NULL)
	{
		free(v);
		return (NULL);
	}
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
