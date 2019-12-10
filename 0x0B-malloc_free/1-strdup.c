#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string.
 * @str: the string.
 * Return: pointer to the new str.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int u, c;

	if (str == NULL)
		return (NULL);
	u = 0;
	while (*(str + u) != '\0')
		u++;
	u++;
	p = malloc(sizeof(char) * u);
	if (p == NULL)
		return (NULL);
	c = 0;
	while (*(str + c))
	{
		*(p + c) = *(str + c);
		c++;
	}
	*(p + c) = '\0';
	return (p);
}
