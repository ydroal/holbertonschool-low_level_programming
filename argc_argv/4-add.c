#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds positive numbers.
  *
  * @argc: number of command line arguments
  * @argv: An array containing the program command line arguments
  * Return: 0 - program executed successfully
  *	    1 - if one of the number is not digits
  */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum  = 0;
	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i <= argc - 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
