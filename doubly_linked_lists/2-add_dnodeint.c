#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  *
  * @head: pointer to dlistint_ti
  * @n: number to set to the new element
  * Return: address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->prev = NULL;
	*head = new;

	return (new);
}
