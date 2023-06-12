#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer toa new string
 * Return: returns pointer if successful
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(str));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
