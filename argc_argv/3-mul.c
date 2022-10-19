#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints its name
  *
  * @argc: number of command line arguments
  * @argv: An array containing the program command line arguments
  * Return: Always 0
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
