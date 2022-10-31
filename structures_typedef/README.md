# C - Structures, typedef

This is the project with C.
learn about Structures and typedef.

## General 

* What are structures, when, why and how to use them
* How to use typedef

## Tasks

0-Define a new type struct dog with the following elements:

* name, type = char *
* age, type = float
* owner, type = char *
File: dog.h


1-Write a function that initialize a variable of type struct dog
File: 1-init_dog.c

2-Write a function that prints a struct dog

* Prototype: void print_dog(struct dog *d);
* Format: see example bellow
* You are allowed to use the standard library
* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.
File: 2-print_dog.c


3-Define a new type dog_t as a new name for the type struct dog.
File: dog.h

4-Write a function that creates a new dog.
File: 4-new_dog.c

5-Write a function that frees dogs.

* Prototype: void free_dog(dog_t *d);
File: 5-free_dog.c

## Repo
* GitHub repository: holbertonschool-low_level_programming
* Directory: structures_typedef

