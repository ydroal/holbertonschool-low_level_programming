#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list.
  *
  * @h: pointer to list_t
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			res += 1;
			h = h->next;
		}
		else
		{
		printf("[%d]", h->len);
		printf("%s\n", h->str);
		res += 1;
		h = h->next;
		}
	}
	return (res);
}
