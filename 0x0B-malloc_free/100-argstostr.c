#include "main.h"
/**
 * argstostr- the entry point
 * @ac: an int input
 * @av: pointer to a pointer array
 *
 * Description: a function that concatenates all the arguments of your program
 * Return: Pointer to string or NULL for failure
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			d++;
		}
	}
	d += ac;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}

