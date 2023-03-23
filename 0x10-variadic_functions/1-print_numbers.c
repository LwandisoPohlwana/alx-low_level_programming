#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed
 * @...: intergers passed
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ags;
	unsigned int v;

	va_start(ags, n);

	for (v = 0; v < n; v++)
	{
		printf("%d", va_arg(ags, int));

		if (v != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ags);
}
