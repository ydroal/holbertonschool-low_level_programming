#include "main.h"
#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples
  * of 3 or 5 below 1024 (excluded).
  *
  * Return: Always 0.
  */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			sum = sum + i;
		else if (i % 5 == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
