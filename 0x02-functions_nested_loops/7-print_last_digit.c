#include "main.h"

/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int e)
{
	int n;

	n = e % 10;

	if (e < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
