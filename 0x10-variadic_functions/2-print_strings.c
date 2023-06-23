#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string, then a line
 * @separator - separates strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *s;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(list, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s",s);
			}	
			if (i != n && separator != NULL)
			{
				printf("%s", separator);
			}
			va_end(list);
		}
		printf("\n");
	}
}
