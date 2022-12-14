#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0.
  *
  * Return: void
  */
void times_table(void)
{
	int row;
	int column;
	int values;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			values = row * column;
			if (values >= 10)
			{
				_putchar(((values / 10) % 10) + '0');
				_putchar((values % 10) + '0');
			}
			else
			{
				if (column != 0)
					_putchar(' ');
				_putchar((row * column) + '0');
			}
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
