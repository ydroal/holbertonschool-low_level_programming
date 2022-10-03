#include <stdio.h>

/**
  * main - Prints all single digit numbers of base 10 starting from 0.
  * Return: 0
  */

int main(void)
{
	int cnt;

	cnt = 0;
	while (cnt <= 9)
	{
		putchar(cnt + '0');
		cnt++;
	}
	putchar('\n');

	return (0);
}
