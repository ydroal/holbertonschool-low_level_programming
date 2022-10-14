#include "main.h"
#include <stdlib.h>
/**
  * _strpbrk - finds the first character in the string s
  *            that matches any character specified in accept.
  *
  * @s: strsng to be scanned
  * @accept: string containing the characters to match.
  * Return: pointer to the character in s that matches
  *         one of the characters in accept.
  *	    else - NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
