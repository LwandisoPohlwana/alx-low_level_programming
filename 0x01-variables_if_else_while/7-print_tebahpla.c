#include <stdio.h>

/**
 * main - print out all lowercase alphabets in reverce,
 * 	only use putchar
 *
 * Return: must be 0.
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
