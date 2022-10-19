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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
