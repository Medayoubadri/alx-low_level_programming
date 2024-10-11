#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 *
 * Assigning seats at a concert based on your name using a bit of magic
 * (and math), we figure out exactly where you belong.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
