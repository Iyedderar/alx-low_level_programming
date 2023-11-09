#include "lists.h"

/**
 * print_dlistint - doubly linked list print
 * @head: the head of the linked list
 * @index: index wanted.
 * Return: nbr of nodes in a linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
