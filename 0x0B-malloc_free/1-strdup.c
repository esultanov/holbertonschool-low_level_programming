#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicate string.
 */
char *_strdup(char *str)
{
	char *arey;
	int i, n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	n++;
	arey = malloc(n * sizeof(char));
	if (arey)
	{
		for (i = 0; str[i] != '\0'; i++)
			arey[i] = str[i];
	}
	else
		return (NULL);
	arey[i + 1] = '\0';
	return (arey);
}
