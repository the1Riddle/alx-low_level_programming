#include "lists.h"
/**
 * get_nodeint_at_index - the entry point
 * @head: usually the firt node in the linked list
 * @index: the index of the node, starting at 0
 *
 * Description: a function that returns the nth node of a listint_t linked list
 * Return: NULL if the node does not exist or,
 * pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && index > a)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
