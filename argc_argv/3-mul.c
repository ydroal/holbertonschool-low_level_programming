#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers.
  *
  * @argc: number of command line arguments
  * @argv: An array containing the program command line arguments
  * Return: 0 - program executed successfully
  *	    1 - If the program does not receive two arguments
  */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
