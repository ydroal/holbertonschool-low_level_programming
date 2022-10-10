#include "main.h"

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
  * puts2 - prints every other character of a string,
  * starting with the first character.
  *
  * @str: string to be printed.
  * Return: void
  */

void puts2(char *str)
{
	int i, length;

	length = _strlen(str);
	i = 0;
	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
