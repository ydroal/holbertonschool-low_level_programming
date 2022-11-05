#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be counted its length.
 * Return: the length of a string.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_all - prints anything.
 *
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char type;
	char *tmp;
	int len;
	int i = 0;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		type = format[i];
		len = _strlen(format);
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				tmp = va_arg(ap, char*);
				if (tmp == NULL)
					tmp = "(nil)";
				printf("%s", tmp);
				break;
		}
		if ((type == 'c' || type == 'i' || type == 's' || type == 'f')
		   && i != len - 1)
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
