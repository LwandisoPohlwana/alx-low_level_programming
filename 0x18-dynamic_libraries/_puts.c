#include "main.h"

/**
 *  _puts - prints a string, followed by a new line, to stdout
 *@str: the string to output
 * Return: string.
*/

void _puts(char *str)
{
	int v;

	for (v = 0; str[v] != '\0'; v++)
	{
		_putchar(str[v]);
	}
	_putchar('\n');
}
