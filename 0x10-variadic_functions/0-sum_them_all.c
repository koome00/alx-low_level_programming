#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: integers to add
 *Return: returns sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
