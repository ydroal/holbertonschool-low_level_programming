#include "main.h"
/**
  * _pow_recursion - returns the value of x raised to the power of y.
  *
  * @x: value to raise to power of y
  * @y: value to the nth (power)
  * Return: result of calculate
  *	    -1 - @n is lower than
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
