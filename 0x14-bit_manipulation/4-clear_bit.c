#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index of the bit
 * @n: pointer to the number to change
 *
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n &= (~(1UL << index));

	return (1);
}
