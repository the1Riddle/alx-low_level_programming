#include "lists.h"
/**
 * insert_dnodeint_at_index - the entry point
 * @h: the head
 * @idx: the index of the new node
 * @n: the new node value
 *
 * Return: the address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *adres = NULL;
	dlistint_t *head = *h;
	unsigned int i = 1;

	if (idx == 0)
		adres = add_dnodeint(h, n);
	else
	{
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (i == idx)
			{
				if (!head->next)
					adres = add_dnodeint_end(h, n);
				else
				{
					adres = malloc(sizeof(dlistint_t));
					if (adres)
					{
						adres->n = n;
						adres->next = head->next;
						adres->prev = head;
						head->next->prev = adres;
						head->next = adres;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (adres);
}
