#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @dest: copied to
 * @src: copied from
 * @n: number of bytes.
 * Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int i = n;

	for (; v < i; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}
