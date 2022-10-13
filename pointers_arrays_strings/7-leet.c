#include "main.h"
/**
  * leet - encodes a string into 1337.
  * -Letters a and A should be replaced by 4
  * -Letters e and E should be replaced by 3
  * -Letters o and O should be replaced by 0
  * -Letters t and T should be replaced by 7
  * -Letters l and L should be replaced by 1
  *
  * @str: string to be encoded
  * Return: pointer of the string capitalized
  */
char *leet(char *str)
{
	int i = 0;
	char trgt[ ] = {'a', 'e', 'o', 't', 'l'};
	char src[ ] = {'4', '3', '0', '7', '1'};
	char *r;

	r = str;
	while (*r)
	{
		for (i = 0; i < 5; i++)
		{
			if (*r == trgt[i] || *r == trgt[i] - 32)
				*r = src[i];
		}
		r++;
	}
	return (r);
}
