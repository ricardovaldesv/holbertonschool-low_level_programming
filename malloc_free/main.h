#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: Ricardo Valdes
 * Description: Header file of  prototypes for functions
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
