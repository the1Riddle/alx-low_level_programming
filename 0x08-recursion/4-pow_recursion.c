#include "main.h"
/**
 * _pow_recursion - The entry point
 * @x: the value
 * @y: is the exponent to value x
 *
 * Description: the function returns the value of x raised to the power of y
 * but If y is lower than 0, the function return -1
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
