#include "hash_tables.h"

/**
 * hash_table_create - This function will create a hash table
 * @size: size for the table/array to be.
 *
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;
	unsigned long int idex = 0;

	if (size <= 0)
		return (NULL);

	tbl = malloc(sizeof(hash_table_t));
	if (!tbl)
		return (NULL);
	tbl->size = size;
	tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (tbl->array == NULL)
	{
		free(tbl);
		return (NULL);
	}

	while (idex < size)
		tbl->array[idex++] = NULL;
	return (tbl);
}
