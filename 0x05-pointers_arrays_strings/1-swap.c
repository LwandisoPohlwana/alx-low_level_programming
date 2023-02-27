#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input1
 * @b: input2
 * Return: a and b
*/

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
