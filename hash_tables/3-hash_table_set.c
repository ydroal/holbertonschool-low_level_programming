#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: pointer to hash table
 * @key: the key
 * @value: the value for the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *copy_value;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
