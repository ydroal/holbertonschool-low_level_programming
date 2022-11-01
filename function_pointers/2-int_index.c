#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: array of integer
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: index of the first element for which
 *         the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
		return (-1);
	}
	return (0);
}
