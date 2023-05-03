#include "lists.h"
/**
 * pop_listint - the entry point
 * @head: pointer to the first element in the linked list
 *
 * Description: the func deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * Return: 0 when the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;

	free(*head);

	(*head) = temp;

	return (num);
}
