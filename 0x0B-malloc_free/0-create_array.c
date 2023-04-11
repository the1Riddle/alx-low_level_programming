#include "main.h"
/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char to assign
 *
 * Description: the function creates an array of chars
 * and initializes it with a specific char
 * Return: pointer to array or NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	ary = malloc(size * sizeof(char));
	if (ary == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ary[a] = c;
	}
	return (ary);
}
