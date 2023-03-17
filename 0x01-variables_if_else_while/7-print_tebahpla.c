#include <stdio.h>
/**
 * main - The entry point
 * Description: rints the lowercase alphabet in reverse
 * Return: usually 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
