#include "main.h"

/**
 * rev_string -  prints a string in reverse.
 * @s: srting to be reversed
 * Return: string
*/

void rev_string(char *s)
{
	char rev = s[0];
	int length = 0;
	int v;

	while (s[length] != '\0')
		length++;

	for (v = 0; v < length; v++)
	{
		length--;
		rev = s[v];
		s[v] = s[length];
		s[length] = rev;
	}
}
