#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: input
 * Return: string
*/

void puts2(char *str)
{
	int v;

	for (v = 0; str[v] != '\0'; v++)
	{
		if (v % 2 == 0)
			_putchar(str[v]);
		else
			continue;
	}
	_putchar('\n');
}
