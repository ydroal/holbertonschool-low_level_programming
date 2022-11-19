#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  *
  * @n: number
  * @index: the index of the bit to set
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	bit <<= index;
	*n &= ~bit;
	return (1);
}
