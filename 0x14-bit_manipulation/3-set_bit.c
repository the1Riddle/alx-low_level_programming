#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
	{
		return (-1);
	}
	*n |= (1UL << index);

	return (1);
}
