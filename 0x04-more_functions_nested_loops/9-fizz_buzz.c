#include "main.h"
#include <stdio.h>

/**
 * main - prints a fuzzbuzz program
 *
 * Return: is 0.
*/

int main(void)
{
	int v;
	
	v = 1;
	printf("%d", v);
		
	for (v = 2; v <= 100; v++)
	{
		if (v % 3 == 0 && v % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (v % 3 == 0)
		{
			printf(" Fizz ");
		}
		else if (v % 5 == 0)
		{
			printf(" Buzz ");
		}
		else
		{
			printf("%d ", v);
		}
	}
	printf("\n");
	return (0);
}
