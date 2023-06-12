#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to add to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	while (i < (int)size)
	{
		*(ar + i) = c;
		i++;
	}
	return (ar);
}
