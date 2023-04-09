#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: void is used to ignores argv because its un used
 * Return: usually 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
