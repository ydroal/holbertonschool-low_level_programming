#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked listint_t list.
  *
  * @h: pointer to listint_t
  * Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t res;

	res = 0;

	while (h != NULL)
	{
		h = h->next;
		res++;
	}
	return (res);
}
