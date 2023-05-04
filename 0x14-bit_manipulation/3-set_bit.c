#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer of the number to change
 * @index: index of the bit to be set
 *
 * Retuen: 1 for success or -1 on failure
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
