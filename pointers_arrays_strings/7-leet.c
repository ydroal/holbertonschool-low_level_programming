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
	char trgt[5] = {'a', 'e', 'o', 't', 'l'};
	char src[5] = {'4', '3', '0', '7', '1'};
	char *r;

	r = str;
	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == trgt[i] || *str == trgt[i] - 32)
				*str = src[i];
		}
		str++;
	}
	return (r);
}
