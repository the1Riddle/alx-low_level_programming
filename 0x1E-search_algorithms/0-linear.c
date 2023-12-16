#include "search_algos.h"

/**
 * linear_search - the entry point
 * @array: array of integers
 * @size: size of array
 * @value: value that should be found
 *
 * Description: a function that searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * Return: index of value searched or -1 if it doesn't exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}