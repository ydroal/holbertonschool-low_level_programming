#include "main.h"

/**
  * get_bit - prints the binary representation of a number.
  *
  * @n: number
  * @index: the index of the bit to get
  * Return: the value of a bit at a given index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (sizeof(n) * 8 < index)
		return (-1);

	res = (n >> index) & 1;
	return (res);
}
