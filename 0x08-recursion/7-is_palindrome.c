#include "holberton.h"
/**
 * _strlen_recursion - prints lenght of string.
 * @s: string.
 * Return: returns 0.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}

/**
 * _pal - checks chars against each other.
 * @s: string to check.
 * @len: length of string.
 * Return: 1 if pal else returns 0.
 */
int _pal(char *s, int len)
{
	if (*s != *(s + len))
		return (0);
	if (*(s + len) == '\0')
		return (1);
	return (_pal(++s, len - 2));
}
/**
 * is_palindrome - palindrome number.
 * @s: strings.
 * Return: returns 0 if yes else 1.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (_pal(s, len));
}
