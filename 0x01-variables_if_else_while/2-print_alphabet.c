#include <stdio.h>
/**
 * main - The entry point
 * Description: prints the alphabet in lowercase
 * Return: usually 0
 */
int main(void)
{
	int lc = 97;

	while (lc <= 122)
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
