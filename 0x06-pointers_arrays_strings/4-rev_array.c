#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array.
 * @n: is the number of elements of the array.
 * Return: reversed array.
*/

void reverse_array(int *a, int n)
{
	int v;
	int s;

	for (v = 0; v < n--; v++)
	{
		s = a[v];
		a[v] = a[n];
		a[n] = s;
	}
}
