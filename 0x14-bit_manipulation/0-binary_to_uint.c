#include "main.h"
/**
 * binary_to_uint - the entry point
 * @b: string containing the binary number
 *
 * Description: a function that converts a binary number to an unsigned int
 * and returns 0 if there is one or more chars in the string b,
 * that is not 0 or 1 or when b is NULL
 * Return: the converted number or 0 for an error
 */
unsigned int binary_to_uint(const char *b)
{
	int str;
	unsigned int convert = 0;

	if (!b)
		return (0);

	for (str = 0; b[str]; str++)
	{
		if (b[str] < '0' || b[str] > '1')
		{
			return (0);
		}
		convert = 2 * convert;
		convert += (b[str] - '0');
	}

	return (convert);
}
