#include "main.h"

/**
  * _strlen - returns the length of a string.
  *
  * @s: string to be counted its length.
  * Return: the length of a string.
  */
int _strlen(char *s)
{
	int res;

	res = 0;
	while (*s != '\0')
	{
		res++;
		s++;
	}
	return (res);
}
