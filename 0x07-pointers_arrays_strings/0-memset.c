#include "main.h"
/**
 * _memset - the function that fills memory with a constant byte
 * @s: points to n
 * @b: char b is a constant byte
 * @n: the number of bytes in the memory
 *
 * Description: The  function fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		(s[a] = b);
		n--;
	}
	a++;

	return (s);
}
