#include "main.h"
/**
  * factorial - returns the factorial of a given number.
  *
  * @n: given number for factorial
  * Return: result of calculate
  *	    -1 - @n is lower than
  *	    1 - factorial of 0
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
