#include "main.h"
/**
 * main - The entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: a program that prints the minimum number of coins
 * to make change for an amount of money.
 * the atoi used to parse the parameter passed to your program
 *
 * Return: 0 for  (Success) or 1 for an (Error)
 */
int main(int argc, char *argv[])
{
	int num, a, outcome;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	outcome = (0);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			outcome++;
			num -= coins[a];
		}
	}
	printf("%d\n", outcome);

	return (0);
}
