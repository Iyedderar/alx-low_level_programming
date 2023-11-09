#include "lists.h"
/**
 * dlistint_len - doubly linked list print
 * @h: the head of the linked list
 *
 * Return: nbr of nodes in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
