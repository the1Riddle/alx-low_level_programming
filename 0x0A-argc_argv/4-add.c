#include "main.h"
/**
 * main - a program that adds positive numbers
 * @argc: holds arguments
 * @argv: array of strings containing arguments
 *
 * Return: 0 for (success) or 1 for an (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0, a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
