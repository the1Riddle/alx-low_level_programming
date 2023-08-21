#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: The memory area to be copied to
 * @src: The memory area to be copied from
 * @n: The number of bytes
 *
 * Description: The function copies n bytes
 * from memory area src to memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		(dest[a] = src[a]);
		a++;
	}
	return (dest);
}

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

/**
 * _strspn - The entry point
 * @s: consists entirely of bytes in accept
 * @accept: the initial segment of s
 *
 * Description: the function that gets the length of a prefix substring
 * Return: usually 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int z = 0;
	int accept_len = 0;

	while (accept[accept_len])
	{
		accept_len++;
	}
	while (*s)
	{
		z = 0;
		while (accept['r'])
		{
			if (*s == accept[z])
			{
				y++;
				break;
			}
			else if (z == accept_len - 1)
			{
				return (y);
			}
			z++;
		}
		s++;
	}
	return (y);
}

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

/**
* _strstr - the function locates a substring.
* @haystack: input
* @needle: input
*
* Return: usually 0
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
