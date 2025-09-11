#include "main.h"
/**
 * _strdup - The entry point
 * @str: string to be duplicated.
 *
 * Description: Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter
 *
 * Return: Pointer to the duplicated string, NULL if str is NULL or
 * if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0, a = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[len] != '\0')
	{
	len++;
	}
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
	{
	return (NULL);
	}
	while (a <= len)
	{
		dup_str[a] = str[a];
		a++;
	}
	return (dup_str);
}
