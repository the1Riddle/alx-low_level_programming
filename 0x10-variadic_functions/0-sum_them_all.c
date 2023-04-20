#include "variadic_functions.h"
/**
 * sum_them_all - unction that returns the sum of all its parameters.
 * @n: number of parameters passed
 * @...: number of paramters to calculate their sum
 *
 * Return: 0 If n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
