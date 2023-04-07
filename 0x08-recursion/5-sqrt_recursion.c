#include "main.h"

int calcsquarert(int n, int iter);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be calculated
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calcsquarert(n, 0));
}

/**
 * calcsquarert - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @iter: iterator
 *
 * Return: -1 if n does not have a natural square root
 */
int calcsquarert(int n, int iter)
{
	if (iter * iter > n)
		return (-1);
	if (iter * iter == n)
		return (iter);
	return (calcsquarert(n, iter + 1));
}
