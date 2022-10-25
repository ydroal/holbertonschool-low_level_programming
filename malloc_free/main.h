#ifndef _MAIN_H_
#define _MAIN_H_
/**
  * File: main.h
  * Auth: Yoko ONO
  *
  * Header file containing the prototypes of all functions for this projects.
  */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
#endif