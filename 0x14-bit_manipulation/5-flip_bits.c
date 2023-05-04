#include "main.h"
/**
 * flip_bits - the entry point
 * @n: the first num
 * @m: the sec num
 *
 * Description: a function that returns the number of bits you would need to,
 * flip to get from one number to another
 * Return: number of bits you would need
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, count = 0;
	unsigned long int working, exlsv;

	exlsv = n ^ m;
	for (a = 63; a > 0; a--)
	{
		working = exlsv >> a;
		if (working & 1)
		{
			count++;
		}
	}
	return (count);
}
