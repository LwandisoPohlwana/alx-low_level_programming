#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 *
 * Return: nothing.
 */

void print_triangle(int size)
{
	int l, p;

	for (l = 0; l < size; l++)
	{
		for (p = 1; p < (size - l); p++)
			_putchar(' ');
		for (p--; p < size; p++)
			_putchar(35);
		if (l < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

