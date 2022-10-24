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
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  *
  * @str: string to be copied to newly allocated space in memory
  * Return: pointer to the duplicated string
  *	    NULL if it fails
  */

char *_strdup(char *str)
{
	char *dup;
	int len;
	int i;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dup = malloc(sizeof(*dup) * len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
		dup[i] = str[i];
	return (dup);
	free(dup);
}
