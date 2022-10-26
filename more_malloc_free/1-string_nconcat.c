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
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  * string_nconcat - concatenates two strings.
  *
  * @s1: string to be concatenated
  * @s2: string to be concatenated
  * @n: size to concatenantes
  * Return: pointer to the allocated space in memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (len2 > n)
		len2 = n;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (j < len2 && j < n)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';
	return (concat);
}
