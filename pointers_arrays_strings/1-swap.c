#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  *
  * @a: value to be swaped for @b.
  * @b: value to be swaped for @a.
  * Return: void.
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
