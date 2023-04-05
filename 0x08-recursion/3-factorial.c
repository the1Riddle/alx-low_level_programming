#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to be returned from
 *
 * Description: the function that returns the factorial of a given number
 * in a condition that if n is lower than 0
 * the function should return -1 to indicate an error
 * and the Factorial of 0 is 1
 *
 * Return: fuctorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
