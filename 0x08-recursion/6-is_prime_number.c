#include "main.h"
/**
 * check - checks if its prime
 * @n: number to check
 * @x: divisor
 * Return: returns 1 if prime or 0 if not
 */
int check(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if ((n % x == 0) || (n < 2))
	{
		return (0);
	}
	return (check(n, x + 1));
}
/**
 * is_prime_number - finds prime number
 * @n: number to check
 * Return: return 1 is its prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check(n, 3));
}
