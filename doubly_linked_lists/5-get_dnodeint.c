#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  *
  * @head: pointer to dlistint_t
  * @index: index of the node, starting from 0
  * Return: nth node of a dlistint_t linked list.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i != index)
		return (NULL);
	return (head);
}
