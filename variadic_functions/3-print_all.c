#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 *
 * @ap: list of variadic arguments
 * Return: Nothing
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print integer
 *
 * @ap: list of variadic arguments
 * Return: Nothing
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print float
 *
 * @ap: list of variadic arguments
 * Return: Nothing
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_float - print float
 *
 * @ap: list of variadic arguments
 * Return: Nothing
 */

void print_string(va_list ap)
{
	char *tmp;

	tmp = va_arg(ap, char*);

	if (tmp == NULL)
		tmp = "(nil)";
	printf("%s", tmp);
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
	int i, j;
	char *sep = "";

	print_t p_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *p_type[j].c)
			{
				printf("%s", sep);
				p_type[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
