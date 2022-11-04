#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Run the program
  *
  * @argc: number of command line arguments
  * @argv: An array containing the program
  *        command line arguments
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != '\0' || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
