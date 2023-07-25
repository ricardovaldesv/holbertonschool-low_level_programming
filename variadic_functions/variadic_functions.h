#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/*
 * File: main.h
 * Author: Ricardo Valdes
 * Description: Header file of  prototypes for functions
 */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct variables - Struct variables
 *
 * @ptr: The format
 * @function: The function associated
 */

typedef struct variables
{
	char *ptr;
	void (*function)(va_list argts);
} type_var;

#endif
