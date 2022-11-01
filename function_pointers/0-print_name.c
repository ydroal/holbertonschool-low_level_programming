#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name.
 *
 * @name: name to prints
 * @f: function pointers
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
