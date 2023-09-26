#include "lists.h"

/**
 * sum_listint - sum the lelements in the list.
 *
 * @head: A pointer to the head of the listint_t list..
 * Return: the sul
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
