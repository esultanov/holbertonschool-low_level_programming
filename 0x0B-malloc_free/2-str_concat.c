#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: point to a newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *arey;
	int i, n, t, m, o;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		;
	for (i = 0; s2[i] != '\0'; i++)
		;
	i++;
	t = i + n;
	arey = malloc(t * sizeof(char));
	if (arey)
	{
		for (m = 0; m < n; m++)
			arey[m] = s1[m];
		for (o = 0; o < i; o++, m++)
			arey[m] = s2[o];
	}
	else
		return (NULL);
	return (arey);
}
