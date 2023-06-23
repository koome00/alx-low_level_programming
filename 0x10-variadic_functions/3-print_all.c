#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_int - print int
 * @list: list
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_str - prints strings
 * @list: list
 */
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_float - prints float
 * @valist: valist
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_char - prints char
 * @valist: valist
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print-all - prints anything
 * @format: list of types of arg
 */
void print_all(const char * const format, ...)
{
