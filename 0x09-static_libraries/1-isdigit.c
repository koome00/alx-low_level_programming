#include "main.h"

/**
 * _isdigit - detects digits
 * @c: is a digits
 * Return: 1 if true or 0 if false
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
