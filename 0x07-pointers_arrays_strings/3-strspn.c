#include "main.h"
/**
* _strspn - The entry point
* @s: consists entirely of bytes in accept
* @accept: the initial segment of s
*
* Description: the function that gets the length of a prefix substring
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, value, checks;

	value = 0, a = 0, b = 0;
	while (s[a] != '\0')
	{
		a++;
		checks = 0;
		while (accept[b] != '\0')
		{
			b++;
			while (accept[b] == s[a])
			{
				value++;
				checks = 1;
			}
		}
	}
	return (0);
}
