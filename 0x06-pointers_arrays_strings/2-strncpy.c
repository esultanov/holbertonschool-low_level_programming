#include "holberton.h"
/**
 * _strncpy - copy string.
 * @dest: string.
 * @src: source string.
 * @n: var.
 * Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int elem;

	for (elem = 0; elem < n && src[elem] != '\0'; elem++)
		dest[elem] = src[elem];
	for (; n > elem; elem++)
		dest[elem] = '\0';
	return (dest);
}
