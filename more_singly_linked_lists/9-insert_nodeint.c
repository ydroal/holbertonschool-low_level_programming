#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  *
  * @head: double pointer to listint_t list
  * @idx: the index of the list where the new node should be added.
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	node = *head;
	while (node != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}

	new->next = node->next;
	node->next = new;

	return (new);
}
