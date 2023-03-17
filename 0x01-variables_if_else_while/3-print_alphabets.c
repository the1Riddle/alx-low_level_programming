#include <stdio.h>
/**
 * main - The entry point
 * Description: outputs lowercase and uppercase
 i* Return: usually 0
 */
int main(void)
{
	int lc = 97;
	int uc = 65;

	while (lc <= 122)
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 90)
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
