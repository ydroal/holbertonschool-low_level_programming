#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 *
 * @d: struct
 * @name: dog's name
 * @age: dog's age
 * @owner: neme of dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
