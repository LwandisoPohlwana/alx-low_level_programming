#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 * Return: nothing.
*/

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (y = 0; y < n; y++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
