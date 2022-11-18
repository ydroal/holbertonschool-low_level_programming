#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  *
  * @b: pointing to a string of 0 and 1 chars
  * Return: the converted number,
  *	    0 if there is one or more chars in the string b
  *              that is not 0 or 1 and b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int len, mul;

	len = 0;
	mul = 1;
	res = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	len = len - 1;
	while (len >= 0)
	{
		res += (b[len] - '0') * mul;
		mul *= 2;
		len--;
	}
	return (res);
}
