#include "main.h"
/**
  * print_chessboard - prints the chessboard.
  *
  * @a: array to be printed
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
