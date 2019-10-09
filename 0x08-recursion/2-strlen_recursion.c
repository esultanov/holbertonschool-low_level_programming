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
