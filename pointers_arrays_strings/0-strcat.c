#include "main.h"
/**
  * _strcat - concatenates two strings.
  *
  * @dest: string to be append the @src string.
  * @src: string append the @dest string.
  * Return: the pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
