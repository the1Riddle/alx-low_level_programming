#include <stdio.h>
/**
 * main - The entry point
 * Description: prints the alphabet in lowercase except q and e
 * Return: usually 0
 */
int main(void)
{
	int lc = 97;

	while (lc <= 122)
	{
		if (lc == 101 || lc == 113)
		{
			continue;
			lc++;
		}
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
