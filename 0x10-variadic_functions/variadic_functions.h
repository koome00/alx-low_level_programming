#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct data - struct
 * @letter: letter
 * @func: function pointer
 */
typedef struct data
{
	char letter;
	void (*func)(va_list list);
} type;

#endif
