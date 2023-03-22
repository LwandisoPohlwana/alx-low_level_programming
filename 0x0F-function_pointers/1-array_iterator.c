#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: the array
 * @size: the size of the array
 * @action: the function pointer.
 * Return: nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (v = 0; v < size; v++)
	{
		action(array[v]);
	}
}
