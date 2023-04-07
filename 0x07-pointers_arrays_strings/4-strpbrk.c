#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 *
 * Description: The _strpbrk() function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0, b = 0;
	while (s[a] != '\0')
	{
		a++;
		while (accept[b] != '\0')
		{
			b++;
			while (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (NULL);
}
