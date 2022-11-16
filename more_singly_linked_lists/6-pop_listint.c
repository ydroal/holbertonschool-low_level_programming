#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list,
  *               and returns the head node’s data (n).
  *
  * @head: pointer to listint_t list
  * Return: the head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int res;

	if (head == NULL)
		return (0);

	res = (*head)->n;

	tmp = *head;
	*head = tmp->next;
	free(tmp);

	return (res);
}
