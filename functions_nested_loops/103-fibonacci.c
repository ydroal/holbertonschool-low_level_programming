#include "main.h"
#include <stdio.h>

/**
  * main - By considering the terms in the Fibonacci sequence
  * whose values do not exceed 4,000,000, write a program that
  * finds and prints the sum of the even-valued terms.
  *
  * Return: Always 0.
  */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	long sum = 0;
	long fx;

	while (f2 < 4000000)
	{
		fx = f2 + f1;
		f1 = f2;
		f2 = fx;
		if (f2 % 2 == 0)
			sum = sum + f2;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
