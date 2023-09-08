#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table
 *
 * Return: No return, NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;
	unsigned long int m = 0, n = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (m = n; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			test = ht->array[m];
			while (test)
			{
				printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					   test->key, test->value), n++;
				test = test->next;
			}
		}
	}
	printf("}\n");
}
