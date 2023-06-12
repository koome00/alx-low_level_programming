#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int len3 = 0;
	int i = 0, j = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2) + 1;
	len3 = len1 + len2;

	ptr = malloc(sizeof(char) * len3);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
