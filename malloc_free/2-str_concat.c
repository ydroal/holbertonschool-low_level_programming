#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be counted its length.
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * str_concat - concatenates two strings.
  *
  * @s1: string to be append the @s2 string
  * @s2: string append the @s1 string.
  * Return: pointer to concatenated string
  *	    NULL if it fails
  */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2;
	int i, j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = malloc(sizeof(*concat) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		concat[0] = '\0';
	for (i = 0; i < len1 ; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2 ; j++)
		concat[i + j] = s2[j];
	return (concat);
	free(concat);
}
