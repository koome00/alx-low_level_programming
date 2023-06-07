#include "main.h"
int is_palindrome_helper(char *s, char *end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - check if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *end;

	if (*s == '\0')
		return (1);

	end = s + (_strlen_recursion(s) - 1);
	return (is_palindrome_helper(s, end));
}

/**
 * is_palindrome_helper - checks palindrome
 * @head: string start
 * @tail: end of string
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome_helper(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (is_palindrome_helper(head + 1, tail - 1));

	return (0);
}
/**
 * _strlen_recursion - string length
 * @s: string length
 * Return: returns string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
