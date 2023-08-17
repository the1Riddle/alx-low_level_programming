#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 *
 * //in this case 0 will not be returned
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
