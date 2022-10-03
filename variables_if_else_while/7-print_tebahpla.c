#include <stdio.h>

/**
  * main - Prints the lowercase alphabet in reverse.
  * Return: 0
  */

int main(void)
{
	char cnt;

	cnt = 'z';
	while (cnt >= 'a')
	{
		putchar(cnt);
		cnt--;
	}
	putchar('\n');

	return (0);
}
