#include "lists.h"



/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *v;

	v = malloc(sizeof(list_t));
	if (v == NULL)
		return (NULL);
	for (len = 0; str[len];)
		len++;
	v->len = len;
	v->str = strdup(str);
	if (v->str == NULL)
	{
		free(v);
		return (NULL);
	}
	v->next = *head;

	*head = v;

	return (v);
}
