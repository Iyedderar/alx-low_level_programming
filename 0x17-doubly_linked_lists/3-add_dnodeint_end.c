#include "lists.h"

/**
 * add_dnodeint_end - doubly linked add node.
 * @head: pointer to pointer to the head.
 * @n: parameter to be inserted.
 *
 * Return: the new node or Null.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *temp = *head;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    
    if(*head == NULL)
    {
        new->n = n;
        new->prev = new->next = NULL;
        return (new);
    }

    while (temp->next != NULL)
        temp = temp->next;
    new->n = n;
    temp->next = new;
    new->prev = temp;
    new->next = NULL;

    return (new);
}