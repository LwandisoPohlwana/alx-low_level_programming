#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int v = 0;
	char *str, *sep = "";

	va_list argu;

	va_start(argu, format);

	if (format)
	{
		while (format[v])
		{
			switch (format[v])
			{
				case 'c':
					printf("%s%c", sep, va_arg(argu, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(argu, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(argu, double));
					break;
				case 's':
					str = va_arg(argu, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					v++;
					continue;
			}
			sep = ", ";
			v++;
		}
	}
	printf("\n");
	va_end(argu);
}
