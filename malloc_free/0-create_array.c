#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars,
  *		   and initializes it with a specific char
  *
  * @size: length of array to create.
  * @c: char to initializes an array.
  * Return: pointer to the array
  *	    NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
