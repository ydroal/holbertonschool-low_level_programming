#include "main.h"

/**
  * print_times_table - Prints the n times table, starting with 0.
  *
  * @n: Number of times to print
  * Return: void
  */
void print_times_table(int n)
{
	int row;
	int column;
	int values;

	if (n <= 15 && n >=0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				values = row * column;
				if (values >= 100)
				{
					_putchar(((values / 100) % 10) + '0');
					_putchar(((values / 10) % 10) + '0');
					_putchar((values % 10) + '0');
				}
				else if (values >= 10)
				{
					if (column != 0)
						_putchar(' ');
					_putchar(((values / 10) % 10) + '0');
					_putchar((values % 10) + '0');
				}
				else
				{
					if (column != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(values + '0');
				}
				if (column != n)
				{
				_putchar(',');
				_putchar(' ');
				}		
			}		
			_putchar('\n');
		}
	}
}
