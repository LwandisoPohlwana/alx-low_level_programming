#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: if n == 0, return 0 otherwise the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int v, sum = 0;

	va_start(args, n);

	for (v = 0; v < n; v++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
