#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  * Return: void
  */
void print_alphabet_x10(void)
{
	char lowcase;
	int i;

	i = 0;

	while (i < 10)
	{
		for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
			_putchar(lowcase);
	_putchar('\n');
	i++;
	}
}
