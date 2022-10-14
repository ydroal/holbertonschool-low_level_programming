#include "main.h"
#include <stdlib.h>
/**
  * _strchr - locates a character in a string.
  *
  * @s: string to be serch
  * @c: character to locates
  * Return: pointer to the located character
  *	    NULL if the character does not appear in the string
  */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
		if (c == '\0')
			return (s);
	return (NULL);
}
