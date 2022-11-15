#include "lists.h"

/**
  * free_list - frees a list_t list.
  *
  * @head: the head address of the list
  * Return: Nothing
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
