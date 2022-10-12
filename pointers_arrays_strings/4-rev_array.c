#include "main.h"
/**
  * reverse_array - reverses the content of an array of integers.
  *
  * @a: an array of integers
  * @n: number of elements of the array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int head, tail, temp;

	for (head = 0, tail = n - 1; head < n / 2; head++, tail--)
	{
		temp = a[head];
		a[head] = a[tail];
		a[tail] = temp;
	}
}
