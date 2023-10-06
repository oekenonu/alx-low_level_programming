#include "hash_tables.h"

/**
 * hash_table_create - Create hash table
 * @size: size of the array
 *
 * Return: NULL if malloc fails else pointer to table
 */
 
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
 
	if (table == NULL)
		return (NULL);

 	table->size= size;
 	table->array = malloc(sizeof(hash_node_t)* table->size);

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i<size; i++)
		table->array[i] = NULL;

	return (table);
}

