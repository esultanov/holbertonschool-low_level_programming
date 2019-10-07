#include "holberton.h"
/**
 * _strchr - locates character in string..
 * @c: character.
 * @s: string.
 * Return: pointer to char.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}
