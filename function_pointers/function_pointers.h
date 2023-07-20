#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stddef.h>
/*
 * File: main.h
 * Author: Ricardo Valdes
 * Description: Header file of  prototypes for functions
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
