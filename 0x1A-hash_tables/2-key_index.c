#include "hash_tables.h"

/**
 * key_index - Get the index of key/value for hash table.
 * @key: The key to get index
 * @size: The size of the the hash table array.
 *
 * Return: Index of the key.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
