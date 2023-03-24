#include "main.h"
#include <stdio.h>
/**
 * main - The entry point
 * Description: prints the numbers from 1 to 100
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: usually 0
 */
int main(void)
{
	int Fizz;

	for (Fizz = 1; Fizz <= 100; Fizz++)
	{
		if (Fizz % 3 == 0 && Fizz % 5 != 0)
		{
			printf(" Fizz");
		} else if (Fizz % 5 == 0 && Fizz % 3 != 0)
		{
			printf(" Buzz");
		} else if (Fizz % 3 == 0 && Fizz % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (Fizz == 1)
		{
			printf("%d", Fizz);
		} else
		{
			printf(" %d", Fizz);
		}
	}
	printf("\n");

	return (0);
}
