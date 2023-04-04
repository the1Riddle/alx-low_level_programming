#include "main.h"
/**
 * _strchr - The function that locates a character in a string.
 * @s: is a string
 * @c: the character to be allocated by a pointer on its
 * first occurrence
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] >= '\0')
	{
		a++;
		while (s[a] == c)
		{
			return (s + a);
		}
	}
	return (NULL);
}
