#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of string.
 * @s: string.
 * Return: Length.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - concatinates strings.
 * @s1: 1 string.
 * @s2: 2nd string.
 * Return: pointer to the new str.
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *nol;
	unsigned int u, c1, c2;

	nol = "";
	if (s1 == NULL)
		s1 = nol;
	if (s2 == NULL)
		s2 = nol;
	c1 = _strlen(s1);
	c2 = _strlen(s2) + 1;
	p = malloc(c1 + c2);
	if (p == NULL)
		return (NULL);
	for (u = 0; u < c1; u++)
		*(p + u) = *(s1 + u);
	for (; u < c1 + c2; u++)
		*(p + u) = *(s2 + u - c1);
	return (p);
}
