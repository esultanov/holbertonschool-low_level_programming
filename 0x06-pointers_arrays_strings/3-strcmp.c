#include "holberton.h"
/**
 * _strcmp - compare strings.
 * @s1: 1st str.
 * @s2: 2nd str.
 * Return: negative or positive.
 */

int _strcmp(char *s1, char *s2)
{
	int elm;

	for (elm = 0; s1[elm] != '\0' || s2[elm] != '\0'; elm++)
	{
		if (s1[elm] != s2[elm])
			return (s1[elm] - s2[elm]);
	}
	return (0);
}
