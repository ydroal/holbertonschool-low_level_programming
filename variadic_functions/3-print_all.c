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
	const char *p;
	char *tmp;
	int len;
	int i = 0;

	p = format;
	len = _strlen(p);
	va_start(ap, format);

	while (*p != '\0')
	{
		switch (*p)
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
					printf("(nil)");
				else
					printf("%s", tmp);
				break;
		}
		if ((*p == 'c' || *p == 'i' || *p == 's' || *p == 'f') && i != len - 1)
		printf(", ");
		p++;
		i++;
	}
	printf("\n");
	va_end(ap);
}
