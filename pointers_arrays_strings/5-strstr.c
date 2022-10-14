#include "main.h"
#include <stdlib.h>
/**
  * _strstr - finds the first occurrence of the substring needle
  *	      in the string haystack.
  *
  * @haystack: string to be scanned
  * @needle: string to be searched with-in haystack string
  * Return: pointer to the first occurrence in haystack of
  *	    any of the entire sequence of characters specified in needle.
  *	    NULL - if the sequence is not present in haystack.
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[i] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
