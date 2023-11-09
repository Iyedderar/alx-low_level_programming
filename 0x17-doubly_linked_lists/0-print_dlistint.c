#include "lists.h"
/**
 * print_dlistint - doubly linked list print
 * @h: the head of the linked list
 *
 * Return: nbr of nodes in a linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	while (h != NULL)
	{
		printf("%d", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
