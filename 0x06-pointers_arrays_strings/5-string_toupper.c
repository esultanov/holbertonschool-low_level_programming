#include "holberton.h"
/**
 * string_toupper - low 2 uppercase.
 * @c: string.
 * Return: always 0.
 */
char *string_toupper(char *c)
{
	int elm;

	for (elm = 0; c[elm] != '\0'; elm++)
		if (c[elm] > 96 && c[elm] < 123)
			c[elm] -= 32;
	return (c);
}
