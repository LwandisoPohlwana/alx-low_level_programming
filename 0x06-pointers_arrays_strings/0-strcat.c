#include "main.h"

/**
 * strcat - concatenates two strings.
 * @dest: output string
 * @src: the string to be appened
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = s = 0;

	while (src[s] != '\0')
	{
		s++;
	}
	while (dest[d] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0'
	return (dest);
}
