#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase, except q and e.
  * Return: 0
  */

int main(void)
{
	char cnt;

	for (cnt = 'a'; cnt <= 'z'; cnt++)
	{
		if (cnt == 'e' || cnt == 'q')
			continue;
		putchar(cnt);
	}
	putchar('\n');

	return (0);
}
