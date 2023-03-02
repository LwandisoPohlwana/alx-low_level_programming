#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @v: pinter to a char varable type.
 *
 * Return: v.
*/

char *string_toupper(char *v)
{
	int m;

	m = 0;
	while (v[m] != '\0')
	{
		if (v[m] >= 'a' && v[m] <= 'z')
			v[m] = v[m] - 32;
		m++;
	}
	return (v);
}
