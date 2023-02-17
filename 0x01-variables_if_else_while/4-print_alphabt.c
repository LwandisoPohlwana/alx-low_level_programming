#include <stdio.h>
/**
 * main - print alphabets in lowercase without e and q.
 *
 * Return: must always be 0.
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
