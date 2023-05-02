#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer to listint_t
 *
 *
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head->next = head;
	}
}
