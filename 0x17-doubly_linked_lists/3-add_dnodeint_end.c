#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end of the list
 * @head: the head
 * @n: the value of the element
 *
 * Return: the address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;
	if (h)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;

	new->prev = h;
	return (new);
}
