#include "main.h"
/**
  * find_sqrt - find the natural square root of a number.
  *
  * @n: number that find natural square root
  * @x: number to power
  * Return: natural square root of a number
  *	    -1 - if @n does not have a natural square root
  */
int find_sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (find_sqrt(n, x + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
  *
  * @n: number that find natural square root
  * Return: natural square root of a number
  *	    -1 - if @n does not have a natural square root
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}
