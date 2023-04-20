#include "3-calc.h"
/**
 * get_op_func - the entry point
 * @s: The operator passed as argument.
 *
 * Description: This function returns a pointer to the function,
 * that corresponds to the operator given as a parameter
 *
 * Return: NULL if s does not match of +, -, *, /, %
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
