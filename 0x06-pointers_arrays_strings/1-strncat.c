#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: the output.
 * @src: the input.
 * @n: the n number of bytes for src.
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, v;

	i = v = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (v < n && src[v] != '\0')
	{
		dest[i] = src[v];
		i++;
		v++;
	}
	if (v < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
