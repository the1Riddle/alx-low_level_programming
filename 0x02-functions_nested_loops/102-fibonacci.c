#include <stdio.h>
/**
 * main - The entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: usually 0
 */
int main(void)
{
	int cnt;
	unsigned long nm1 = 0, nm2 = 1, sum;

	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = nm1 + nm2;
		printf("%lu", sum);

		nm1 = nm2;
		nm2 = sum;

		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
