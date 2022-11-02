#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *tmp;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(ap, char*);
			if (tmp == NULL)
				printf("(nil)");
			else
				printf("%s", tmp);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}
