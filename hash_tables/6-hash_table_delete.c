#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to hash table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	ht->array = NULL;
	free(ht);
}
