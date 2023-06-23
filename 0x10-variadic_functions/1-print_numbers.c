#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
			va_end(list);
		}
	}
	printf("\n");
}
