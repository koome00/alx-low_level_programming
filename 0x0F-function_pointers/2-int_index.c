#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: array with numbers
 * @size: number of elements
 * @cmp: pointer to the function to be used to compare values
 * Return: Returns index of element, if no element,-1 is returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
