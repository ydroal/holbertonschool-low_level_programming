#include "main.h"

/**
  * main - Prints _putchar.
  * Return: 0
  */
int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
