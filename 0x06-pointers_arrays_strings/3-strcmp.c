#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: input
 * @s2: input
 * Return: 0 if the strings are equal and other number if not.
*/

int _strcmp(char *s1, char *s2)
{
	int v = 0;

	while (s1[v] != '\0' && s2[v] != '\0')
	{
		if (s1[v] != s2[v])
		{
			return (s1[v] - s2[v]);
		}
		v++;
	}
	return (0);
}
