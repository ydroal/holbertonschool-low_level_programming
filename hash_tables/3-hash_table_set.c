#include "hash_tables.h"

/**
 * hash_node_create - create the node to set to hash table
 *
 * @key: the key
 * @value: the value for the key
 *
 * Return: pointer to new node
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = NULL;
	return (new);
}

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
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *new;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		ht->array[index] = hash_node_create(key, value);
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}

	new = hash_node_create(key, value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
