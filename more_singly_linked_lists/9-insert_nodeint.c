#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  *
  * @head: double pointer to listint_t list
  * @idx: the index of the list where the new node should be added.
  * @n: the integer to set to new node
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new;
	unsigned int i;

	i = 0;
	if (head == NULL && idx != 0)
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

	if (node->next == NULL)
		return (NULL);

	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		new->next = node->next;
		node->next = new;
		return (new);
	}
}
