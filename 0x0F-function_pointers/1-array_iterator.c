#include "function_pointers.h"
/**
 * array_iterator - the entry point
 * @array: array
 * @size: is the size of the array
 * @action: a pointer to the function that will be used
 *
 * Description: a function that executes a function
 * given as a parameter on each element of an array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
