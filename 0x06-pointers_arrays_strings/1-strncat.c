#include "holberton.h"
/**
 * _strncat - concatenate string.
 * @dest: string.
 * @src: source string.
 * @n: var.
 * Return: string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dst, sr;

	for (dst = 0; dest[dst] != '\0'; dst++)
		;
	for (sr = 0; src[sr] != '\0' && n > 0; sr++, n--, dst++)
		dest[dst] = src[sr];
	return (dest);
}
