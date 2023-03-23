#include "main.h"
/**
 * print_numbers - The entry point
 * Description: prints the numbers, from 0 to 9
 * return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
