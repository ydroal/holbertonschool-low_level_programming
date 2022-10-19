#include "main.h"
#include <stdio.h>
/**
  * main - prints its name
  *
  * @argc: number of command line arguments
  * @argv: An array containing the program command line arguments
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int c = 0;
	(void)*argv;

	while (c <= argc)
		c++;
	printf("%d\n", c - 2);

	return (0);
}
