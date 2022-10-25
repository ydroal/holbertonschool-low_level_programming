#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  *
  * @width: string to be append the @s2 string
  * @height: string append the @s1 string.
  * Return: pointer to a 2 dimentional array
  *         NULL if it fails
  */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if ((height == 0) || (width == 0))
		return (NULL);

	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);

	for (i = 0; i < height; i++)
		free(arr[i]);
	free(arr);
}
