#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int x;
	char alphabet;

	for (x = 0; x < 10; x++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
