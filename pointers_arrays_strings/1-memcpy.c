#include "main.h"

/**
  * _memcpy - copies memory area.
  *
  * @dest: memory area to be written
  * @src: memory area to copy
  * @n: size to copy
  * Return: @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
