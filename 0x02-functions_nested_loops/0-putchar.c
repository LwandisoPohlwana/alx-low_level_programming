#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: is always 0.
 */

int main(void)
{
	char print[] = "_putchar";
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar(print[x]);
	}
	putchar('\n');
	return(0);
}
