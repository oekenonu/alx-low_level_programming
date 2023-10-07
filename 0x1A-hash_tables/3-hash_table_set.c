#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @table: Pointer to the hash table.
 * @key: Key to add
 * @value: Value associated with key.
 *
 * Return: Upon failure - 0.
 *         Else - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *value_copy;
	unsigned long i, index;

	if (! table || ! value || ! key || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, table->size);
	for (i = index; table->array[i]; i++)
	{
		if (strcmp(table->array[i]->key, key) == 0)
		{
			free(table->array[i]->value);
			table->array[i]->value = value_copy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = value_copy;
	node->next = table->array[index];
	table->array[index] = node;

	return (1);
}
