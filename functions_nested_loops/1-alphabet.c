#include "main.h"

/**
  * print_alphabet - prints the alphabet, in lowercase
  * Return: void
  */
void print_alphabet(void)
{
	char lowcase;

	lowcase = 'a';
	while (lowcase <= 'z')
	{
		_putchar(lowcase);
		lowcase++;
	}
	_putchar('\n');
}
