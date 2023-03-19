#include <stdio.h>
/**
 * main - The entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: usually 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
		if (n == 58)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
