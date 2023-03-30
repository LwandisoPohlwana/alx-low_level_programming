#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	unsigned int v;
	char *s;

	va_start(strg, n);
	for (v = 0; v < n; v++)
	{
		s = va_arg(strg, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);

		if (v != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}