#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr++)
			size1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			size2++;
	else
		s2 = "";

	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (ret);
}
