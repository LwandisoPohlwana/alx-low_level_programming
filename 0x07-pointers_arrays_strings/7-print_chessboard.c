#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: the arry
 * Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int v, p;

	for (v = 0; v < 8; v++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[v][p]);
			_putchar('\n');
		}
	}
}
