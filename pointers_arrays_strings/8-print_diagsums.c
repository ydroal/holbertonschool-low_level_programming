#include <stdio.h>
#include "main.h"
/**
  * print_diagsums - prints the sum of the two diagonals
  *                  of a square matrix of integers.
  *
  * @a: matrix of integers to draw a square
  * @size: size of array
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum = 0;
	int sum1 = 0;

	while (i <= (size * size) - 1)
	{
		sum += a[i];
		i += size + 1;
	}

	while (j < (size * size) - 1)
	{
		sum1 += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", sum, sum1);

}
