#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9.
  *
  * @a: The first integer to be calculated.
  * @b: The second integer to be calculated.
  * Return: calculation result.
  */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
	
}
