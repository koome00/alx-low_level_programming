#include <stdlib.h>
#include "main.h"

unsigned int _strlen(char *s);
/**
 * string_nconcat - concatenate a string to n bytes of a second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of string 2 to concatenate
 * Return: pointer to concatenated string (success) or NULL (fail)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	char empty = '\0';
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = &empty;
	}
	if (s2 == NULL)
	{
		s2 = &empty;
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (len2 < n)
	{
		n = len2;
	}
	s = malloc(sizeof(*s) * (len1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[i + len1] = s2[i];
	}
	s[i + len1] = '\0';
	return (s);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
