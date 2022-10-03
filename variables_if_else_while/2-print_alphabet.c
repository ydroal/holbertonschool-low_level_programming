#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase
  * @char alphabet :loop counter variable

  * Return: 0
  */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}

