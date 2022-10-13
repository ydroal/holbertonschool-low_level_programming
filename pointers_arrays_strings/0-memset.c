#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  *
  * @s: string to be written
  * @b: string to write
  * @n: size to fills
  * Return: @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
