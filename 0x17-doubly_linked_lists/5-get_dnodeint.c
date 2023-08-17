#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the...
 * nth node of a dlistint_t linked list
 *
 * head: the index of the node, starting from 0
 * index: the index of the node to search
 *
 * Return: NULL if the node !!exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int siz = 0;
	dlistint_t *hold = head;

	if (!head)
		return (NULL);

	while (hold)
	{
		if (index == siz)
			return (hold);
		siz++;
		hold = hold->next;
	}
	return (NULL);
}
