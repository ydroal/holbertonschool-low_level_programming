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
	return (i + 1);
}

/**
  * argstostr - concatenates all the arguments of your program.
  *
  * @ac: number of arguments
  * @av: pointer to the command line argument supplied
  * Return: pointer to a new string
  */

char *argstostr(int ac, char **av)
{
	char *str;
	int size = 0;
	int i = 1;
	int j, k;
	int l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i <= ac - 1)
	{
		size += _strlen(&av[i][0]);
		i++;
	}

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (j = 1; j <= ac - 1; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++, l++)
			str[l] = av[j][k];
		str[l] = '\n';
		l = l + 1;
	}
	return (str);
}
