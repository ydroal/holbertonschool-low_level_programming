#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  *
  * @head: pointer to listint_t list
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
