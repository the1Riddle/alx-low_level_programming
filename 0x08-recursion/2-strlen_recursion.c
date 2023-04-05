#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to a string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int lngth = 0;

	if (*s)
	{
		lngth++;
		lngth += _strlen_recursion(s + 1);
	}

	return (lngth);
}
