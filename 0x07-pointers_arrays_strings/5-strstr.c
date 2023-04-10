#include "main.h"
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
			haystack++;
		}
	}
	return (NULL);
}
