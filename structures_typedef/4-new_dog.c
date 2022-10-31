#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 *
 * @s: string to be counted its length.
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be copied to newly allocated space in memory
 * Return: pointer to the duplicated string
 *	    NULL if it fails
 */

char *_strdup(char *str)
{
	char *dup;
	int len;
	int i;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	dup = malloc(sizeof(*dup) * len + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len ; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 * Return: pointer to created struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dup_name;
	char *dup_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dup_name = _strdup(name);
	if (dup_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dup_owner = _strdup(owner);
	if (dup_owner == NULL)
	{
		free(dup_name);
		free(dog);
		return (NULL);
	}

	dog->name = dup_name;
	dog->age = age;
	dog->owner = dup_owner;

	return (dog);
}
