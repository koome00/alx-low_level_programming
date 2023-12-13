#include "search_algos.h"

/**
 * linear_search - searches linearly
 * @array: array of ints
 * @size: size of array
 * @value: value to search
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
