# C - Singly linked lists

This is the project with C.
learn about linked lists.


## General

* When and why using linked lists vs arrays 
* How to build and use linked lists


## Tasks
0- Write a function that prints all the elements of a list_t list.

* Prototype: size_t print_list(const list_t *h);
* Return: the number of nodes
* Format: see example
* If str is NULL, print [0] (nil)
* You are allowed to use printf

File: 0-print_list.c

1- Write a function that returns the number of elements in a linked list_t list.

* Prototype: size_t list_len(const list_t *h);

File: 1-list_len.c

2- Write a function that adds a new node at the beginning of a list_t list.

* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup

File: 2-add_node.c

3- Write a function that adds a new node at the end of a list_t list.

* Prototype: list_t *add_node_end(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup

File: 3-add_node_end.c

4- Write a function that frees a list_t list.

* Prototype: void free_list(list_t *head);

File: 4-free_list.c

## Repo
* GitHub repository: holbertonschool-low_level_programming
* Directory: singly_linked_lists

