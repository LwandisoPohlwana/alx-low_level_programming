#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @num1: first number
 * @num2: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int c, count = 0;
	unsigned long int curnt;
	unsigned long int exclusive = num1 ^ num2;

	for (c = 63; c >= 0; c--)
	{
		curnt = exclusive >> c;
		if (curnt & 1)
			count++;
	}

	return (count);
}
