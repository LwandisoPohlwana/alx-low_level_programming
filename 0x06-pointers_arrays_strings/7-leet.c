#include "main.h"

/**
 * leet - encode into 1337speak
 * @v: input value
 * Return: v value
 */

char *leet(char *v)
{
	int a, b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; a[v] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (v[a] == str1[b])
			{
				v[a] = str2[b];
			}
		}
	}
	return (v);
}
