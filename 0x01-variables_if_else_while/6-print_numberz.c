#include <stdio.h>
/**
 * main - The entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: usually 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
