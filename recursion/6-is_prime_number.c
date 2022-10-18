#include "main.h"
/**
  * isPrime - judge if n is prime number or not.
  *
  * @n: number to be judged
  * @x: number for test
  * Return: 0 - if the input integer is a prime number
  *	    1 - otherwise
  */
int isPrime(int n, int x)
{
	if (n % x == 0)
		return (0);
	else if (n > x)
		isPrime(n, x + 1);
	return (1);
}

/**
  * is_prime_number - judge if n is prime number or not
  *
  * @n: number to be judged
  * Return: 0 - if the input integer is a prime number
  *	    1 - otherwise
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (isPrime(n, 2));
}
