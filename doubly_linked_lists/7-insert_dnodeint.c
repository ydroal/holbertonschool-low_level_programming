#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  *
  * @h: pointer to dlistint_t
  * @idx: index of the list where the new node should be added
  * @n: the integer to set to new node
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *new;
	unsigned int i = 0;

	node = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));


	while (node != NULL && i < idx - 1)
	{
		if (node == NULL)
			return (NULL);
		node =  node->next;
		i++;
	}

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = node->next;
	new->prev = node;
	node->next->prev = new;
	node->next = new;
	return (new);
}
