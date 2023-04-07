#include "main.h"

int get_prime(int n, int iter);

/**
 * is_prime_number - Determines if a number is prime
 * @n: the digit to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}

/**
 * get_prime - calculates if a number is prime recursively
 * @n: the digit to evaluate
 * @iter: iterator
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int get_prime(int n, int iter)
{
	if (iter == 1)
		return (1);
	if (n % iter == 0 && iter > 0)
		return (0);
	return (get_prime(n, iter - 1));
}
