#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  *
  * @head: pointer to listint_t list
  * @index: the index of the node, starting at 0
  * Return: the nth node of a listint_t linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);

	node = head;
	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	return (node);
}
