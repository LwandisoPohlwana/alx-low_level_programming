#include "main.h"
#include <stdlib.h>

/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assig
* Description: creat array of size size and assign char c
* Return: pointer to array, NULL if fail
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int v;

	str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
	{
		return (NULL);
	}

	for (v = 0; v < size; v++)
	{
		str[v] = c;
	}
	return (str);
}
