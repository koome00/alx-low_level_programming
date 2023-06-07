#include "main.h"
/**
 * find_root - finds root
 * @r: root of number
 * @n: number
 * Return: returns root
 */
int find_root(int r, int n)
{
	if ((r * r > n) || (r == n / 2))
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
	}
	return (find_root(r + 1, n));
}
/**
 * _sqrt_recursion - find natural square root of n
 * @n: numxber
 * Return: returns sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(0, n));
}
