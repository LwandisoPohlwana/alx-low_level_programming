#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last number of the generated number and ckecks
 * 	  if the number is grater than 5, less than 6 or 0
 *
 * retun: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n * 4) > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", n, n * 4);
	}
	else if ((n * 4) < 6 && (n * 4) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n * 4);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n * 4);
	}
	return (0);
}
