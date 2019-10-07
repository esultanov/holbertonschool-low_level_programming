#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @n: first bytes.
 * @src: pointed memory erea.
 * @dest: destination area.
 * Return: pointer to the dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int test;

	for (test = 0; n > 0; n--, test++)
	{
		dest[test] = src[test];
	}
	return (dest);
}
