#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: The string to be printed between strings
 * @n: number of strings passed to the function
 * @...: number of strings to be printed
 *
 * Description: nothing is printed if separator is NULL,
 * But if one of the string is NULL then (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int a;

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
