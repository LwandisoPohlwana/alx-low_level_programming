#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 *
 * Return is nothing.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
