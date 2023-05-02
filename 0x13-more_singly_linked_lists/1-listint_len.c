#include "lists.h"
/**
 * listint_len - the entry point
 * @h: pointer to the listint_t
 *
 * Description: the function returns the number of elements,
 * in a linked listint_t list
 * Return: elems number
 */
size_t listint_len(const listint_t *h)
{
	size_t elems = 0;

	while (h)
	{
		elems++;
		h = h->next;
	}
	return (elems);
}
