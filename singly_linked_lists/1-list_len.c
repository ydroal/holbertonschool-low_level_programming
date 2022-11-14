#include <stddef.h>
#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list.
  *
  * @h: pointer to list_t
  * Return: the number of elements of list_t list.
  */

size_t list_len(const list_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		res += 1;
		h = h->next;
	}
	return (res);
}
