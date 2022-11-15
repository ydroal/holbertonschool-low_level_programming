#include "lists.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be counted its length.
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  * add_node_end - adds a new node at the end of a list_t list.
  *
  * @head: the head address of the list
  * @str: strings to set to the new element
  * Return: the address of the new element,
  *	    or NULL if it failed.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node;
	char *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	tmp = strdup(str);
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = tmp;
	new->len = _strlen(tmp);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;

		node->next = new;
	}

	return (new);
}
