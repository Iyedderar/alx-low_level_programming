#include "lists.h"

/**
 * print_list - function to print singly linked list
 * @h: head of linked list
 *
 * Return: the nbr of elements in a linked list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
