#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers.
  *
  * @min: minimum number of elements of an array
  * @max: maximum number of element of an array
  * Return: pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		arr[i] = min;
	return (arr);
}
