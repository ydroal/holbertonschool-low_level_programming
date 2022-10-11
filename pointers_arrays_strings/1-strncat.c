#include "main.h"
/**
  * _strlen - returns the length of a string.
  *
  * @s: string to be counted its length.
  * Return: the length of a string.
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  * _strncat - concatenates two strings.
  * it will use at most n bytes from src and
  * src does not need to be null-terminated
  * if it contains n or more bytes.
  *
  * @dest: destination
  * @src: string to be copied
  * Return: the pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i = 0;

	length = _strlen(dest);

	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
