#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: The memory area to be copied to
 * @src: The memory area to be copied from
 * @n: The number of bytes
 *
 * Description: The function copies n bytes
 * from memory area src to memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (0);
}
