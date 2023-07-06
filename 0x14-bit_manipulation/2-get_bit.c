#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number that will be searched
 * @index: index of the bit
 *
 * Return: -1 on failure or,
 * the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	while (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;

	return (value);
}
