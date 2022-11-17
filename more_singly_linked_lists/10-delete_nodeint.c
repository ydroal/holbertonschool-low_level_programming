#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of
  *                           a listint_t linked list.
  *
  * @head: double pointer to listint_t list
  * @index: the index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	else
	{
		while (i < index - 1)
		{
			if (node == NULL)
				return (-1);
			node = node->next;
			i++;
		}
		next = node->next->next;
		free(node->next);
		node->next = next;
		return (1);
	}
}
