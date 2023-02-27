#include "main.h"

/**
 * puts_half -  prints half of a string.If the length is odd
 *then y = (length + 1) / 2.
 *@str: string
 *Return: string
*/

void puts_half(char *str)
{
	int a;
	int y;
	int length = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		length++;
	}

	y = (length / 2);

	if (length % 2 == 1)
	{
		y = ((length + 1) / 2);
	}

	for (a = y; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
_putchar('\n');
}
