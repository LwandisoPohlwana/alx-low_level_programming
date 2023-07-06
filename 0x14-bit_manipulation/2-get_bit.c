#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @b: number to search
 * @idx: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int b, unsigned int idx)
{
	int valu;

	if (idx > 63)
		return (-1);

	valu = (b >> idx) & 1;

	return (valu);
}
