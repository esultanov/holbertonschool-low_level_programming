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
	unsigned int i;

	if (!str)
		return (NULL);
	arey = malloc(sizeof(*str));
	if (arey)
	{
		for (i = 0; str[i] != '\0'; i++)
			arey[i] = str[i];
	}
	else
		return (NULL);
	return (arey);
}
