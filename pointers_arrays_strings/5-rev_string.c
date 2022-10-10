#include "main.h"

/**
  * rev_string - reverses a string.
  *
  * @s: string to be reversed.
  * Return: void
  */
void rev_string(char *s)
{
	int length, head, tail;
	char tmp;

	length = 0;
	while (s[length] != '\0')
		length++;
	for (head = 0, tail = length - 1; head < length / 2; head++, tail--)
	{
		tmp = s[head];
		s[head] = s[tail];
		s[tail] = tmp;
	}
}
