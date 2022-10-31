#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - data of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
