#include "main.h"
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
