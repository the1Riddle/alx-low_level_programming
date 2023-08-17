#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements
 * in a linked dlistint_t list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nam;

	if (!h)
		return (nam);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nam++;
		h = h->next;
	}
	return (nam);
}
