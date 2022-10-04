#include <stdio.h>

/**
  * main - Prints all the numbers of base 16 in lowercase.
  * Return: 0
  */

int main(void)
{
	int cnt;
	char cnt_alpha;

	cnt = 0;
	cnt_alpha = 'a';

	while (cnt <= 9)
	{
		putchar(cnt + '0');
		cnt++;
	}
	while (cnt_alpha <= 'f')
	{
		putchar(cnt_alpha);
		cnt_alpha++;
	}
	putchar('\n');

	return (0);
}
