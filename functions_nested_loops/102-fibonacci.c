#include "main.h"
#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
  *
  * Return: Always 0.
  */
int main(void)
{
	long f1 = 1;
	long f2 = 2;
	int i = 0;
	long fx;

	printf("%ld", f1);
	while (i < 50 - 1)
	{
		if (i != 49)
			printf(", ");
		printf("%ld", f2);
		fx = f2 + f1;
		f1 = f2;
		f2 = fx;
		i++;
	}
	printf("\n");
	return (0);
}
