#include "main.h"
/**
  * _strncpy - copy at most len characters from src into dst.
  * If src is less than len characters long, 
  * the remainder of dst is filled with ‘\0’
  *
  * @dest: destination
  * @src: string to be copied
  * Return: the pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
