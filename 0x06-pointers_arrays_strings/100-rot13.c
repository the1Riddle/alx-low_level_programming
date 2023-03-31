#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: takes a null-terminated string as input and
 * returns a pointer to the same string
 *
 * return: results.
 */
char *rot13(char *str)
{
	char *result = str;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
        	if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
            	result[i] = str[i] + 13;
        	}
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
        		result[i] = str[i] - 13;
        	}
	}
	return result;
}
