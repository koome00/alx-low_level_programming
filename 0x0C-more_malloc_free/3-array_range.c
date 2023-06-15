#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *a;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	a = malloc(sizeof(*a) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min + i <= max; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
