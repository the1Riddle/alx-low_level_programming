#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1:string to append to
 * @s2: string to concatinate to
 * @n: number of bytes from s2
 *
 * Return: NULL if the function fails or the pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (n < len2)
	{
	s = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (!s)
	{
	return (NULL);
	}

	memcpy(s, s1, len1);
	if (n >= len2)
	{
	memcpy(s + len1, s2, len2 + 1);
	}
	else
	{
	memcpy(s + len1, s2, n);
	}
	return (s);
}
