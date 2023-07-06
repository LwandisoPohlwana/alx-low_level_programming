#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @v: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *v)
{
	int r;
	unsigned int valu = 0;

	if (!v)
		return (0);

	for (r = 0; v[r]; r++)
	{
		if (v[r] < '0' || v[r] > '1')
			return (0);
		valu = 2 * valu + (v[r] - '0');
	}

	return (valu);
}

