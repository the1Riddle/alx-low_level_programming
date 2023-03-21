#include <stdio.h>
/**
 * main - The entry point
 * Description: prints alphabets excluding e and q
 * Return: usually 0
 */
int main(void)
{
	for (int lc = 97; lc <= 122; lc++)
	{
		if (lc != 101 && lc != 113)
		putchar(lc);
	}
	return (0);
}
