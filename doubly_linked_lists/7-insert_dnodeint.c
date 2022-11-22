#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 *
 * @h: pointer to dlistint_t
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		res++;
		h = h->next;
	}
	return (res);
}

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
	dlistint_t *node = *h;
	dlistint_t *new;
	size_t len;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	len = dlistint_len(*h);

	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len)
		return (add_dnodeint_end(h, n));

	while (i < idx - 1)
	{
		node =  node->next;
		i++;
	}

	new->next = node->next;
	new->prev = node;
	node->next->prev = new;
	node->next = new;
	return (new);
}
