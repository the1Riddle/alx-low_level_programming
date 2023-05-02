#include "lists.h"
/**
 * print_listint - the entry point
 * @h: type listint_t to print
 *
 * Description: the functio  prints all the elements of a listint_t list
 * Return: the elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
