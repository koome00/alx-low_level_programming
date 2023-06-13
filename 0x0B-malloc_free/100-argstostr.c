#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++, s++;
	}
	return (len);
}

/**
 * argstostr - concatenates arguments
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0;
	int j = 0;
	int k = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1);

	str = malloc(len * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}

	return (str);
}
