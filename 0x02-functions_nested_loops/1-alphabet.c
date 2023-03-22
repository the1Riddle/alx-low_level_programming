#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - The entry point
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: usually 0
 */
void print_alphabet(void)
{
	int al;

	for (al = 97; al <= 122; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
