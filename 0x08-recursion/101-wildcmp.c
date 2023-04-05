#include "main.h"
/**
 * wildcmp - The entry point
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: a function that compares two strings and returns 1 ...
 * if the strings can be considered identical, otherwise return 0.
 * s2 can contain the special character *
 * which can replace any string (including an empty string)
 *
 * Return: usually 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
