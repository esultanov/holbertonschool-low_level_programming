#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa.
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int u;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == 0)
		return (NULL);
	for (u = 0; u < size; u++)
		p[u] = c;
	return (p);
}
