#include "main.h"

/**
  * print_number - prints an integer.
  *
  * @n: the number to be printed.
  * Return: void
  */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if ( num > 9)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else if (n <= 9)
		_putchar(num + '0');
}
