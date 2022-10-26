#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc.
  *
  * @nmemb: number of elements of an array
  * @size: byte size of each elements
  * Return: pointer to the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
