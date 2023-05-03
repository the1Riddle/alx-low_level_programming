#include "lists.h"
/**
 * sum_listint - the entry point
 * @head: the first node
 *
 * Description: the func returns the sum of all the data (n),
 * of a listint_t linked list
 * Return: 0 when the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *sum = head;
	int a = 0;

	while (sum)
	{
		a += sum->n;
		sum = sum->next;
		a++;
	}
	return (a);
}
