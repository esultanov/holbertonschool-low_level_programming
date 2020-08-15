#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: size of memory to be allocated.
 * @c: the character to print.
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *arey;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arey = malloc(size * sizeof(char));
	if (arey)
	{
		for (i = 0; i < size; i++)
			arey[i] = c;
	}
	else
		return (NULL);
	return (arey);
}
