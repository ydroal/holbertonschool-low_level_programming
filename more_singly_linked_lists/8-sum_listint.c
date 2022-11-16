#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of
  *               a listint_t linked list.
  *
  * @head: pointer to listint_t list
  * Return: the sum of all the data (n) of a listint_t linked list.
  */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int res;

	res = 0;
	if (head == NULL)
		return (0);

	node = head;
	while (node != NULL)
	{
		res += node->n;
		node = node->next;
	}
	return (res);
}
