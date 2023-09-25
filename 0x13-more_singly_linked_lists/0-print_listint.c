#include "lists.h"

/**
 * print_listint - function to print singly linked list
 * @h: head of linked list
 *
 * Return: the nbr of elements in a linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
