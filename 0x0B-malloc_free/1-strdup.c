#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location.
 * @str: input.
 * Return: 0
*/

char *_strdup(char *str)
{
	char *v;
	int i, s = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	v = malloc(sizeof(char) * (i + 1));

	if (v == NULL)
	{
		return (NULL);
	}

	for (s = 0; str[s]; s++)
	{
		v[s] = str[s];
	}
	return (v);
}
