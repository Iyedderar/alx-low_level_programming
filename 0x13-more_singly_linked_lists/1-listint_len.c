#include "lists.h"

/**
 * listint_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */
size_t listint_len(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}

	return (f);
}
