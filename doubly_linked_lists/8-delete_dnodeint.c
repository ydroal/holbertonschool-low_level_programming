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
  * delete_dnodeint_at_index - deletes the node at index index
  *                            of a dlistint_t linked list.
  *
  * @head: pointer to dlistint_t
  * @index: index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *next;
	size_t len;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	len = dlistint_len(*head);

	if (index > len)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		node = *head;
		if (node != NULL)
			node->prev = NULL;
		return (1);
	}

	while (i < index - 1)
	{
		node =  node->next;
		i++;
	}

	if (index == len - 1)
	{
		free(node->next);
		node->next = NULL;
		return (1);
	}
	next = node->next->next;
	free(node->next);
	node->next = next;
	next->prev = node;
	return (1);
}
