#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key.
 * @key: pointer to get index
 * @size: size of the array of the hash table
 *
 * Return: index key value in the table, success
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
