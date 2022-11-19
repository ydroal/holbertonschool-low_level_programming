#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip to get
  *             from one number to another.
  *
  * @n: number1
  * @m: number2
  * Return: number of bits need to flip to get from one number to another.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;
	unsigned int t1;
	unsigned int t2;

	while (n > 0 || m > 0)
	{
		t1 = (n & 1);
		t2 = (m & 1);

		if (t1 != t2)
			res++;

		n >>= 1;
		m >>= 1;
	}
	return (res);
}
