#include "main.h"
#include <stdlib.h>
/**
  * _strspn - gets the length of a prefix substring.
  *
  * @s: string to be scanned
  * @accept: string containing the characters to match.
  * Return: number of characters spanned
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		j = 0;
		i++;
		if (s[i] == ' ')
			break;
	}
	return (count);
}
