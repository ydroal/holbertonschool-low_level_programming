#include <stdio.h>

/**
 * print - print the string
 *
 * Return: Nothing
 */

__attribute__((constructor))
void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
