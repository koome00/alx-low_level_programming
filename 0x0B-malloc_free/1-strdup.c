#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		len++;
		i++;
	}
	len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
