#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * @...: variable number of arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
				if (separator != NULL && i != n - 1)
				{
					printf("%s", separator);
				}
		}
		printf("\n");
		va_end(ap);
	}
}
