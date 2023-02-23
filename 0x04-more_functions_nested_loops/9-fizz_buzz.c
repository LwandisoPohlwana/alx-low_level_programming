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

	for (v = 1; v <= 100; v++)
	{
		if (v % 3 == 0 && v % 5 == 0)
		{
			printf("FuzzBuzz ");
		}
		else if (v % 3 == 0)
		{
			printf("Fuzz ");
		}
		else if (v % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", v);
		}
		if (v =! 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
