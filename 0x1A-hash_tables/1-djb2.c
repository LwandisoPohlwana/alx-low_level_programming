#include "hash_tables.h"

/**
 * hash_djb2 - convert a str into a hash value.
 * @str: string to convert
 *
 * Return: Hash (unsigned long int)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;

	return (hash);
}

