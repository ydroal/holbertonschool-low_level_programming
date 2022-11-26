#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int isPrinted = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i <= ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			for (; node != NULL; node = node->next)
				if (isPrinted == 0)
				{
					printf("\'%s\': \'%s\'", node->key, node->value);
					isPrinted = 1;
				}
				else
					printf(", \'%s\': \'%s\'", node->key, node->value);
		}
	}
	printf("}\n");
}
