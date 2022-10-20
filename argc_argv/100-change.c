#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the minimum number of coins
  *        to make change for an amount of money.
  *
  * @argc: number of command line arguments
  * @argv: An array containing the program command line arguments
  * Return: 0 - program executed successfully
  *	    1 - if number of argument is not 1
  */

int main(int argc, char *argv[])
{
	int i, x, count;
	int money[5] = {25, 10, 5, 2, 1};

	count  = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
	{	printf("0\n");
		return (0);
	}
	else
		x = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (x == 0)
			break;
		count += x / money[i];
		x -= money[i] * (x / money[i]);
	}
	printf("%d\n", count);
	return (0);
}



