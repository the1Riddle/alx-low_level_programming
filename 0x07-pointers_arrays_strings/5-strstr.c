#include "main.h"
/**
 * _strstr - The function that locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			l++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
