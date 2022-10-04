#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */

/**
  * main - Prints _putchar.
  * Return: 0
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
