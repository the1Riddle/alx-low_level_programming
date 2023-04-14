#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored or if min > max && malloc fails, NULL
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, a;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	ptr = malloc(sizeof(ptr) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}
