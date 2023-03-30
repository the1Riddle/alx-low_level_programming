#include <stdio.h>
/**
 * main - The entry point
 *
 * Description: prints alphabets excluding e and q
 * Return: usually 0
 */
int main(void)
{
	int lc;

	lc = 96;
	while (lc <= 121)
	{
		lc++;
		if (lc != 101 && lc != 113)
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
