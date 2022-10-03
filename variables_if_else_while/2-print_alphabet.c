#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase
  * @char cnt: loop counter variable
  * Return: 0
  */

int main(void)
{
	char cnt;

	cnt = 'a';
	while (cnt <= 'z')
	{
		putchar(cnt);
		cnt++;
	}
	putchar('\n');

	return (0);
}
