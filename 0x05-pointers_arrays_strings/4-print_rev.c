#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string to be reversed.
 * Return: string
*/

void print_rev(char *s)
{

	int length = 0;
	int x, n;

	for (x = 0; s[x] != '\0'; x++)
	{
		length++;
	}

	for (n = (length - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
