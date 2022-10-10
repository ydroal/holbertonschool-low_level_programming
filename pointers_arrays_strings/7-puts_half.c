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
  * puts_half - prints half of a string, followed by a new line.
  *
  * @str: string to be printed.
  * Return: void
  */

void puts_half(char *str)
{
	int i, length;

	length = _strlen(str);
	i = (length + 1) / 2;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
