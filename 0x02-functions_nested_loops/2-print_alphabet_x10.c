#include "main.h"
/**
 * print_alphabet_x10 - The entry point
 * Description:  prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int n;
	int al;

	for (al = 1; n <= 10; n++)
	{
		for (al = 97; al <= 122; al++)
		{
			_putchar(al);
		}
	_putchar('\n');
	}
}
