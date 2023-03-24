#include <stdio.h>
/**
 * main - The entry point
 * Description: prints the sum of the even-valued terms, followed by a new line
 * Return: usually 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, nxt, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		nxt = j + k;
		j = k;
		k = nxt;
	}

	printf("%lu\n", sum);

	return (0);
}
