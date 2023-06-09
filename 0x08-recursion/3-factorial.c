#include "main.h"

/**
 * factorial - factorial
 * @n: number
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
