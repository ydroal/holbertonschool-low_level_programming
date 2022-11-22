#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  *
  * @head: pointer to dlistint_ti
  * @n: number to set to the new element
  * Return: address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		new->prev = node;
		node->next = new;
	}
	new->next = NULL;

	return (new);
}
