#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings.
  *
  * @s1: string to be append the @s2 string
  * @s2: string append the @s1 string.
  * Return: pointer to concatenated string
  *         NULL if it fails
  */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2;
	int i, j;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1 ; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2 ; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
	free(concat);
}
